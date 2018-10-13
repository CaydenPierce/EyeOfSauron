#include "ESC.h" //esc library

#define SPEED_MIN (1000)                                  // Set the Minimum Speed in microseconds
#define SPEED_MAX (2000)
#define slow_speed (1400)
#define slow_speed2 (1600)
ESC myESC (9, SPEED_MIN, SPEED_MAX, 500);  
int oESC;


void setup() {
  myESC.arm();                                            // Send the Arm value so the ESC will be ready to take commands
  delay(5000);                                            // Wait for a while
}




void loop() {
  for (oESC = 0; oESC <= SPEED_MAX; oESC += 1) {  // goes from 1000 microseconds to 2000 microseconds
    myESC.speed(400);                                    // tell ESC to go to the oESC speed value
    delay(10);                                            // waits 10ms for the ESC to reach speed
  }
  delay(5000);                                            // Wait for a while befor restart
}
