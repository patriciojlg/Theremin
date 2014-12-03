long distancia;
long tiempo;
int trig = 5;
int echo = 6;
int buzz = 7;

void setup(){
  pinMode(buzz, OUTPUT);
  Serial.begin(9600);
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 
}

void loop(){
  
  digitalWrite(trig,LOW); 
  delayMicroseconds(5);
  digitalWrite(trig, HIGH); 
  delayMicroseconds(10);
  tiempo=pulseIn(echo, HIGH); 
  distancia= int(0.017*tiempo); 
  digitalWrite(buzz, HIGH);
  delayMicroseconds(distancia);
  digitalWrite(buzz, LOW);
  delayMicroseconds(distancia);  
}
