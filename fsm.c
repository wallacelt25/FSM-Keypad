#include <stdio.h>

int main(void) {
  // Declare variables for current state and input event
  int current_state = 0;
  int input_event = 1;
  
  // Loop forever
  while (1) {
    // Read input event
    scanf("%d", &input_event);
    
    // Update state using boolean equation
    if (input_event) {
      current_state = 1;
    } else {
      current_state = 0;
    }
    
    // Print current state
    printf("%d\n", current_state);
  }
  
  return 0;
}