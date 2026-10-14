
int FUN_0041c970(void)

{
  wchar_t *pwVar1;
  char cVar2;
  wchar_t wVar3;
  wchar_t wVar4;
  undefined4 *puVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  size_t sVar9;
  ISystem *pIVar10;
  IBase *pIVar11;
  GoodInfo *pGVar12;
  IZone *pIVar13;
  undefined4 *extraout_ECX;
  uint uVar14;
  wchar_t *pwVar15;
  int iVar16;
  wchar_t *pwStack00000008;
  wchar_t *in_stack_000020ec;
  int in_stack_000020f0;
  
  FUN_005b7e90();
  pwVar15 = in_stack_000020ec + in_stack_000020f0;
  if (pwVar15 == in_stack_000020ec) {
    return 0;
  }
  *in_stack_000020ec = L'\0';
  if (extraout_ECX[1] == 0) {
    return 0;
  }
  FUN_004347e0();
  pwStack00000008 = (wchar_t *)&stack0x000000e8;
LAB_0041c9f1:
  bVar6 = false;
switchD_0041cad9_caseD_22:
  do {
    if (pwVar15 <= in_stack_000020ec) {
      (**(code **)FDUMP_exref)();
LAB_0041d37c:
      if (pwVar15 <= in_stack_000020ec) {
        in_stack_000020ec = pwVar15 + -1;
      }
      *in_stack_000020ec = L'\0';
      return (in_stack_000020f0 * 2 - (int)pwVar15) + (int)in_stack_000020ec >> 1;
    }
    wVar3 = *pwStack00000008;
    if (wVar3 == L'\0') goto LAB_0041d37c;
    pwStack00000008 = pwStack00000008 + 1;
    if (wVar3 == L'%') {
      bVar6 = true;
    }
    else if (bVar6) {
      uVar14 = 0;
      bVar6 = false;
      wVar4 = *pwStack00000008;
      while ((0x2f < (ushort)wVar4 && ((ushort)wVar4 < 0x3a))) {
        *(wchar_t *)(&stack0x00000068 + uVar14 * 2) = wVar4;
        uVar14 = uVar14 + 1;
        if (0x3e < uVar14) break;
        pwVar1 = pwStack00000008 + 1;
        pwStack00000008 = pwStack00000008 + 1;
        wVar4 = *pwVar1;
      }
      *(undefined2 *)(&stack0x00000068 + uVar14 * 2) = 0;
      iVar8 = _wtoi((wchar_t *)&stack0x00000068);
      iVar16 = -1;
      cVar7 = (char)iVar8;
      if (((*pwStack00000008 == L'v') && (cVar2 = (char)pwStack00000008[1], '/' < cVar2)) &&
         (cVar2 < ':')) {
        pwStack00000008 = pwStack00000008 + 2;
        iVar16 = cVar2 + -0x30;
      }
      switch(wVar3) {
      case L'!':
        iVar8 = FUN_0041c940();
        if ((iVar8 != 0) && (*(int *)(iVar8 + 4) != 0)) {
          iVar8 = FUN_0041c970();
          in_stack_000020ec = in_stack_000020ec + iVar8;
        }
        break;
      case L'B':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            pIVar11 = Universe::get_base(puVar5[1]);
            if (pIVar11 != (IBase *)0x0) {
              (**(code **)(*(int *)pIVar11 + 8))();
LAB_0041d047:
              iVar8 = FUN_004347e0();
              if (iVar8 == 0) {
                (**(code **)FDUMP_exref)();
              }
              in_stack_000020ec = in_stack_000020ec + iVar8;
              goto LAB_0041cb61;
            }
            break;
          }
        }
        break;
      case L'F':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            uVar14 = Reputation::get_name(puVar5[1]);
            if (uVar14 != 0xffffffff) {
              if (iVar16 < 0) {
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  (**(code **)FDUMP_exref)();
                }
                in_stack_000020ec = in_stack_000020ec + iVar8;
                if (pwVar15 == in_stack_000020ec) {
                  in_stack_000020ec[-1] = L'\0';
                }
              }
              else if (uVar14 - 0x300ee < 100) goto LAB_0041cb12;
            }
            break;
          }
        }
        break;
      case L'G':
        puVar5 = (undefined4 *)*extraout_ECX;
