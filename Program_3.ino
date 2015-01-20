void program3AtStep(int step)//RENCONTRE 
{
  //une respiration rouge une deuxieme qui reste bloquée 
  //fondu bleu 
  uint8_t hueStart = 0; 
  uint8_t hueEnd = 165;//couleur premier costume 
  uint8_t hueOtherColor = 128;//couleur premier costume voir https://github.com/FastLED/FastLED/wiki/FastLED-HSV-Colors

  int startTime = 3000; 
  int endTime = 6000; 
  if(step < 3000)
  {
    setColorForAllPixels(COSTUME_COLOR,step/3000.0*255);
    if(step > 2900)
    {
      startTime = 3000; 
      endTime = 6000; 
    }
  }


  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(COSTUME_COLOR, map(step,startTime,endTime,255,0));
    if(step > 2900)
    {
      startTime = 3000; 
      endTime = 6000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueStart,hueEnd), 255, 255),map(step,startTime,endTime,0,255));
    if(step > endTime-100)
    {
      startTime = 12000; 
      endTime = 16000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueOtherColor,hueEnd), 255, 255),255);
    if(step > endTime-100)
    {
      startTime = 16000; 
      endTime = 20000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueEnd,hueOtherColor), 255, 255),255);
    if(step > endTime-100)
    {
      startTime = 30000; 
      endTime = 34000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueOtherColor,hueEnd), 255, 255),255);
    if(step > endTime-100)
    {
      startTime = 50000; 
      endTime = 54000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueEnd,hueOtherColor), 255, 255),255);
    if(step > endTime-100)
    {
      startTime = 80000; 
      endTime = 84000; 
    }
  }

  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueOtherColor,hueEnd), 255, 255),255);
        if(step > endTime-100)
    {
      startTime = 100000; 
      endTime = 104000; 
    }
  }
  else if (step >= startTime && step < endTime)
  {
    setColorForAllPixels(CHSV(map(step,startTime,endTime,hueEnd,hueOtherColor), 255, 255),255);
  }


  //toutes les 20 secondes pendant une minute 
}



//vert




























