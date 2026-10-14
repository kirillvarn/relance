
void __fastcall FUN_0042a170(int *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte unaff_retaddr;
  
  bVar1 = (**(code **)(*param_1 + 0x1c))(param_1);
  if (unaff_retaddr != bVar1) {
    cVar2 = (**(code **)(*param_1 + 0x14))(param_1);
    if ((cVar2 != '\0') && (unaff_retaddr != 0)) {
      uVar3 = (**(code **)(*(int *)param_1[6] + 4))();
      (**(code **)FDUMP_exref)
                (0x100001,
                 "%s(%d) : *** ERROR: streamed source %s attributes changing _after_ the stream was started"
                 ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\Sound.cpp",0x8bf,uVar3);
    }
    *(byte *)(param_1 + 3) = (*(byte *)(param_1 + 3) ^ unaff_retaddr) & 1 ^ *(byte *)(param_1 + 3);
  }
  return;
}

