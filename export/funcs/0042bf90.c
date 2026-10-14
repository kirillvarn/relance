
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0042bf90(int *param_1,int param_2)

{
  ID_String *this;
  undefined4 uVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int *local_4;
  
  param_1[6] = param_1[6] | 0x20000000;
  if (param_1[9] == 0) {
    param_1[9] = (int)param_1;
  }
  piVar6 = param_1;
  local_4 = param_1;
  if (param_2 < 1) goto LAB_0042c0bb;
  this = (ID_String *)(param_1 + param_2 + 6);
  bVar2 = ID_String::IsEmpty(this);
  if ((bVar2) || (*(int *)this == param_1[1])) goto LAB_0042c0bb;
  if (*(int *)this == DAT_00667cd4) {
    piVar6 = (int *)0x0;
    goto LAB_0042c0bb;
  }
  bVar2 = ID_String::IsEmpty(this);
  if (bVar2) {
LAB_0042c0b5:
    piVar6 = (int *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)this;
    if ((DAT_0067edc0 & 1) == 0) {
      DAT_0067edc0 = DAT_0067edc0 | 1;
      FUN_0042b7b0();
      FUN_005b7e6c(&LAB_0042adb0);
    }
    _DAT_0067ede4 = uVar1;
    FUN_0042c300(&local_4,&DAT_0067ede0);
    if (local_4 == DAT_00667cc4) goto LAB_0042c0b5;
    piVar6 = local_4 + 3;
    if (piVar6 != (int *)0x0) goto LAB_0042c0bb;
  }
  pcVar3 = ID_String::get_string(this);
  (**(code **)FDUMP_exref)
            (0x100002,"%s(%d) : *** WARNING: unknown Sound archetype \'%s\'",
             "E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x168,pcVar3);
  if (piVar6 == (int *)0x0) {
    pcVar3 = ID_String::get_string(this);
    pcVar4 = ID_String::get_string((ID_String *)(param_1 + 1));
    (**(code **)FDUMP_exref)
              (0x100001,
               "%s(%d) : *** ERROR: [Sound] %s. Specified \'lod%d = %s\' not found.  Sound won\'t play."
               ,"E:\\FL\\Scratch\\Source\\Client\\cmn\\SoundArch.cpp",0x3cb,pcVar4,param_2,pcVar3);
  }
LAB_0042c0bb:
  if (piVar6 != (int *)param_1[9]) {
    iVar5 = (**(code **)(*param_1 + 0x14))();
    if (0 < iVar5) {
      do {
        (**(code **)(*param_1 + 0x10))();
        if (piVar6 != (int *)0x0) {
          (**(code **)(*piVar6 + 0xc))();
        }
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    param_1[9] = (int)piVar6;
  }
  return;
}

