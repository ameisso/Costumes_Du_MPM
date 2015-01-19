void program2AtStep(int step)//RESPIRATION 
{
  if  (breatheVariable < 20 || breatheVariable>150)
  {
    isBreatheAscending = !isBreatheAscending; 
  }

  if(isBreatheAscending)
  {
    breatheVariable += 5;
    FastLED.setBrightness( breatheVariable );
    setColorForAllPixels(COSTUME_COLOR);
  }
  else
  {
    breatheVariable -= 10;
    FastLED.setBrightness( breatheVariable );
    setColorForAllPixels(COSTUME_COLOR);
  }
  delay (100);//vitesse du breathe
}

//rouge





























