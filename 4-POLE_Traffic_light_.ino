int r1=13,a1=12,g1=11,r2=10,a2=9,g2=8,r3=7,a3=6,g3=5,r4=4,a4=3,g4=2;

void setup()
{
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(r3,OUTPUT);
  pinMode(r4,OUTPUT);
  pinMode(a1,OUTPUT);
  pinMode(a2,OUTPUT);
  pinMode(a3,OUTPUT);
  pinMode(a4,OUTPUT);
  pinMode(g1,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(g3,OUTPUT);
  pinMode(g4,OUTPUT);
}

void loop()
{
  digitalWrite(g1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  delay(5000);

  digitalWrite(a1,HIGH);
  digitalWrite(a2,HIGH);
  digitalWrite(g1,LOW);
  digitalWrite(r2,LOW);
  delay(2000);

  digitalWrite(a1,LOW);
  digitalWrite(a2,LOW);
  digitalWrite(g2,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  
  delay(5000);

  digitalWrite(a2,HIGH);
  digitalWrite(a3,HIGH);
  digitalWrite(g2,LOW);
  digitalWrite(r3,LOW);
  delay(2000);

  digitalWrite(a2,LOW);
  digitalWrite(a3,LOW);
  digitalWrite(g3,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,LOW);
  digitalWrite(r4,HIGH);
  delay(5000);

  digitalWrite(a3,HIGH);
  digitalWrite(a4,HIGH);
  digitalWrite(g3,LOW);
  digitalWrite(r4,LOW);
  delay(2000);

  digitalWrite(a3,LOW);
  digitalWrite(a4,LOW);
  digitalWrite(g4,HIGH);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,LOW);
  delay(5000);

  digitalWrite(a4,HIGH);
  digitalWrite(a1,HIGH);
  digitalWrite(g4,LOW);
  digitalWrite(r1,LOW);
  delay(2000);

  digitalWrite(a4,LOW);
  digitalWrite(a1,LOW);
  digitalWrite(g1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(r2,HIGH);
  digitalWrite(r3,HIGH);
  digitalWrite(r4,HIGH);
  delay(5000);
}  
