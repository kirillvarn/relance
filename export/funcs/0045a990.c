
void FUN_0045a990(void)

{
  int *local_4;
  
  FUN_0045aa10(&local_4,*DAT_0066d33c,DAT_0066d33c,&stack0x00000004);
  if (local_4 != DAT_0066d33c) {
    *(int *)local_4[1] = *local_4;
    *(int *)(*local_4 + 4) = local_4[1];
    FUN_005154f0();
    FUN_005b7e1d(local_4);
    DAT_0066d340 = DAT_0066d340 + -1;
  }
  return;
}

