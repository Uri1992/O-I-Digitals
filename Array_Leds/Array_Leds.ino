/*************************************************************************
**                                                                      **
**                 Descripció programa                                  **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

const int led[] = {9, 10, 11, 12, 13};
int temps = 100;

//*******  Setup  ********************************************************
void setup()
{
  pinMode(led[0], OUTPUT);
  pinMode(led[1], OUTPUT);
  pinMode(led[2], OUTPUT);
  pinMode(led[3], OUTPUT);
  pinMode(led[4], OUTPUT);
}

//******  Loop  **********************************************************
void loop ()
{
  for (int numLed = 0; numLed < 4; numLed++)
    {
    digitalWrite(led[numLed], HIGH);
    delay(temps);
    digitalWrite(led[numLed], LOW);
    }
  
  for (int numLed = 4; numLed > 0; numLed--)
    {
    digitalWrite(led[numLed], HIGH);
    delay(temps);
    digitalWrite(led[numLed], LOW);
    }
}
  
  
