#define projector_advance_relay 6 // relay 4
#define camera_shutter_relay 4 // relay 2
#define adjust_camera_relay 5 // relay 3
#define relay1 1

int count;

void setup() {
  // put your setup code here, to run once:
  pinMode(projector_advance_relay, OUTPUT);
  pinMode(camera_shutter_relay, OUTPUT);
  pinMode(adjust_camera_relay, OUTPUT);

  count = 43;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (count > 0) {
    advance_projector();
    wait_for_projector();
    adjust_camera();
    shoot_camera();
    count--;
  }
}

void advance_projector() {
  set_relay(projector_advance_relay, HIGH, 500);
  set_relay(projector_advance_relay, LOW, 500);
}

void wait_for_projector() {
  delay(1000);
}

void shoot_camera() {
  set_relay(camera_shutter_relay, HIGH, 500);
  set_relay(camera_shutter_relay, LOW, 500);
}

void adjust_camera() {
  set_relay(adjust_camera_relay, HIGH, 500);
  set_relay(adjust_camera_relay, LOW, 0);
}

void set_relay(int relay, int setting, int interval) {
  digitalWrite(relay, setting);
  delay(interval);
}

