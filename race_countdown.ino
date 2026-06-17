bool start = true;
int iteration = 1;
int startSpeed = 2000;
int blueFlashSpeed = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT); // yellow
  pinMode(8, OUTPUT); // yellow
  pinMode(7, OUTPUT); // green
  pinMode(11, OUTPUT); // blue
  pinMode(6, OUTPUT); // blue 
  pinMode(4, OUTPUT); // blue
  pinMode(13, OUTPUT); // red
}

void loop() {
  // put your main code here, to run repeatedly:
  if (start = true) {
    digitalWrite(13, HIGH);
    delay(startSpeed);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(startSpeed);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    delay(startSpeed);
    digitalWrite(8, LOW);
    start = false;
  }

  while (iteration < 15) {
    digitalWrite(7, HIGH);
    digitalWrite(11, HIGH);
    delay(blueFlashSpeed);
    digitalWrite(11, LOW);
    digitalWrite(6, HIGH);
    delay(blueFlashSpeed);
    digitalWrite(6, LOW);
    digitalWrite(4, HIGH);
    delay(blueFlashSpeed);
    digitalWrite(4, LOW);
    iteration++;
  }

  start = false;
  iteration = 1;
  digitalWrite(7, LOW);
}
