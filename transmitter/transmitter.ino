#define LED_PIN A1
#define BUTTON_PIN A0
#define PERIOD 15

char* string = "/9j/4AAQSkZJRgABAQAAAQABAAD/2wBDAAgGBgcGBQgHBwcJCQgKDBQNDA"
               "sLDBkSEw8UHRofHh0aHBwgJC4nICIsIxwcKDcpLDAxNDQ0Hyc5PTgyPC4z"
               "NDL/wAALCAAcABwBAREA/8QAHwAAAQUBAQEBAQEAAAAAAAAAAAECAwQFBg"
               "cICQoL/8QAtRAAAgEDAwIEAwUFBAQAAAF9AQIDAAQRBRIhMUEGE1FhByJx"
               "FDKBkaEII0KxwRVS0fAkM2JyggkKFhcYGRolJicoKSo0NTY3ODk6Q0RFRk"
               "dISUpTVFVWV1hZWmNkZWZnaGlqc3R1dnd4eXqDhIWGh4iJipKTlJWWl5iZ"
               "mqKjpKWmp6ipqrKztLW2t7i5usLDxMXGx8jJytLT1NXW19jZ2uHi4+Tl5u"
               "fo6erx8vP09fb3+Pn6/9oACAEBAAA/APn+vTfAfwW1fxnpw1O5u10rT3/1"
               "MkkJkeX3Vcj5fcn6Zqn4z+D/AIk8HwT3zJHfaXE3N1AeVXsWQ8r+oHrXn1"
               "dH4C0BfE/jnSdJkK+TNOGlDdCigsw/EKR+Ndd8U/iRqOo+JpNL0O9uNP0j"
               "TG+zwx2rtDvZeCxAx0IwB2A963/g14r13xFruu6drWr3V7azaZLIRdSGRI"
               "23KM4P3RhjwOK8QIwSM5967H4V61ZeH/iTpGoahJ5dqrvG8hxhN6MgJz0A"
               "LDJ9K9I1L4D6HEz6vN42jg0l5CxlljToT0Em8KT1Gcde1ZOs+LPCHw/8O3"
               "OieAJGvtSvlaO61WXlkQ9lOACfTAwOvJrxuiiiiv/Z ";
int string_length;

void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(3, INPUT);
  digitalWrite(3,LOW);
  string_length = strlen(string);
  delay(5000);
}
void loop() 
{
  if(digitalRead(3) == HIGH){
    for(int i = 0; i < string_length; i ++)
    {
      send_byte(string[i]);
    }
    delay(1000);
  }
}
void send_byte(char my_byte)
{
  digitalWrite(LED_PIN, LOW);
  delay(PERIOD);

  //transmission of bits
  for(int i = 0; i < 8; i++)
  {
    digitalWrite(LED_PIN, (my_byte&(0x01 << i))!=0 );
    delay(PERIOD);
  }

  digitalWrite(LED_PIN, HIGH);
  delay(PERIOD);
}
