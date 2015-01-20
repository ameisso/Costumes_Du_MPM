void program2AtStep(int step)//RESPIRATION 
{
  Serial.println(step);
  if(step < 3000)
  {
    setColorForAllPixels(COSTUME_COLOR,map(step,0,3000,0,255));
  }
  else if (step >= 3000 && step < 6000)
  {
    setColorForAllPixels(COSTUME_COLOR, map(step,3000,6000,255,0));
    if (step > 5900)
    {
      delay(500);
      programStartDate = millis();
    }
  }
}

//rouge//OK














