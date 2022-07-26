int level;
const int analog_0=0;
int l1=13;
int l2=12;
int l3=11;

 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
 pinMode(8,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
level=analogRead(analog_0);
Serial.println(level);
if(level>=0&&level<300)
{Serial.println("Water level -Low");
  digitalWrite(l1, HIGH); 
  digitalWrite(l2, LOW);
   digitalWrite(l3, LOW);
  digitalWrite(8, LOW);
  }
else if(level>300&&level<600)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
   digitalWrite(l3, LOW);
  Serial.println("Water level -Medium");
  digitalWrite(8, LOW);
  }

else if(level>600&&level<800)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
   digitalWrite(l3, HIGH);
  Serial.println("Water level -High");
  digitalWrite(8, HIGH);
  }

}
