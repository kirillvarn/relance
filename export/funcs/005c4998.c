
void Unwind_005c4998(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    *(undefined4 *)(unaff_EBP + -0xc) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0xc) = *(int *)(unaff_EBP + -0x10) + 0x7c;
  }
  FUN_005914c0();
  return;
}

