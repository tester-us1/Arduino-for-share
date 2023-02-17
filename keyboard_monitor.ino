uint32_t case_ = 0;
uint8_t lstr = 0,lint = 0;
uint8_t countDigits(int num)
{
  uint8_t count = 0;
  while(num)
  {
    num = num / 10;
    count++;
  }
  return count;
}
void work_case(uint8_t case_){
  switch (case_) {
      case 1:
        Serial.println("You enter 1");
        break;
      case 2:
        Serial.println("You enter 2");
        break;
      case 3:
        Serial.println("You enter 3");
        break;
      default:
        Serial.println("It is not in the case");
        break;
    } 
}
void setup() {
  Serial.begin(115200);
}
void loop(){
  while (Serial.available() > 0) {
    lstr  = Serial.available();
    Serial.println(lstr);
    case_ = Serial.parseInt();
    lint  = countDigits(case_);
    if(lstr != lint){
      case_ = 0;
    }
  }
}
