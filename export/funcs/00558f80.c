
void FUN_00558f80(void)

{
  int local_4;
  
  if ((DAT_00679a04 != '\0') && (DAT_00679a0c == 0)) {
    DAT_00679a04 = '\x01';
    FUN_00556090(&DAT_006799fc,&local_4);
    if (local_4 != DAT_00679a08) {
      if (DAT_00679a08 != 0) {
        *(undefined1 *)(DAT_00679a08 + 0xd) = 0;
        FUN_00555f00(2,&DAT_006799fc);
      }
      DAT_00679a08 = local_4;
      if (local_4 != 0) {
        *(undefined1 *)(local_4 + 0xd) = 1;
        FUN_00555f00(1,&DAT_006799fc);
      }
    }
  }
  return;
}