joined_r0x0041cdc2:
        if (puVar5 != (undefined4 *)0x0) {
          if ((*(wchar_t *)(puVar5 + 2) != wVar3) || (*(char *)((int)puVar5 + 10) != cVar7))
          goto LAB_0041cdd3;
          pGVar12 = GoodList::find_by_id(puVar5[1]);
joined_r0x0041ce2b:
          if (pGVar12 != (GoodInfo *)0x0) goto LAB_0041d047;
        }
        break;
      case L'I':
        iVar8 = FUN_0041c940();
        if ((iVar8 != 0) && (*(uint *)(iVar8 + 4) < 100)) {
          FUN_0041d5b0();
        }
        break;
      case L'L':
        iVar8 = FUN_0041c940();
        if ((iVar8 != 0) && (*(uint *)(iVar8 + 4) < 100)) {
          FUN_0041d5b0();
        }
        break;
      case L'N':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            pGVar12 = (GoodInfo *)puVar5[1];
            goto joined_r0x0041ce2b;
          }
        }
        break;
      case L'R':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            FUN_0041d440();
            break;
          }
        }
        break;
      case L'S':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            pIVar10 = Universe::get_system(puVar5[1]);
            if (pIVar10 != (ISystem *)0x0) {
              (**(code **)(*(int *)pIVar10 + 0xc))();
              goto LAB_0041d047;
            }
            break;
          }
        }
        break;
      case L'Z':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            pIVar13 = Universe::get_zone(puVar5[1]);
            if (iVar16 < 0) {
              if (pIVar13 != (IZone *)0x0) {
                (**(code **)(*(int *)pIVar13 + 0x84))();
                goto LAB_0041d047;
              }
              if ((uint)puVar5[1] < 0x40) {
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  (**(code **)FDUMP_exref)();
                }
                pwVar1 = in_stack_000020ec + iVar8;
                if (pwVar15 == pwVar1) {
                  pwVar1[-1] = L'\0';
                }
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  (**(code **)FDUMP_exref)();
                }
                pwVar1 = pwVar1 + iVar8;
                if (pwVar15 == pwVar1) {
                  pwVar1[-1] = L'\0';
                }
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  (**(code **)FDUMP_exref)();
                }
                in_stack_000020ec = pwVar1 + iVar8;
                if (pwVar15 == in_stack_000020ec) {
                  in_stack_000020ec[-1] = L'\0';
                }
                goto LAB_0041d047;
              }
            }
            else if (pIVar13 == (IZone *)0x0) {
              if ((uint)puVar5[1] < 0x40) {
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  FUN_00411c50();
                  (**(code **)FDUMP_exref)();
                }
                pwVar1 = in_stack_000020ec + iVar8;
                if (pwVar15 == pwVar1) {
                  pwVar1[-1] = L'\0';
                }
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  FUN_00411c50();
                  (**(code **)FDUMP_exref)();
                }
                pwVar1 = pwVar1 + iVar8;
                if (pwVar15 == pwVar1) {
                  pwVar1[-1] = L'\0';
                }
                iVar8 = FUN_004347e0();
                if (iVar8 == 0) {
                  FUN_00411c50();
                  (**(code **)FDUMP_exref)();
                }
                in_stack_000020ec = pwVar1 + iVar8;
                if (pwVar15 == in_stack_000020ec) {
                  in_stack_000020ec[-1] = L'\0';
                }
                FUN_0041d5b0();
                goto LAB_0041c9f1;
              }
            }
            else {
              iVar8 = (**(code **)(*(int *)pIVar13 + 0x84))();
              if (iVar8 - 0x3fc58U < 199) goto LAB_0041d047;
            }
            break;
          }
        }
        break;
      case L'd':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            FUN_004779a0();
            sVar9 = wcslen((wchar_t *)&stack0x00000028);
            if (in_stack_000020ec + sVar9 < pwVar15) {
              wcscat(in_stack_000020ec,(wchar_t *)&stack0x00000028);
              in_stack_000020ec = in_stack_000020ec + sVar9;
            }
            break;
          }
        }
        break;
      case L's':
        for (puVar5 = (undefined4 *)*extraout_ECX; puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          if ((*(wchar_t *)(puVar5 + 2) == wVar3) && (*(char *)((int)puVar5 + 10) == cVar7)) {
            if (puVar5[1] != 2) goto LAB_0041cb12;
            break;
          }
        }
      }
    }
    else {
      *in_stack_000020ec = wVar3;
      in_stack_000020ec = in_stack_000020ec + 1;
      if (in_stack_000020ec == pwVar15) goto LAB_0041d37c;
      *in_stack_000020ec = L'\0';
    }
  } while( true );
LAB_0041cdd3:
  puVar5 = (undefined4 *)*puVar5;
  goto joined_r0x0041cdc2;
LAB_0041cb12:
  iVar8 = FUN_004347e0();
  if (iVar8 == 0) {
    (**(code **)FDUMP_exref)();
  }
  in_stack_000020ec = in_stack_000020ec + iVar8;
LAB_0041cb61:
  if (pwVar15 == in_stack_000020ec) {
    in_stack_000020ec[-1] = L'\0';
  }
  goto switchD_0041cad9_caseD_22;
}

