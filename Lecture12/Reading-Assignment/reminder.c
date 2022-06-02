/* Prints a one-month r e minder list */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50   /* maximum number of reminders */
#define MSG_LEN 60      /* max length of reminder message */

int read_line(char str[], int n); // function for reading the reminders

int main(void)
{
  //Initialization and declaration
  char reminders[MAX_REMIND][MSG_LEN+3];
  char day_str[3], msg_str[MSG_LEN+1];
  int day, i, j, num_remind = 0;

  
  for (;;) {
    /* check the limit of the number of reminders */
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter day and reminder: ");
    scanf("%2d", &day);
    if (day == 0)
      break;
    sprintf(day_str, "%2d", day); //convert the day back into string form
    read_line(msg_str, MSG_LEN);

    /* search the array to determine where the day belongs */
    for (i = 0; i < num_remind; i++)
      if (strcmp(day_str, reminders[i]) < 0) 
        break;
    /* copy the reminders into the reminders array*/
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j-1]);

    strcpy(reminders[i], day_str); // copy the day into the array
    strcat(reminders[i], msg_str); // append the reminder to the day

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
    if (i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
