
void FUN_004c72b0(undefined4 param_1)

{
  if (DAT_00673514 != 0) {
    *(undefined4 *)(DAT_00673514 + 4) = param_1;
    DAT_00673514 = param_1;
    return;
  }
  DAT_00673510 = param_1;
  DAT_00673514 = param_1;
  return;
}

