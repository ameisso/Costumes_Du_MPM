void program3AtStep(int step)//RENCONTRE
{
  //une respiration rouge une deuxieme qui reste bloquée 
  //fondu bleu 
  uint8_t hueStart = 0; 
  uint8_t hueEnd = 165;
  uint8_t hueOtherColor = 128;
  if(step < 3000)
  {
    setColorForAllPixels(COSTUME_COLOR,step/3000.0*255);
  }
  else if (step >= 3000 && step < 6000)
  {
    setColorForAllPixels(COSTUME_COLOR, map(step,3000,6000,255,0));
  }
  else if (step >= 6000 && step < 10000)
  {
    setColorForAllPixels(CHSV(map(step,6000,1000,hueStart,hueEnd), 255, 255),map(step,6000,10000,0,255));
  }

  else if (step >= 12000 && step < 16000)
  {
    setColorForAllPixels(CHSV(map(step,12000,16000,hueOtherColor,hueEnd), 255, 255),255);
  }
  else if (step >= 16000 && step < 20000)
  {
    setColorForAllPixels(CHSV(map(step,16000,20000,hueEnd,hueOtherColor), 255, 255),255);
  }

  else if (step >= 30000 && step < 34000)
  {
    setColorForAllPixels(CHSV(map(step,30000,34000,hueOtherColor,hueEnd), 255, 255),255);
  }
  else if (step >= 50000 && step < 54000)
  {
    setColorForAllPixels(CHSV(map(step,50000,54000,hueEnd,hueOtherColor), 255, 255),255);
  }

  else if (step >= 80000 && step < 84000)
  {
    setColorForAllPixels(CHSV(map(step,80000,84000,hueOtherColor,hueEnd), 255, 255),255);
  }
  else if (step >= 100000 && step < 104000)
  {
    setColorForAllPixels(CHSV(map(step,100000,104000,hueEnd,hueOtherColor), 255, 255),255);
  }

  else if (step >= 130000 && step < 134000)
  {
    setColorForAllPixels(CHSV(map(step,80000,84000,hueOtherColor,hueEnd), 255, 255),255);
  }
  else if (step >= 160 && step < 164)
  {
    setColorForAllPixels(CHSV(map(step,100000,104000,hueEnd,hueOtherColor), 255, 255),255);
  }

  //toutes les 20 secondes pendant une minute 
}



//vert



















