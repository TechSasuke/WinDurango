#include "pch.h"
#include "framework.h"
#include "Unknwn.h"

unsigned _int64 dat_18001E870;

_int64* fun_18000E570(_int64* param_1)
{
	if ((dat_18001EB28 & 1) == 0) {
		dat_18001EB28 = dat_18001EB28 | 1;
		fun_18000E5BC(param_1);
		fun_1800132A8((_onexit_t)&dat_180014554);
	}

	*param_1 = &dat_18001EB30;
	return 0;
}

HRESULT ActivateAudioInterfaceAsync_X(int param_1, int param_2, int param_3, int param_4, int* param_5)
{
	//    int* puVar1;
	HRESULT HVar2 = 0;
	//    DWORD DVar3;
	//    APTTYPEQUALIFIER local_38[2];
	//    _int64* local_30;
	//
	//    puVar1 = param_5;
	//    *param_5 = 0;
	//    local_30 = (_int64*)0x0;
	//    HVar2 = CoGetApartmentType((APTTYPE*)&param_5, local_38);
	//    if (-1 < HVar2) {
	//        if (((int)param_5 == 0) || ((int)param_5 == 3)) {
	//            DVar3 = GetCurrentThreadId();
	//        }
	//        else {
	//            DVar3 = 0;
	//        }
	//        HVar2 = CoCreateInstance((IID*)&DAT_180016bc0, (LPUNKNOWN)0x0, 1, (IID*)&DAT_180018840, &local_30);
	//          
	//       if (-1 < HVar2) {
	//            HVar2 = (**(code**)(*local_30 + 0x18))(local_30, param_1, param_2, param_3, param_4, DVar3);
	//            if (-1 < HVar2) {
	//                HVar2 = (**(_int64**)*local_30)(local_30, &DAT_180018830, puVar1);
	//                if (-1 < HVar2) {
	//                    HVar2 = 0;
	//                }
	//            }
	//        }
	//    }
	//    if (local_30 != (_int64*)0x0) {
	//        *local_30 + 0x10;
	//    }
	return HVar2;
}

HRESULT DllCanUnloadNow_X()
{
	int iVar1 = 0x18;
	//
	//	iVar1 = **(int**)sub_18001EAA0 + 0x18 &sub_18001EAA0;
	//
	return iVar1 != 0;
}

HRESULT DllGetClassObject_X(IID* rclsid, IID* riid, LPVOID* ppv)
{
	//	unsigned long uVar1;
	//	unsigned long** ppuVar2;
	//	unsigned long* puVar3;
	//	PVOID* ppvVar4;
	//	int iVar5;
	//	PVOID pvVar6;
	//	_int64* puVar7;
	HRESULT HVar8 = 0;
	//	PVOID local_res18[2];
	//	
	//	if (ppv == (LPVOID*)0x0) {
	//		HVar8 = -0x7fffbffd;
	//	}
	//	
	//	else {
	//		*ppv = (LPVOID)0x0;
	//		puVar7 = sub_18001E1F0;
	//		if (DAT_18001E1E0 == 0) {
	//			HVar8 = -0x7fff0001;
	//		}
	//	
	//		else {
	//			for (; puVar7 < DAT_18001e1f8; puVar7 = puVar7 + 1) {
	//				ppuVar2 = (ulong**)*puVar7;
	//				if (((((ppuVar2 != (ulong**)0x0) && (ppuVar2[2] != (unsigned long*)0x0)) &&
	//					(puVar3 = *ppuVar2, rclsid->Data1 == *puVar3)) &&
	//					((uVar1._0_2_ = rclsid->Data2, uVar1._2_2_ = rclsid->Data3, uVar1 == puVar3[1] &&
	//						(*(unsigned long*)rclsid->Data4 == puVar3[2])))) &&
	//					(*(unsigned long*)(rclsid->Data4 + 4) == puVar3[3])) {
	//					ppvVar4 = (PVOID*)ppuVar2[4];
	//					pvVar6 = *ppvVar4;
	//					if (pvVar6 == (PVOID)0x0) {
	//						EnterCriticalSection((LPCRITICAL_SECTION)&sub_18001e200);
	//						iVar5 = 0;
	//						if ((*ppvVar4 == (PVOID)0x0) &&
	//							(iVar5 = (*(code*)ppuVar2[2])(ppuVar2[3], &sub_1800164f8, local_res18), -1 < iVar5)) {
	//							pvVar6 = EncodePointer(local_res18[0]);
	//							*ppvVar4 = pvVar6;
	//						}
	//						LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_18001e200);
	//						pvVar6 = *ppvVar4;
	//						if (pvVar6 != (PVOID)0x0) goto LAB_1800081b2;
	//				}
	//					else {
	//				LAB_1800081b2:
	//						puVar7 = (undefined8*)DecodePointer(pvVar6);
	//						iVar5 = (**(__int64**)*puVar7)(puVar7, riid, ppv);
	//					}
	//					if (*ppv != (LPVOID)0x0) {
	//						return iVar5;
	//					}
	//					if (iVar5 != 0) {
	//						return iVar5;
	//					}
	//					break;
	//				}
	//			}
	//			HVar8 = -0x7ffbfeef;
	//	
	//	
	return HVar8;
}

