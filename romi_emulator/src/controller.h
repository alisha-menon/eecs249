#include "kobukiSensorTypes.h"

// Robot states
// Add your own states here
typedef enum {
  OFF,
  DRIVING,
  TURN_CW,
  BACK_UP_LEFT,
  BACK_UP_RIGHT,
  TURN_AWAY_LEFT,
  TURN_AWAY_RIGHT,
} robot_state_t;

static float measure_distance(uint16_t current_encoder, uint16_t previous_encoder);

static float measure_distance_reversed(uint16_t current_encoder, uint16_t previous_encoder);

static bool is_bump(KobukiSensors_t *sensors);

static bool check_and_save_bump(KobukiSensors_t* sensors, bool* obstacle_is_right);

static bool check_cliff(KobukiSensors_t* sensors, bool* cliff_is_right);

static float read_tilt();

robot_state_t controller(robot_state_t state);

void display_float(float v);

//void pre_dir_change();

//static void back_up_state(bool left);

