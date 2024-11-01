	uint8_t state = 1;
	uint8_t alpha = 255;
	uint8_t red = 255;
	uint8_t green = 0;
	uint8_t blue = 0;
	uint32_t current_color = 0xFF000000;
  for(;;)
  {
	  if(green < 255 && state == 1){
	      green++;
	      red--;
	      if(green == 255)
	          state = 2;
	  }
	  if(blue < 255 && state == 2){
	      blue++;
	      green--;
	      if(blue == 255)
	          state = 3;
	  }
	  if(state == 3){
	      red++;
	      blue--;
	      if(blue == 0)
	          state = 1;
	  }
	  current_color = (alpha << 24) + (red << 16) + (green << 8) + (blue);
	  //delay or call here
  }