void RefreshWasapiDeviceList_X()
{
	//	HRESULT hVar1;
	//	__int64* local_res8[4];
	//
	//	local_res8[0] = (__int64*)0x0;
	//
	//	hVar1 = CoCreateInstance((IID)sub_180018D30, (LPUNKNOWN)0x0, 1, (IID)sub_180018D98, (LPVOID*)local_res8);
	//
	//	if (-1 < hVar1) {
	//		SetEvent((HANDLE)local_res8[0][0x20]);
	//	}
	//	if (local_res8[0] != (__int64*)0x0) {
	//		*local_res8[0] + 0x10;
	//	}
	//
}

unsigned long SetWasapiThreadAffinityMask_X(unsigned _int64 param_1)
{
	BOOL bVar1;
	HRESULT hVar2;
	HANDLE hProcess;
	__int64 uVar3; //undefined8
	unsigned long uVar4;
	__int64* res10;
	unsigned _int64 res18;
	_int64* res20;
	unsigned _int64 local28[2];


	res18 = 0;
	local28[0] = 0;
	uVar4 = 0;

	hProcess = GetCurrentProcess();

	bVar1 = GetProcessAffinityMask(hProcess, &res18, local28);
	if (bVar1 != 0) {
		if ((param_1 & ~res18) == 0)
		{
			uVar4 = dat_18001E870;

			if (dat_18001E870 == 0) {
				uVar4 = res18;
			}

			res20 = 0;
			dat_18001E870 = param_1;

			if ((((dat_18001E87C == '\0') && (uVar3 = fun_18000E570(&res20), -1 < (int)uVar3)) &&
				(dat_18001E870 != 0)) && (*(HANDLE*)(res20 + 0x58) != (HANDLE)0x0)) {

				SetThreadAffinityMask(*(HANDLE*)(res20 + 0x58), dat_18001E870);

			}

			res10 = (__int64*)0x0;

			hVar2 = CoCreateInstance((IID)dat_180018D30, (LPUNKNOWN)0x0, 1, (IID)dat_180018D98, (LPVOID*)res10);

			if (((-1 < hVar2) && (dat_18001E870 != 0)) && ((HANDLE)res10[0x1d] != (HANDLE)0x0)) {
				SetThreadAffinityMask((HANDLE)res10[0x1d], dat_18001E870);
			}
			if (res10 != (__int64*)0x0) {
				*res10 + 0x10;
			}
		}

		else {
			SetLastError(0x57);
		}
	}

	return uVar4;

}