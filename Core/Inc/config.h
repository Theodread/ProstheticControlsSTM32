#ifndef PROSTHETICCONTROLSSTM32_CONFIG_H
#define PROSTHETICCONTROLSSTM32_CONFIG_H

#define PWM_PERIOD 3.0                          // PWM Signal Period in ms
#define ARR_VALUE 255                           // Auto-Reload Register Value. Set in CubeMX, can't seem to access the value directly
#define WIDTH_PER_DEGREE 11.1e-3                // Width Per Degree in ms (i.e. the amount to change the PWM signal by to move one degree, this is specific to the servo model)
#define STARTING_PULSE 0.7                      // Starting position for each servo in ms, set at 0.7 for a small buffer before end range

#define CLENCHED_VOLTAGE 2.9
#define RESTING_VOLTAGE 0.7

#define HIGH_VELOCITY_DELAY 3
#define MID_VELOCITY_DELAY 8
#define RELEASE_VELOCITY_DELAY 3

extern int FingerPositions[5];

extern float minThreshold;
extern float middleThreshold;
extern float maxThreshold;
extern float StartPosition;

void CalculateThresholds(float clenchedVoltage, float restingVoltage);
int CalculateMaxServoPulse();
void SetFingersStartPosition();

#endif //PROSTHETICCONTROLSSTM32_CONFIG_H
