void back()
{
  but = 0;
  if(point == 0)
  return;
  else if(point == 1)
  {
    homee();
  }
  else if(point == 11 or point == 12 or point == 13 or point == 14)
  {
   menu();
  }
  else if(point == 121 or point == 122 or point == 123)
  {
    but1++;
    delay(100);
  }
}
