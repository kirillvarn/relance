
void __fastcall FUN_004f5c20(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *this;
  char cVar1;
  code cVar2;
  int iVar3;
  bool bVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  code *pcVar13;
  int local_218;
  int local_214;
  int local_210;
  int local_20c;
  char local_200 [512];
  
  this = (basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x18);
  uVar8 = *(uint *)npos_exref;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Split(this);
  uVar7 = *(uint *)(param_1 + 0x20);
  if (uVar7 < uVar8) {
    uVar8 = uVar7;
  }
  if (uVar8 != 0) {
    memmove(*(void **)(param_1 + 0x1c),(void *)((int)*(void **)(param_1 + 0x1c) + uVar8),
            uVar7 - uVar8);
    uVar8 = *(int *)(param_1 + 0x20) - uVar8;
    bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar8,false);
    if (bVar4) {
      *(uint *)(param_1 + 0x20) = uVar8;
      *(undefined1 *)(uVar8 + *(int *)(param_1 + 0x1c)) = 0;
    }
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    local_214 = 0;
  }
  else {
    local_214 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2;
  }
  local_20c = 0;
  if (0 < local_214) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0xc) + local_20c * 4);
      if ((*(int *)(iVar3 + 4) != 0) &&
         (local_210 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 4, 0 < local_210)) {
        local_218 = 0;
        do {
          pcVar5 = *(code **)(*(int *)(iVar3 + 4) + local_218 + 4);
          if (pcVar5 == (code *)0x0) {
            pcVar5 = _C_exref;
          }
          sprintf(local_200,"wg = %d, %s\n",*(undefined4 *)(iVar3 + 0x10),pcVar5);
          uVar8 = 0xffffffff;
          pcVar9 = local_200;
          do {
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar1 != '\0');
          uVar8 = ~uVar8 - 1;
          if ((uint)(*(int *)npos_exref - *(int *)(param_1 + 0x20)) <= uVar8) {
            std::_Xlen();
          }
          if (uVar8 != 0) {
            uVar7 = *(int *)(param_1 + 0x20) + uVar8;
            bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                              (this,uVar7,false);
            if (bVar4) {
              pcVar9 = local_200;
              pcVar11 = (char *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20));
              for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                *(undefined4 *)pcVar11 = *(undefined4 *)pcVar9;
                pcVar9 = pcVar9 + 4;
                pcVar11 = pcVar11 + 4;
              }
              for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                *pcVar11 = *pcVar9;
                pcVar9 = pcVar9 + 1;
                pcVar11 = pcVar11 + 1;
              }
              *(uint *)(param_1 + 0x20) = uVar7;
              *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar7) = 0;
            }
          }
          local_218 = local_218 + 0x10;
          local_210 = local_210 + -1;
        } while (local_210 != 0);
      }
      local_20c = local_20c + 1;
    } while (local_20c < local_214);
  }
  uVar8 = 0xffffffff;
  pcVar9 = "\n";
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8 - 1;
  if ((uint)(*(int *)npos_exref - *(int *)(param_1 + 0x20)) <= uVar8) {
    std::_Xlen();
  }
  if (uVar8 != 0) {
    uVar7 = *(int *)(param_1 + 0x20) + uVar8;
    bVar4 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Grow
                      (this,uVar7,false);
    if (bVar4) {
      puVar10 = (undefined4 *)&DAT_005cb7d0;
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c));
      for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar12 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar12 = puVar12 + 1;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      }
      *(uint *)(param_1 + 0x20) = uVar7;
      *(undefined1 *)(*(int *)(param_1 + 0x1c) + uVar7) = 0;
    }
  }
  pcVar5 = _C_exref;
  if (*(code **)(param_1 + 0x1c) != (code *)0x0) {
    pcVar5 = *(code **)(param_1 + 0x1c);
  }
  uVar8 = 0xffffffff;
  pcVar13 = pcVar5;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar2 = *pcVar13;
    pcVar13 = pcVar13 + 1;
  } while (cVar2 != (code)0x0);
  (**(code **)(*DAT_0067ecd0 + 0x118))(DAT_00673344,pcVar5,~uVar8 - 1);
  return;
}

