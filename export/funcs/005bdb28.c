
void Unwind_005bdb28(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    *(undefined4 *)(unaff_EBP + -0x78) = 0;
  }
  else {
    *(int *)(unaff_EBP + -0x78) = *(int *)(unaff_EBP + -0x18) + 0x7c;
  }
  FUN_004c8630();
  return;
}

