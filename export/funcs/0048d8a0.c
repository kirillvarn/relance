
/* WARNING: Removing unreachable block (ram,0x0048d8b8) */
/* WARNING: Removing unreachable block (ram,0x0048d8c9) */
/* WARNING: Removing unreachable block (ram,0x0048d8cb) */
/* WARNING: Removing unreachable block (ram,0x0048db9b) */
/* WARNING: Removing unreachable block (ram,0x0048dbba) */
/* WARNING: Removing unreachable block (ram,0x0048dbc0) */
/* WARNING: Removing unreachable block (ram,0x0048dbd1) */
/* WARNING: Removing unreachable block (ram,0x0048dbd3) */
/* WARNING: Removing unreachable block (ram,0x0048dbd5) */
/* WARNING: Removing unreachable block (ram,0x0048dbdb) */
/* WARNING: Removing unreachable block (ram,0x0048dbe4) */
/* WARNING: Removing unreachable block (ram,0x0048dbf4) */
/* WARNING: Removing unreachable block (ram,0x0048dbf6) */
/* WARNING: Removing unreachable block (ram,0x0048dbf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0048d8a0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  int local_c;
  int local_8;
  int local_4;
  
  piVar1 = param_1;
  DAT_00672050 = DAT_0067204c;
  iVar3 = *param_1;
  pfVar8 = (float *)(param_1 + 1);
  pfVar6 = DAT_0067204c;
  param_1 = (int *)iVar3;
  if (0 < iVar3) {
    do {
      if (piVar1[4] == 0) {
        if ((((float)_DAT_005d2ee0 <= ABS(*pfVar8)) ||
            ((float)_DAT_005d2ee0 <= ABS((float)piVar1[2]))) ||
           ((float)_DAT_005d2ee0 <= ABS((float)piVar1[3]))) {
          local_30 = *pfVar8;
          local_2c = piVar1[2];
          local_28 = piVar1[3];
          local_1c = piVar1[6];
          local_20 = piVar1[5];
          iVar3 = (int)DAT_00672054 - (int)pfVar6 >> 0x1f;
          local_24 = 0;
          if (((int)DAT_00672054 - (int)pfVar6) / 0x18 + iVar3 == iVar3) {
            uVar2 = FUN_004a2ee0();
            if (uVar2 < 2) {
              iVar3 = 1;
            }
            else {
              iVar3 = FUN_004a2ee0();
            }
            iVar4 = FUN_004a2ee0();
            iVar4 = iVar4 + iVar3;
            iVar3 = iVar4;
            if (iVar4 < 0) {
              iVar3 = 0;
            }
            pfVar5 = operator_new(iVar3 * 0x18);
            iVar3 = FUN_004a3a10(DAT_0067204c,pfVar6,pfVar5);
            FUN_004a3a50(iVar3,1,&local_30);
            FUN_004a3a10(pfVar6,DAT_00672050,iVar3 + 0x18);
            IDPMsgHandler::OnReceive
                      ((IDPMsgHandler *)&DAT_00672048,(uchar *)DAT_0067204c,(ulong)DAT_00672050);
            FUN_005b7e1d(DAT_0067204c);
            DAT_00672054 = pfVar5 + iVar4 * 6;
            iVar3 = FUN_004a2ee0();
            DAT_00672050 = pfVar5 + (iVar3 + 1) * 6;
            pfVar6 = DAT_00672050;
            DAT_0067204c = pfVar5;
          }
          else {
            FUN_004a3a10(pfVar6,pfVar6,pfVar6 + 6);
            FUN_004a3a50(DAT_00672050,1 - ((int)DAT_00672050 - (int)pfVar6) / 0x18,&local_30);
            pfVar5 = DAT_00672050;
            if (pfVar6 == DAT_00672050) {
              DAT_00672050 = DAT_00672050 + 6;
              pfVar6 = DAT_00672050;
            }
            else {
              do {
                pfVar7 = pfVar6 + 6;
                pfVar9 = &local_30;
                for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                  *pfVar6 = *pfVar9;
                  pfVar9 = pfVar9 + 1;
                  pfVar6 = pfVar6 + 1;
                }
                pfVar6 = pfVar7;
              } while (pfVar7 != pfVar5);
              DAT_00672050 = DAT_00672050 + 6;
              pfVar6 = DAT_00672050;
            }
          }
        }
      }
      else {
        FUN_0048d780(&local_3c,piVar1[4],piVar1[5]);
        if ((((float)_DAT_005d2ee0 <= ABS(local_3c)) || ((float)_DAT_005d2ee0 <= ABS(local_38))) ||
           (pfVar6 = DAT_00672050, (float)_DAT_005d2ee0 <= ABS(local_34))) {
          local_18 = local_3c;
          local_c = piVar1[4];
          local_14 = local_38;
          local_8 = piVar1[5];
          local_10 = local_34;
          local_4 = piVar1[6];
          FUN_004a3680(DAT_00672050,1,&local_18);
          pfVar6 = DAT_00672050;
        }
      }
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}

