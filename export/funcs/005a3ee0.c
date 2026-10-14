
void __thiscall
FUN_005a3ee0(int param_1,char *param_2,float *param_3,undefined4 *param_4,char param_5,
            undefined1 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  char *pcVar7;
  
  if (param_9 == 0) {
    param_9 = 0xf;
  }
  *(int *)(param_1 + 900) = param_9;
  *(float *)(param_1 + 0xa8) = *param_3;
  *(float *)(param_1 + 0xac) = param_3[1];
  *(float *)(param_1 + 0xb0) = param_3[2];
  *(float *)(param_1 + 0x350) = *(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0x60);
  *(float *)(param_1 + 0x354) = *(float *)(param_1 + 0xac) + *(float *)(param_1 + 100);
  *(float *)(param_1 + 0x358) = *(float *)(param_1 + 0xb0) + *(float *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0xb4) = *param_4;
  *(undefined4 *)(param_1 + 0xb8) = param_4[1];
  *(undefined4 *)(param_1 + 0xbc) = param_4[2];
  *(byte *)(param_1 + 0x35c) =
       (param_5 << 3 ^ *(byte *)(param_1 + 0x35c)) & 8 ^ *(byte *)(param_1 + 0x35c);
  *(undefined1 *)(param_1 + 0x2d1) = param_6;
  *(undefined4 *)(param_1 + 0xcc) = param_7;
  *(undefined4 *)(param_1 + 0x38c) = param_8;
  if (param_2 == (char *)0x0) {
    return;
  }
  if (*param_2 == '\0') {
    return;
  }
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar4 - 1;
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x368);
  uVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::max_size(this);
  if (uVar4 < uVar5) {
    std::_Xlen();
  }
  iVar2 = *(int *)(param_1 + 0x36c);
  if (((iVar2 == 0) || (cVar1 = *(char *)(iVar2 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar5 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
      goto LAB_005a4056;
    }
    if ((0x1f < *(uint *)(param_1 + 0x374)) || (*(uint *)(param_1 + 0x374) < uVar5)) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,true);
      goto LAB_005a402d;
    }
  }
  else {
    if (uVar5 == 0) {
      *(char *)(iVar2 + -1) = cVar1 + -1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Tidy(this,false);
      goto LAB_005a4056;
    }
LAB_005a402d:
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Copy(this,uVar5);
  }
  pcVar7 = *(char **)(param_1 + 0x36c);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *param_2;
    param_2 = param_2 + 1;
    pcVar7 = pcVar7 + 1;
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Eos(this,uVar5);
LAB_005a4056:
  pcVar6 = *(code **)(param_1 + 0x36c);
  if (*(code **)(param_1 + 0x36c) == (code *)0x0) {
    pcVar6 = _C_exref;
  }
  uVar3 = FUN_00564610(pcVar6);
  *(undefined4 *)(param_1 + 0x380) = uVar3;
  return;
}

