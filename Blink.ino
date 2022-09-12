void setup() 
{
pinMode(LED_BUILTIN , OUTPUT); 
}

void less ()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

void large()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(4000); 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);  
}
void loop() 
{
  // for "D" :- 
  large(); 
  less();
  less(); 
  delay(3000);

  
  // for "H" :- 
  less();
  less();
  less();
  less(); 
  delay(3000);

  // for "R" :-
  less(); 
  large(); 
  delay(3000);

  // for "U" :- 
  large(); 
  less();
  large(); 
  delay(3000);

  // for "V" :- 
  less();
  less();
  less();
  large();
  delay(3000);
}v
