
void Unwind_005c5470(void)

{
  int unaff_EBP;
  
  if (*(int *)(unaff_EBP + -0x14) == 4) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x14);
  }
  CDPClient::~CDPClient(*(CDPClient **)(unaff_EBP + -0x18));
  return;
}

