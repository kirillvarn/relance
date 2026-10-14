
int FUN_004ba860(void)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 *puVar4;
  bool bVar5;
  char cVar6;
  ushort uVar7;
  size_t sVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  wchar_t wVar12;
  uint uVar13;
  uint in_stack_000000dc;
  undefined4 *in_stack_000020e0;
  wchar_t *in_stack_000020e4;
  int in_stack_000020e8;
  char in_stack_000020ec;
  
  FUN_005b7e90();
  pwVar1 = in_stack_000020e4 + in_stack_000020e8;
  if (in_stack_000020e0[1] == 0) {
    *in_stack_000020e4 = L'\0';
    return 0;
  }
  puVar10 = (ushort *)&stack0x000000dc;
  FUN_004347e0();
  bVar5 = false;
  uVar7 = (ushort)in_stack_000000dc;
  uVar13 = in_stack_000000dc;
joined_r0x004ba8d6:
  if (uVar7 == 0) {
    if (in_stack_000020e4 == pwVar1) {
      in_stack_000020e4 = in_stack_000020e4 + -1;
      *in_stack_000020e4 = L'\0';
    }
    return (in_stack_000020e8 * 2 - (int)pwVar1) + (int)in_stack_000020e4 >> 1;
  }
  puVar10 = puVar10 + 1;
  wVar12 = (wchar_t)uVar13;
  if (wVar12 != L'%') {
    if (bVar5) {
      uVar7 = *puVar10;
      for (iVar9 = 0; ((0x2f < uVar7 && (uVar7 < 0x3a)) && (iVar9 < 0x40)); iVar9 = iVar9 + 1) {
        *(ushort *)(&stack0x0000005c + iVar9 * 2) = uVar7;
        puVar10 = puVar10 + 1;
        uVar7 = *puVar10;
      }
      *(undefined2 *)(&stack0x0000005c + iVar9 * 2) = 0;
      iVar9 = _wtoi((wchar_t *)&stack0x0000005c);
      iVar11 = -1;
      cVar6 = (char)iVar9;
      if (((*puVar10 == 0x76) && (cVar3 = (char)puVar10[1], '/' < cVar3)) && (cVar3 < ':')) {
        puVar10 = puVar10 + 2;
        iVar11 = cVar3 + -0x30;
      }
      switch(uVar13 & 0xffff) {
      case 0x21:
        iVar9 = FUN_004ba830();
        if (iVar9 != 0) {
          iVar9 = FUN_004ba860();
          in_stack_000020e4 = in_stack_000020e4 + iVar9;
        }
        break;
      case 0x42:
      case 0x47:
      case 0x52:
      case 0x53:
      case 0x73:
switchD_004ba981_caseD_42:
        for (puVar4 = (undefined4 *)*in_stack_000020e0; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          if ((*(wchar_t *)(puVar4 + 2) == wVar12) && (*(char *)((int)puVar4 + 10) == cVar6)) {
            if (puVar4[1] != 2) goto LAB_004ba9d1;
            break;
          }
        }
        break;
      case 0x46:
        puVar4 = (undefined4 *)*in_stack_000020e0;
        while( true ) {
          if (puVar4 == (undefined4 *)0x0) goto switchD_004ba981_caseD_22;
          if ((*(wchar_t *)(puVar4 + 2) == wVar12) && (*(char *)((int)puVar4 + 10) == cVar6)) break;
          puVar4 = (undefined4 *)*puVar4;
        }
        if (-1 < iVar11) goto LAB_004bad5a;
LAB_004baccb:
        iVar9 = FUN_004347e0();
        if (iVar9 == 0) {
          (**(code **)FDUMP_exref)();
        }
        in_stack_000020e4 = in_stack_000020e4 + iVar9;
        if (pwVar1 == in_stack_000020e4) {
          in_stack_000020e4[-1] = L'\0';
        }
        break;
      case 0x49:
        for (puVar4 = (undefined4 *)*in_stack_000020e0; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          if ((*(wchar_t *)(puVar4 + 2) == wVar12) && (*(char *)((int)puVar4 + 10) == cVar6)) {
            FUN_004bb140();
            break;
          }
        }
        break;
      case 0x4c:
        iVar9 = FUN_004ba830();
        if (iVar9 != 0) {
          FUN_004bb140();
        }
        break;
      case 0x4d:
        if (in_stack_000020ec != '\0') goto switchD_004ba981_caseD_42;
        break;
      case 0x5a:
        for (puVar4 = (undefined4 *)*in_stack_000020e0; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          if ((*(wchar_t *)(puVar4 + 2) == wVar12) && (*(char *)((int)puVar4 + 10) == cVar6)) {
            if (iVar11 < 0) {
              if (0x3f < (uint)puVar4[1]) goto LAB_004ba9d1;
              iVar9 = FUN_004347e0();
              if (iVar9 == 0) {
                (**(code **)FDUMP_exref)();
              }
              pwVar2 = in_stack_000020e4 + iVar9;
              if (pwVar1 == pwVar2) {
                pwVar2[-1] = L'\0';
              }
              iVar9 = FUN_004347e0();
              if (iVar9 == 0) {
                (**(code **)FDUMP_exref)();
              }
              pwVar2 = pwVar2 + iVar9;
              if (pwVar1 == pwVar2) {
                pwVar2[-1] = L'\0';
              }
              iVar9 = FUN_004347e0();
              if (iVar9 == 0) {
                (**(code **)FDUMP_exref)();
              }
              in_stack_000020e4 = pwVar2 + iVar9;
              if (pwVar1 == in_stack_000020e4) {
                in_stack_000020e4[-1] = L'\0';
              }
              goto LAB_004baccb;
            }
            if (0x3f < (uint)puVar4[1]) goto LAB_004bad5a;
            iVar9 = FUN_004347e0();
            if (iVar9 == 0) {
              FUN_00411c50();
              (**(code **)FDUMP_exref)();
            }
            pwVar2 = in_stack_000020e4 + iVar9;
            if (pwVar1 == pwVar2) {
              pwVar2[-1] = L'\0';
            }
            iVar9 = FUN_004347e0();
            if (iVar9 == 0) {
              FUN_00411c50();
              (**(code **)FDUMP_exref)();
            }
            pwVar2 = pwVar2 + iVar9;
            if (pwVar1 == pwVar2) {
              pwVar2[-1] = L'\0';
            }
            iVar9 = FUN_004347e0();
            if (iVar9 == 0) {
              FUN_00411c50();
              (**(code **)FDUMP_exref)();
            }
            in_stack_000020e4 = pwVar2 + iVar9;
            if (pwVar1 == in_stack_000020e4) {
              in_stack_000020e4[-1] = L'\0';
            }
            FUN_004bb140();
            break;
          }
        }
        break;
      case 100:
        for (puVar4 = (undefined4 *)*in_stack_000020e0; puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          if ((*(wchar_t *)(puVar4 + 2) == wVar12) && (*(char *)((int)puVar4 + 10) == cVar6)) {
            FUN_004779a0();
            sVar8 = wcslen((wchar_t *)&stack0x0000001c);
            if (in_stack_000020e4 + sVar8 < pwVar1) {
              wcscat(in_stack_000020e4,(wchar_t *)&stack0x0000001c);
              in_stack_000020e4 = in_stack_000020e4 + sVar8;
            }
            break;
          }
        }
      }
    }
    else {
      *in_stack_000020e4 = wVar12;
      in_stack_000020e4 = in_stack_000020e4 + 1;
      *in_stack_000020e4 = L'\0';
    }
    goto switchD_004ba981_caseD_22;
  }
  bVar5 = true;
  goto LAB_004bb083;
LAB_004bad5a:
  iVar9 = FUN_004347e0();
  if (iVar9 == 0) {
    (**(code **)FDUMP_exref)();
  }
  goto LAB_004baa19;
LAB_004ba9d1:
  iVar9 = FUN_004347e0();
  if (iVar9 == 0) {
    (**(code **)FDUMP_exref)();
  }
LAB_004baa19:
  in_stack_000020e4 = in_stack_000020e4 + iVar9;
  if (pwVar1 == in_stack_000020e4) {
    in_stack_000020e4[-1] = L'\0';
  }
switchD_004ba981_caseD_22:
  bVar5 = false;
LAB_004bb083:
  uVar7 = *puVar10;
  uVar13 = (uint)uVar7;
  goto joined_r0x004ba8d6;
}

