#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ICSharpCode.SharpZipLib.Zip.ZipFile
struct ZipFile_t580;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t129;
// System.IO.FileStream
struct FileStream_t649;
// System.IO.Stream
struct Stream_t506;
// ICSharpCode.SharpZipLib.Zip.ZipEntry
struct ZipEntry_t591;
// System.Collections.IEnumerator
struct IEnumerator_t142;
// ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler
struct ZipTestResultHandler_t605;
// ICSharpCode.SharpZipLib.Core.INameTransform
struct INameTransform_t582;
// ICSharpCode.SharpZipLib.Zip.IEntryFactory
struct IEntryFactory_t581;
// ICSharpCode.SharpZipLib.Zip.IArchiveStorage
struct IArchiveStorage_t619;
// ICSharpCode.SharpZipLib.Zip.IDynamicDataSource
struct IDynamicDataSource_t620;
// ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate
struct ZipUpdate_t611;
// ICSharpCode.SharpZipLib.Zip.IStaticDataSource
struct IStaticDataSource_t612;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t650;
// ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource
struct StaticDiskDataSource_t621;
// ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource
struct DynamicDiskDataSource_t622;
// ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage
struct BaseArchiveStorage_t623;
// ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage
struct DiskArchiveStorage_t624;
// ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage
struct MemoryArchiveStorage_t625;
// System.IO.MemoryStream
struct MemoryStream_t600;
// ICSharpCode.SharpZipLib.Zip.DescriptorData
struct DescriptorData_t626;
// ICSharpCode.SharpZipLib.Zip.EntryPatchData
struct EntryPatchData_t627;
// ICSharpCode.SharpZipLib.Zip.ZipHelperStream
struct ZipHelperStream_t628;
// ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler
struct ReadDataHandler_t629;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t329;
// System.AsyncCallback
struct AsyncCallback_t330;
// ICSharpCode.SharpZipLib.Zip.ZipInputStream
struct ZipInputStream_t630;
// ICSharpCode.SharpZipLib.Zip.ZipNameTransform
struct ZipNameTransform_t631;
// ICSharpCode.SharpZipLib.Zip.ZipOutputStream
struct ZipOutputStream_t579;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFileMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_String.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_KeysRequMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile_MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_KeysRequ.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile_.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipConstMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_PMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_System_Boolean.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_2MethodDeclarations.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "mscorlib_System_IO_FileMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_UseZip64.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_2.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "mscorlib_System_IO_FileStream.h"
#include "mscorlib_System_IO_Stream.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_IO_FileStreamMethodDeclarations.h"
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
#include "mscorlib_System_ArgumentException.h"
#include "mscorlib_System_Int64.h"
#include "ICSharpCode.SharpZipLib_ArrayTypes.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_0.h"
#include "mscorlib_System_GCMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipEntry_0MethodDeclarations.h"
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__5MethodDeclarations.h"
#include "mscorlib_System_ObjectDisposedException.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__5.h"
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExcepMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExcep.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__7MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_12MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_CompressMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_15.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__7.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_12.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestStra.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipTestR.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestStatMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipTestRMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_CrMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipHelpeMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_DescriptMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestStat.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Checksums_Cr.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipHelpe.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Descript.h"
#include "mscorlib_System_Exception.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_TestOper.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Core_StreamUMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExtraMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipNameTMethodDeclarations.h"
#include "mscorlib_System_Int16.h"
#include "mscorlib_System_UInt32.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipExtra.h"
#include "mscorlib_System_IO_SeekOrigin.h"
#include "mscorlib_System_UInt16.h"
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "mscorlib_System_Collections_HashtableMethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__3MethodDeclarations.h"
#include "mscorlib_System_Collections_Hashtable.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__3.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__4.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_DynamicDMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_DynamicD.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_MemoryArMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_DiskArchMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_MemoryAr.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_DiskArch.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__4MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__1.h"
#include "mscorlib_System_UInt64.h"
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
#include "mscorlib_System_Text_Encoding.h"
#include "mscorlib_System_MathMethodDeclarations.h"
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
#include "mscorlib_System_InvalidOperationException.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__6MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_4MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__6.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_4.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_FileUpda.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__2MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipFile__2.h"
#include "mscorlib_System_ArrayMethodDeclarations.h"
#include "mscorlib_System_IO_EndOfStreamExceptionMethodDeclarations.h"
#include "mscorlib_System_IO_EndOfStreamException.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_3MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_CryptoStreamMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_CryptoStream.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Encryption_P_3.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithm.h"
#include "mscorlib_System_Security_Cryptography_SymmetricAlgorithmMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_CryptoStreamMode.h"
#include "mscorlib_System_RandomMethodDeclarations.h"
#include "mscorlib_System_Random.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_StaticDi.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_StaticDiMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_BaseArch.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_BaseArchMethodDeclarations.h"
#include "mscorlib_System_IO_PathMethodDeclarations.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_DateTimeMethodDeclarations.h"
#include "mscorlib_System_DateTime.h"
#include "mscorlib_System_IO_MemoryStream.h"
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_EntryPat.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_EntryPatMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipInput.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipInputMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_AsyncCallback.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipInput_0.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipInput_0MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_1MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_Compress_1.h"
#include "mscorlib_System_Int32MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipNameT.h"
#include "mscorlib_System_Char.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Core_WindowsMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilderMethodDeclarations.h"
#include "mscorlib_System_IO_PathTooLongExceptionMethodDeclarations.h"
#include "mscorlib_System_Text_StringBuilder.h"
#include "mscorlib_System_IO_PathTooLongException.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipOutpu.h"
#include "ICSharpCode_SharpZipLib_ICSharpCode_SharpZipLib_Zip_ZipOutpuMethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_0.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_0MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_1.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_1MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_2.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_2MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_3.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_3MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_4.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_4MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_5.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_5MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_6.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_6MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_7.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_7MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_8.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_8MethodDeclarations.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_9.h"
#include "ICSharpCode_SharpZipLib_U3CPrivateImplementationDetailsU3EU7_9MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::OnKeysRequired(System.String)
extern TypeInfo* KeysRequiredEventArgs_t601_il2cpp_TypeInfo_var;
extern "C" void ZipFile_OnKeysRequired_m3469 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		KeysRequiredEventArgs_t601_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(445);
		s_Il2CppMethodIntialized = true;
	}
	KeysRequiredEventArgs_t601 * V_0 = {0};
	{
		KeysRequiredEventHandler_t607 * L_0 = (__this->___KeysRequired_1);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_1 = ___fileName;
		ByteU5BU5D_t129* L_2 = (__this->___key_9);
		KeysRequiredEventArgs_t601 * L_3 = (KeysRequiredEventArgs_t601 *)il2cpp_codegen_object_new (KeysRequiredEventArgs_t601_il2cpp_TypeInfo_var);
		KeysRequiredEventArgs__ctor_m3386(L_3, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		KeysRequiredEventHandler_t607 * L_4 = (__this->___KeysRequired_1);
		KeysRequiredEventArgs_t601 * L_5 = V_0;
		NullCheck(L_4);
		KeysRequiredEventHandler_Invoke_m3406(L_4, __this, L_5, /*hidden argument*/NULL);
		KeysRequiredEventArgs_t601 * L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_t129* L_7 = KeysRequiredEventArgs_get_Key_m3388(L_6, /*hidden argument*/NULL);
		__this->___key_9 = L_7;
	}

IL_002e:
	{
		return;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::get_Key()
extern "C" ByteU5BU5D_t129* ZipFile_get_Key_m3470 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t129* L_0 = (__this->___key_9);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_Key(System.Byte[])
extern "C" void ZipFile_set_Key_m3471 (ZipFile_t580 * __this, ByteU5BU5D_t129* ___value, const MethodInfo* method)
{
	{
		ByteU5BU5D_t129* L_0 = ___value;
		__this->___key_9 = L_0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_Password(System.String)
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern "C" void ZipFile_set_Password_m3472 (ZipFile_t580 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___value;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value;
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m564(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0013;
		}
	}

IL_000b:
	{
		__this->___key_9 = (ByteU5BU5D_t129*)NULL;
		return;
	}

IL_0013:
	{
		String_t* L_3 = ___value;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_4 = ZipConstants_ConvertToArray_m3241(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_5 = PkzipClassic_GenerateKeys_m2713(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___key_9 = L_5;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_HaveKeys()
extern "C" bool ZipFile_get_HaveKeys_m3473 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t129* L_0 = (__this->___key_9);
		return ((((int32_t)((((Object_t*)(ByteU5BU5D_t129*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.String)
extern TypeInfo* ZipEntryFactory_t593_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral335;
extern "C" void ZipFile__ctor_m3474 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral335 = il2cpp_codegen_string_literal_from_index(335);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___useZip64__11 = 2;
		__this->___bufferSize__18 = ((int32_t)4096);
		ZipEntryFactory_t593 * L_0 = (ZipEntryFactory_t593 *)il2cpp_codegen_object_new (ZipEntryFactory_t593_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m3300(L_0, /*hidden argument*/NULL);
		__this->___updateEntryFactory__22 = L_0;
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___name;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t651 * L_2 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_2, _stringLiteral335, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0031:
	{
		String_t* L_3 = ___name;
		__this->___name__3 = L_3;
		String_t* L_4 = ___name;
		FileStream_t649 * L_5 = File_OpenRead_m3735(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		__this->___baseStream__5 = L_5;
		__this->___isStreamOwner_6 = 1;
	}

IL_004b:
	try
	{ // begin try (depth: 1)
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		goto IL_005d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0053;
		throw e;
	}

CATCH_0053:
	{ // begin catch(System.Object)
		ZipFile_DisposeInternal_m3556(__this, 1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)__exception_local);
	} // end catch (depth: 1)

IL_005d:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.FileStream)
extern TypeInfo* ZipEntryFactory_t593_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral334;
extern Il2CppCodeGenString* _stringLiteral418;
extern "C" void ZipFile__ctor_m3475 (ZipFile_t580 * __this, FileStream_t649 * ___file, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral334 = il2cpp_codegen_string_literal_from_index(334);
		_stringLiteral418 = il2cpp_codegen_string_literal_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___useZip64__11 = 2;
		__this->___bufferSize__18 = ((int32_t)4096);
		ZipEntryFactory_t593 * L_0 = (ZipEntryFactory_t593 *)il2cpp_codegen_object_new (ZipEntryFactory_t593_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m3300(L_0, /*hidden argument*/NULL);
		__this->___updateEntryFactory__22 = L_0;
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		FileStream_t649 * L_1 = ___file;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t651 * L_2 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_2, _stringLiteral334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0031:
	{
		FileStream_t649 * L_3 = ___file;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_3);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t488 * L_5 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3703(L_5, _stringLiteral418, _stringLiteral334, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0049:
	{
		FileStream_t649 * L_6 = ___file;
		__this->___baseStream__5 = L_6;
		FileStream_t649 * L_7 = ___file;
		NullCheck(L_7);
		String_t* L_8 = FileStream_get_Name_m3801(L_7, /*hidden argument*/NULL);
		__this->___name__3 = L_8;
		__this->___isStreamOwner_6 = 1;
	}

IL_0063:
	try
	{ // begin try (depth: 1)
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		goto IL_0075;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_006b;
		throw e;
	}

CATCH_006b:
	{ // begin catch(System.Object)
		ZipFile_DisposeInternal_m3556(__this, 1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)__exception_local);
	} // end catch (depth: 1)

IL_0075:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor(System.IO.Stream)
extern TypeInfo* ZipEntryFactory_t593_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral263;
extern Il2CppCodeGenString* _stringLiteral418;
extern "C" void ZipFile__ctor_m3476 (ZipFile_t580 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		_stringLiteral263 = il2cpp_codegen_string_literal_from_index(263);
		_stringLiteral418 = il2cpp_codegen_string_literal_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		__this->___useZip64__11 = 2;
		__this->___bufferSize__18 = ((int32_t)4096);
		ZipEntryFactory_t593 * L_0 = (ZipEntryFactory_t593 *)il2cpp_codegen_object_new (ZipEntryFactory_t593_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m3300(L_0, /*hidden argument*/NULL);
		__this->___updateEntryFactory__22 = L_0;
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		Stream_t506 * L_1 = ___stream;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t651 * L_2 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_2, _stringLiteral263, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0031:
	{
		Stream_t506 * L_3 = ___stream;
		NullCheck(L_3);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_3);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t488 * L_5 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3703(L_5, _stringLiteral418, _stringLiteral263, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0049:
	{
		Stream_t506 * L_6 = ___stream;
		__this->___baseStream__5 = L_6;
		__this->___isStreamOwner_6 = 1;
		Stream_t506 * L_7 = (__this->___baseStream__5);
		NullCheck(L_7);
		int64_t L_8 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_7);
		if ((((int64_t)L_8) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0078;
		}
	}

IL_0066:
	try
	{ // begin try (depth: 1)
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		goto IL_008b;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_006e;
		throw e;
	}

CATCH_006e:
	{ // begin catch(System.Object)
		ZipFile_DisposeInternal_m3556(__this, 1, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)__exception_local);
	} // end catch (depth: 1)

IL_0078:
	{
		__this->___entries__8 = ((ZipEntryU5BU5D_t615*)SZArrayNew(ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		__this->___isNewArchive__10 = 1;
	}

IL_008b:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::.ctor()
extern TypeInfo* ZipEntryFactory_t593_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var;
extern "C" void ZipFile__ctor_m3477 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___useZip64__11 = 2;
		__this->___bufferSize__18 = ((int32_t)4096);
		ZipEntryFactory_t593 * L_0 = (ZipEntryFactory_t593 *)il2cpp_codegen_object_new (ZipEntryFactory_t593_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m3300(L_0, /*hidden argument*/NULL);
		__this->___updateEntryFactory__22 = L_0;
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		__this->___entries__8 = ((ZipEntryU5BU5D_t615*)SZArrayNew(ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		__this->___isNewArchive__10 = 1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Finalize()
extern "C" void ZipFile_Finalize_m3478 (ZipFile_t580 * __this, const MethodInfo* method)
{
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(6 /* System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x10, FINALLY_0009);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_0009;
	}

FINALLY_0009:
	{ // begin finally (depth: 1)
		Object_Finalize_m3693(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(9)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(9)
	{
		IL2CPP_JUMP_TBL(0x10, IL_0010)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_0010:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Close()
extern "C" void ZipFile_Close_m3479 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ZipFile_DisposeInternal_m3556(__this, 1, /*hidden argument*/NULL);
		GC_SuppressFinalize_m3695(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile::Create(System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ZipFile_t580_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern "C" ZipFile_t580 * ZipFile_Create_m3480 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ZipFile_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	FileStream_t649 * V_0 = {0};
	ZipFile_t580 * V_1 = {0};
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___fileName;
		FileStream_t649 * L_3 = File_Create_m3729(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		ZipFile_t580 * L_4 = (ZipFile_t580 *)il2cpp_codegen_object_new (ZipFile_t580_il2cpp_TypeInfo_var);
		ZipFile__ctor_m3477(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		ZipFile_t580 * L_5 = V_1;
		String_t* L_6 = ___fileName;
		NullCheck(L_5);
		L_5->___name__3 = L_6;
		ZipFile_t580 * L_7 = V_1;
		FileStream_t649 * L_8 = V_0;
		NullCheck(L_7);
		L_7->___baseStream__5 = L_8;
		ZipFile_t580 * L_9 = V_1;
		NullCheck(L_9);
		L_9->___isStreamOwner_6 = 1;
		ZipFile_t580 * L_10 = V_1;
		return L_10;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipFile ICSharpCode.SharpZipLib.Zip.ZipFile::Create(System.IO.Stream)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern TypeInfo* ZipFile_t580_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral229;
extern Il2CppCodeGenString* _stringLiteral420;
extern Il2CppCodeGenString* _stringLiteral418;
extern "C" ZipFile_t580 * ZipFile_Create_m3481 (Object_t * __this /* static, unused */, Stream_t506 * ___outStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		ZipFile_t580_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(429);
		_stringLiteral229 = il2cpp_codegen_string_literal_from_index(229);
		_stringLiteral420 = il2cpp_codegen_string_literal_from_index(420);
		_stringLiteral418 = il2cpp_codegen_string_literal_from_index(418);
		s_Il2CppMethodIntialized = true;
	}
	ZipFile_t580 * V_0 = {0};
	{
		Stream_t506 * L_0 = ___outStream;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral229, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		Stream_t506 * L_2 = ___outStream;
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_2);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentException_t488 * L_4 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3703(L_4, _stringLiteral420, _stringLiteral229, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0026:
	{
		Stream_t506 * L_5 = ___outStream;
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_5);
		if (L_6)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_t488 * L_7 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3703(L_7, _stringLiteral418, _stringLiteral229, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_003e:
	{
		ZipFile_t580 * L_8 = (ZipFile_t580 *)il2cpp_codegen_object_new (ZipFile_t580_il2cpp_TypeInfo_var);
		ZipFile__ctor_m3477(L_8, /*hidden argument*/NULL);
		V_0 = L_8;
		ZipFile_t580 * L_9 = V_0;
		Stream_t506 * L_10 = ___outStream;
		NullCheck(L_9);
		L_9->___baseStream__5 = L_10;
		ZipFile_t580 * L_11 = V_0;
		return L_11;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsStreamOwner()
extern "C" bool ZipFile_get_IsStreamOwner_m3482 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isStreamOwner_6);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_IsStreamOwner(System.Boolean)
extern "C" void ZipFile_set_IsStreamOwner_m3483 (ZipFile_t580 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___isStreamOwner_6 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsEmbeddedArchive()
extern "C" bool ZipFile_get_IsEmbeddedArchive_m3484 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___offsetOfFirstEntry_7);
		return ((((int64_t)L_0) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsNewArchive()
extern "C" bool ZipFile_get_IsNewArchive_m3485 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isNewArchive__10);
		return L_0;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::get_ZipFileComment()
extern "C" String_t* ZipFile_get_ZipFileComment_m3486 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___comment__4);
		return L_0;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::get_Name()
extern "C" String_t* ZipFile_get_Name_m3487 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___name__3);
		return L_0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::get_Size()
extern "C" int32_t ZipFile_get_Size_m3488 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ZipEntryU5BU5D_t615* L_0 = (__this->___entries__8);
		NullCheck(L_0);
		return (((int32_t)((int32_t)(((Array_t *)L_0)->max_length))));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::get_Count()
extern "C" int64_t ZipFile_get_Count_m3489 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ZipEntryU5BU5D_t615* L_0 = (__this->___entries__8);
		NullCheck(L_0);
		return (((int64_t)((int64_t)(((int32_t)((int32_t)(((Array_t *)L_0)->max_length)))))));
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile::get_EntryByIndex(System.Int32)
extern TypeInfo* ZipEntry_t591_il2cpp_TypeInfo_var;
extern "C" ZipEntry_t591 * ZipFile_get_EntryByIndex_m3490 (ZipFile_t580 * __this, int32_t ___index, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntry_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipEntryU5BU5D_t615* L_0 = (__this->___entries__8);
		int32_t L_1 = ___index;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_0, L_2, sizeof(ZipEntry_t591 *))));
		Object_t * L_3 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone() */, (*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_0, L_2, sizeof(ZipEntry_t591 *))));
		return ((ZipEntry_t591 *)CastclassClass(L_3, ZipEntry_t591_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IEnumerator ICSharpCode.SharpZipLib.Zip.ZipFile::GetEnumerator()
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryEnumerator_t614_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern "C" Object_t * ZipFile_GetEnumerator_m3491 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ZipEntryEnumerator_t614_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(447);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipEntryU5BU5D_t615* L_2 = (__this->___entries__8);
		ZipEntryEnumerator_t614 * L_3 = (ZipEntryEnumerator_t614 *)il2cpp_codegen_object_new (ZipEntryEnumerator_t614_il2cpp_TypeInfo_var);
		ZipEntryEnumerator__ctor_m3437(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindEntry(System.String,System.Boolean)
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t669_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern "C" int32_t ZipFile_FindEntry_m3492 (ZipFile_t580 * __this, String_t* ___name, bool ___ignoreCase, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		CultureInfo_t669_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(448);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		V_0 = 0;
		goto IL_0038;
	}

IL_0017:
	{
		String_t* L_2 = ___name;
		ZipEntryU5BU5D_t615* L_3 = (__this->___entries__8);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
		int32_t L_5 = L_4;
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_3, L_5, sizeof(ZipEntry_t591 *))));
		String_t* L_6 = ZipEntry_get_Name_m3279((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_3, L_5, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		bool L_7 = ___ignoreCase;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t669_il2cpp_TypeInfo_var);
		CultureInfo_t669 * L_8 = CultureInfo_get_InvariantCulture_m3802(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_9 = String_Compare_m3803(NULL /*static, unused*/, L_2, L_6, L_7, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_10 = V_0;
		return L_10;
	}

IL_0034:
	{
		int32_t L_11 = V_0;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0038:
	{
		int32_t L_12 = V_0;
		ZipEntryU5BU5D_t615* L_13 = (__this->___entries__8);
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_13)->max_length)))))))
		{
			goto IL_0017;
		}
	}
	{
		return (-1);
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipFile::GetEntry(System.String)
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t591_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern "C" ZipEntry_t591 * ZipFile_GetEntry_m3493 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ZipEntry_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		String_t* L_2 = ___name;
		int32_t L_3 = ZipFile_FindEntry_m3492(__this, L_2, 1, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		return (ZipEntry_t591 *)NULL;
	}

IL_0022:
	{
		ZipEntryU5BU5D_t615* L_5 = (__this->___entries__8);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_5, L_7, sizeof(ZipEntry_t591 *))));
		Object_t * L_8 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Object ICSharpCode.SharpZipLib.Zip.ZipEntry::Clone() */, (*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_5, L_7, sizeof(ZipEntry_t591 *))));
		return ((ZipEntry_t591 *)CastclassClass(L_8, ZipEntry_t591_il2cpp_TypeInfo_var));
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral422;
extern "C" Stream_t506 * ZipFile_GetInputStream_m3494 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral422 = il2cpp_codegen_string_literal_from_index(422);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	{
		ZipEntry_t591 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->___isDisposed__2);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ObjectDisposedException_t662 * L_3 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_3, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0021:
	{
		ZipEntry_t591 * L_4 = ___entry;
		NullCheck(L_4);
		int64_t L_5 = ZipEntry_get_ZipFileIndex_m3258(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_0;
		if ((((int64_t)L_6) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0054;
		}
	}
	{
		int64_t L_7 = V_0;
		ZipEntryU5BU5D_t615* L_8 = (__this->___entries__8);
		NullCheck(L_8);
		if ((((int64_t)L_7) >= ((int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((Array_t *)L_8)->max_length))))))))))
		{
			goto IL_0054;
		}
	}
	{
		ZipEntryU5BU5D_t615* L_9 = (__this->___entries__8);
		int64_t L_10 = V_0;
		if ((int64_t)(L_10) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, (((intptr_t)L_10)));
		intptr_t L_11 = (((intptr_t)L_10));
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_9, L_11, sizeof(ZipEntry_t591 *))));
		String_t* L_12 = ZipEntry_get_Name_m3279((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_9, L_11, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_13 = ___entry;
		NullCheck(L_13);
		String_t* L_14 = ZipEntry_get_Name_m3279(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Inequality_m2285(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0073;
		}
	}

IL_0054:
	{
		ZipEntry_t591 * L_16 = ___entry;
		NullCheck(L_16);
		String_t* L_17 = ZipEntry_get_Name_m3279(L_16, /*hidden argument*/NULL);
		int32_t L_18 = ZipFile_FindEntry_m3492(__this, L_17, 1, /*hidden argument*/NULL);
		V_0 = (((int64_t)((int64_t)L_18)));
		int64_t L_19 = V_0;
		if ((((int64_t)L_19) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0073;
		}
	}
	{
		ZipException_t594 * L_20 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_20, _stringLiteral422, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0073:
	{
		int64_t L_21 = V_0;
		Stream_t506 * L_22 = ZipFile_GetInputStream_m3495(__this, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetInputStream(System.Int64)
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* PartialInputStream_t617_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* Inflater_t545_il2cpp_TypeInfo_var;
extern TypeInfo* InflaterInputStream_t544_il2cpp_TypeInfo_var;
extern TypeInfo* CompressionMethod_t585_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral423;
extern Il2CppCodeGenString* _stringLiteral424;
extern "C" Stream_t506 * ZipFile_GetInputStream_m3495 (ZipFile_t580 * __this, int64_t ___entryIndex, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		PartialInputStream_t617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(449);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		Inflater_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		InflaterInputStream_t544_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(450);
		CompressionMethod_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral423 = il2cpp_codegen_string_literal_from_index(423);
		_stringLiteral424 = il2cpp_codegen_string_literal_from_index(424);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int32_t V_1 = {0};
	Stream_t506 * V_2 = {0};
	int32_t V_3 = {0};
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipEntryU5BU5D_t615* L_2 = (__this->___entries__8);
		int64_t L_3 = ___entryIndex;
		if ((int64_t)(L_3) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, (((intptr_t)L_3)));
		intptr_t L_4 = (((intptr_t)L_3));
		int64_t L_5 = ZipFile_LocateEntry_m3563(__this, (*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_2, L_4, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		V_0 = L_5;
		ZipEntryU5BU5D_t615* L_6 = (__this->___entries__8);
		int64_t L_7 = ___entryIndex;
		if ((int64_t)(L_7) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, (((intptr_t)L_7)));
		intptr_t L_8 = (((intptr_t)L_7));
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_6, L_8, sizeof(ZipEntry_t591 *))));
		int32_t L_9 = ZipEntry_get_CompressionMethod_m3286((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_6, L_8, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		V_1 = L_9;
		int64_t L_10 = V_0;
		ZipEntryU5BU5D_t615* L_11 = (__this->___entries__8);
		int64_t L_12 = ___entryIndex;
		if ((int64_t)(L_12) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_11);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_11, (((intptr_t)L_12)));
		intptr_t L_13 = (((intptr_t)L_12));
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_11, L_13, sizeof(ZipEntry_t591 *))));
		int64_t L_14 = ZipEntry_get_CompressedSize_m3282((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_11, L_13, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		PartialInputStream_t617 * L_15 = (PartialInputStream_t617 *)il2cpp_codegen_object_new (PartialInputStream_t617_il2cpp_TypeInfo_var);
		PartialInputStream__ctor_m3454(L_15, __this, L_10, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		ZipEntryU5BU5D_t615* L_16 = (__this->___entries__8);
		int64_t L_17 = ___entryIndex;
		if ((int64_t)(L_17) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, (((intptr_t)L_17)));
		intptr_t L_18 = (((intptr_t)L_17));
		NullCheck((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_16, L_18, sizeof(ZipEntry_t591 *))));
		bool L_19 = ZipEntry_get_IsCrypted_m3250((*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_16, L_18, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		Stream_t506 * L_20 = V_2;
		ZipEntryU5BU5D_t615* L_21 = (__this->___entries__8);
		int64_t L_22 = ___entryIndex;
		if ((int64_t)(L_22) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, (((intptr_t)L_22)));
		intptr_t L_23 = (((intptr_t)L_22));
		Stream_t506 * L_24 = ZipFile_CreateAndInitDecryptionStream_m3564(__this, L_20, (*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_21, L_23, sizeof(ZipEntry_t591 *))), /*hidden argument*/NULL);
		V_2 = L_24;
		Stream_t506 * L_25 = V_2;
		if (L_25)
		{
			goto IL_0077;
		}
	}
	{
		ZipException_t594 * L_26 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_26, _stringLiteral423, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}

IL_0077:
	{
		int32_t L_27 = V_1;
		V_3 = L_27;
		int32_t L_28 = V_3;
		if ((((int32_t)L_28) == ((int32_t)0)))
		{
			goto IL_00a6;
		}
	}
	{
		int32_t L_29 = V_3;
		if ((!(((uint32_t)L_29) == ((uint32_t)8))))
		{
			goto IL_0090;
		}
	}
	{
		Stream_t506 * L_30 = V_2;
		Inflater_t545 * L_31 = (Inflater_t545 *)il2cpp_codegen_object_new (Inflater_t545_il2cpp_TypeInfo_var);
		Inflater__ctor_m3152(L_31, 1, /*hidden argument*/NULL);
		InflaterInputStream_t544 * L_32 = (InflaterInputStream_t544 *)il2cpp_codegen_object_new (InflaterInputStream_t544_il2cpp_TypeInfo_var);
		InflaterInputStream__ctor_m2753(L_32, L_30, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		goto IL_00a6;
	}

IL_0090:
	{
		int32_t L_33 = V_1;
		int32_t L_34 = L_33;
		Object_t * L_35 = Box(CompressionMethod_t585_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m541(NULL /*static, unused*/, _stringLiteral424, L_35, /*hidden argument*/NULL);
		ZipException_t594 * L_37 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_00a6:
	{
		Stream_t506 * L_38 = V_2;
		return L_38;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::TestArchive(System.Boolean)
extern "C" bool ZipFile_TestArchive_m3496 (ZipFile_t580 * __this, bool ___testData, const MethodInfo* method)
{
	{
		bool L_0 = ___testData;
		bool L_1 = ZipFile_TestArchive_m3497(__this, L_0, 0, (ZipTestResultHandler_t605 *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::TestArchive(System.Boolean,ICSharpCode.SharpZipLib.Zip.TestStrategy,ICSharpCode.SharpZipLib.Zip.ZipTestResultHandler)
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* TestStatus_t604_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Crc32_t513_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern TypeInfo* DescriptorData_t626_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t159_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral425;
extern Il2CppCodeGenString* _stringLiteral426;
extern "C" bool ZipFile_TestArchive_m3497 (ZipFile_t580 * __this, bool ___testData, int32_t ___strategy, ZipTestResultHandler_t605 * ___resultHandler, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		TestStatus_t604_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(452);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Crc32_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		DescriptorData_t626_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(453);
		Exception_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral425 = il2cpp_codegen_string_literal_from_index(425);
		_stringLiteral426 = il2cpp_codegen_string_literal_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	TestStatus_t604 * V_0 = {0};
	int32_t V_1 = {0};
	bool V_2 = false;
	int32_t V_3 = 0;
	ZipException_t594 * V_4 = {0};
	Crc32_t513 * V_5 = {0};
	Stream_t506 * V_6 = {0};
	ByteU5BU5D_t129* V_7 = {0};
	int64_t V_8 = 0;
	int32_t V_9 = 0;
	ZipHelperStream_t628 * V_10 = {0};
	DescriptorData_t626 * V_11 = {0};
	Exception_t159 * V_12 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B7_0 = 0;
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		TestStatus_t604 * L_2 = (TestStatus_t604 *)il2cpp_codegen_object_new (TestStatus_t604_il2cpp_TypeInfo_var);
		TestStatus__ctor_m3390(L_2, __this, /*hidden argument*/NULL);
		V_0 = L_2;
		ZipTestResultHandler_t605 * L_3 = ___resultHandler;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		ZipTestResultHandler_t605 * L_4 = ___resultHandler;
		TestStatus_t604 * L_5 = V_0;
		NullCheck(L_4);
		ZipTestResultHandler_Invoke_m3402(L_4, L_5, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0025:
	{
		bool L_6 = ___testData;
		if (L_6)
		{
			goto IL_002b;
		}
	}
	{
		G_B7_0 = 2;
		goto IL_002c;
	}

IL_002b:
	{
		G_B7_0 = 3;
	}

IL_002c:
	{
		V_1 = G_B7_0;
		V_2 = 1;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			V_3 = 0;
			goto IL_01ff;
		}

IL_0036:
		{
			ZipTestResultHandler_t605 * L_7 = ___resultHandler;
			if (!L_7)
			{
				goto IL_0055;
			}
		}

IL_0039:
		{
			TestStatus_t604 * L_8 = V_0;
			int32_t L_9 = V_3;
			ZipEntry_t591 * L_10 = ZipFile_get_EntryByIndex_m3490(__this, L_9, /*hidden argument*/NULL);
			NullCheck(L_8);
			TestStatus_SetEntry_m3399(L_8, L_10, /*hidden argument*/NULL);
			TestStatus_t604 * L_11 = V_0;
			NullCheck(L_11);
			TestStatus_SetOperation_m3398(L_11, 1, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_12 = ___resultHandler;
			TestStatus_t604 * L_13 = V_0;
			NullCheck(L_12);
			ZipTestResultHandler_Invoke_m3402(L_12, L_13, (String_t*)NULL, /*hidden argument*/NULL);
		}

IL_0055:
		try
		{ // begin try (depth: 2)
			int32_t L_14 = V_3;
			ZipEntry_t591 * L_15 = ZipFile_get_EntryByIndex_m3490(__this, L_14, /*hidden argument*/NULL);
			int32_t L_16 = V_1;
			ZipFile_TestLocalHeader_m3498(__this, L_15, L_16, /*hidden argument*/NULL);
			goto IL_0090;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t159 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (ZipException_t594_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0066;
			throw e;
		}

CATCH_0066:
		{ // begin catch(ICSharpCode.SharpZipLib.Zip.ZipException)
			{
				V_4 = ((ZipException_t594 *)__exception_local);
				TestStatus_t604 * L_17 = V_0;
				NullCheck(L_17);
				TestStatus_AddError_m3397(L_17, /*hidden argument*/NULL);
				ZipTestResultHandler_t605 * L_18 = ___resultHandler;
				if (!L_18)
				{
					goto IL_0089;
				}
			}

IL_0071:
			{
				ZipTestResultHandler_t605 * L_19 = ___resultHandler;
				TestStatus_t604 * L_20 = V_0;
				ZipException_t594 * L_21 = V_4;
				NullCheck(L_21);
				String_t* L_22 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_21);
				IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
				String_t* L_23 = String_Format_m770(NULL /*static, unused*/, _stringLiteral425, L_22, /*hidden argument*/NULL);
				NullCheck(L_19);
				ZipTestResultHandler_Invoke_m3402(L_19, L_20, L_23, /*hidden argument*/NULL);
			}

IL_0089:
			{
				int32_t L_24 = ___strategy;
				if (L_24)
				{
					goto IL_008e;
				}
			}

IL_008c:
			{
				V_2 = 0;
			}

IL_008e:
			{
				goto IL_0090;
			}
		} // end catch (depth: 2)

IL_0090:
		{
			bool L_25 = V_2;
			if (!L_25)
			{
				goto IL_01e9;
			}
		}

IL_0096:
		{
			bool L_26 = ___testData;
			if (!L_26)
			{
				goto IL_01e9;
			}
		}

IL_009c:
		{
			int32_t L_27 = V_3;
			ZipEntry_t591 * L_28 = ZipFile_get_EntryByIndex_m3490(__this, L_27, /*hidden argument*/NULL);
			NullCheck(L_28);
			bool L_29 = ZipEntry_get_IsFile_m3294(L_28, /*hidden argument*/NULL);
			if (!L_29)
			{
				goto IL_01e9;
			}
		}

IL_00ad:
		{
			ZipTestResultHandler_t605 * L_30 = ___resultHandler;
			if (!L_30)
			{
				goto IL_00bf;
			}
		}

IL_00b0:
		{
			TestStatus_t604 * L_31 = V_0;
			NullCheck(L_31);
			TestStatus_SetOperation_m3398(L_31, 2, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_32 = ___resultHandler;
			TestStatus_t604 * L_33 = V_0;
			NullCheck(L_32);
			ZipTestResultHandler_Invoke_m3402(L_32, L_33, (String_t*)NULL, /*hidden argument*/NULL);
		}

IL_00bf:
		{
			Crc32_t513 * L_34 = (Crc32_t513 *)il2cpp_codegen_object_new (Crc32_t513_il2cpp_TypeInfo_var);
			Crc32__ctor_m2614(L_34, /*hidden argument*/NULL);
			V_5 = L_34;
			int32_t L_35 = V_3;
			ZipEntry_t591 * L_36 = ZipFile_get_EntryByIndex_m3490(__this, L_35, /*hidden argument*/NULL);
			Stream_t506 * L_37 = ZipFile_GetInputStream_m3494(__this, L_36, /*hidden argument*/NULL);
			V_6 = L_37;
		}

IL_00d5:
		try
		{ // begin try (depth: 2)
			{
				V_7 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)4096)));
				V_8 = (((int64_t)((int64_t)0)));
				goto IL_010e;
			}

IL_00e7:
			{
				Crc32_t513 * L_38 = V_5;
				ByteU5BU5D_t129* L_39 = V_7;
				int32_t L_40 = V_9;
				NullCheck(L_38);
				Crc32_Update_m2613(L_38, L_39, 0, L_40, /*hidden argument*/NULL);
				ZipTestResultHandler_t605 * L_41 = ___resultHandler;
				if (!L_41)
				{
					goto IL_010e;
				}
			}

IL_00f6:
			{
				int64_t L_42 = V_8;
				int32_t L_43 = V_9;
				V_8 = ((int64_t)((int64_t)L_42+(int64_t)(((int64_t)((int64_t)L_43)))));
				TestStatus_t604 * L_44 = V_0;
				int64_t L_45 = V_8;
				NullCheck(L_44);
				TestStatus_SetBytesTested_m3400(L_44, L_45, /*hidden argument*/NULL);
				ZipTestResultHandler_t605 * L_46 = ___resultHandler;
				TestStatus_t604 * L_47 = V_0;
				NullCheck(L_46);
				ZipTestResultHandler_Invoke_m3402(L_46, L_47, (String_t*)NULL, /*hidden argument*/NULL);
			}

IL_010e:
			{
				Stream_t506 * L_48 = V_6;
				ByteU5BU5D_t129* L_49 = V_7;
				ByteU5BU5D_t129* L_50 = V_7;
				NullCheck(L_50);
				NullCheck(L_48);
				int32_t L_51 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_48, L_49, 0, (((int32_t)((int32_t)(((Array_t *)L_50)->max_length)))));
				int32_t L_52 = L_51;
				V_9 = L_52;
				if ((((int32_t)L_52) > ((int32_t)0)))
				{
					goto IL_00e7;
				}
			}

IL_0122:
			{
				IL2CPP_LEAVE(0x130, FINALLY_0124);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t159 *)e.ex;
			goto FINALLY_0124;
		}

FINALLY_0124:
		{ // begin finally (depth: 2)
			{
				Stream_t506 * L_53 = V_6;
				if (!L_53)
				{
					goto IL_012f;
				}
			}

IL_0128:
			{
				Stream_t506 * L_54 = V_6;
				NullCheck(L_54);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_54);
			}

IL_012f:
			{
				IL2CPP_END_FINALLY(292)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(292)
		{
			IL2CPP_JUMP_TBL(0x130, IL_0130)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
		}

IL_0130:
		{
			int32_t L_55 = V_3;
			ZipEntry_t591 * L_56 = ZipFile_get_EntryByIndex_m3490(__this, L_55, /*hidden argument*/NULL);
			NullCheck(L_56);
			int64_t L_57 = ZipEntry_get_Crc_m3284(L_56, /*hidden argument*/NULL);
			Crc32_t513 * L_58 = V_5;
			NullCheck(L_58);
			int64_t L_59 = Crc32_get_Value_m2608(L_58, /*hidden argument*/NULL);
			if ((((int64_t)L_57) == ((int64_t)L_59)))
			{
				goto IL_015f;
			}
		}

IL_0145:
		{
			TestStatus_t604 * L_60 = V_0;
			NullCheck(L_60);
			TestStatus_AddError_m3397(L_60, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_61 = ___resultHandler;
			if (!L_61)
			{
				goto IL_015a;
			}
		}

IL_014e:
		{
			ZipTestResultHandler_t605 * L_62 = ___resultHandler;
			TestStatus_t604 * L_63 = V_0;
			NullCheck(L_62);
			ZipTestResultHandler_Invoke_m3402(L_62, L_63, _stringLiteral426, /*hidden argument*/NULL);
		}

IL_015a:
		{
			int32_t L_64 = ___strategy;
			if (L_64)
			{
				goto IL_015f;
			}
		}

IL_015d:
		{
			V_2 = 0;
		}

IL_015f:
		{
			int32_t L_65 = V_3;
			ZipEntry_t591 * L_66 = ZipFile_get_EntryByIndex_m3490(__this, L_65, /*hidden argument*/NULL);
			NullCheck(L_66);
			int32_t L_67 = ZipEntry_get_Flags_m3256(L_66, /*hidden argument*/NULL);
			if (!((int32_t)((int32_t)L_67&(int32_t)8)))
			{
				goto IL_01e9;
			}
		}

IL_016f:
		{
			Stream_t506 * L_68 = (__this->___baseStream__5);
			ZipHelperStream_t628 * L_69 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
			ZipHelperStream__ctor_m3603(L_69, L_68, /*hidden argument*/NULL);
			V_10 = L_69;
			DescriptorData_t626 * L_70 = (DescriptorData_t626 *)il2cpp_codegen_object_new (DescriptorData_t626_il2cpp_TypeInfo_var);
			DescriptorData__ctor_m3596(L_70, /*hidden argument*/NULL);
			V_11 = L_70;
			ZipHelperStream_t628 * L_71 = V_10;
			int32_t L_72 = V_3;
			ZipEntry_t591 * L_73 = ZipFile_get_EntryByIndex_m3490(__this, L_72, /*hidden argument*/NULL);
			NullCheck(L_73);
			bool L_74 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_73, /*hidden argument*/NULL);
			DescriptorData_t626 * L_75 = V_11;
			NullCheck(L_71);
			ZipHelperStream_ReadDataDescriptor_m3633(L_71, L_74, L_75, /*hidden argument*/NULL);
			int32_t L_76 = V_3;
			ZipEntry_t591 * L_77 = ZipFile_get_EntryByIndex_m3490(__this, L_76, /*hidden argument*/NULL);
			NullCheck(L_77);
			int64_t L_78 = ZipEntry_get_Crc_m3284(L_77, /*hidden argument*/NULL);
			DescriptorData_t626 * L_79 = V_11;
			NullCheck(L_79);
			int64_t L_80 = DescriptorData_get_Crc_m3594(L_79, /*hidden argument*/NULL);
			if ((((int64_t)L_78) == ((int64_t)L_80)))
			{
				goto IL_01b3;
			}
		}

IL_01ad:
		{
			TestStatus_t604 * L_81 = V_0;
			NullCheck(L_81);
			TestStatus_AddError_m3397(L_81, /*hidden argument*/NULL);
		}

IL_01b3:
		{
			int32_t L_82 = V_3;
			ZipEntry_t591 * L_83 = ZipFile_get_EntryByIndex_m3490(__this, L_82, /*hidden argument*/NULL);
			NullCheck(L_83);
			int64_t L_84 = ZipEntry_get_CompressedSize_m3282(L_83, /*hidden argument*/NULL);
			DescriptorData_t626 * L_85 = V_11;
			NullCheck(L_85);
			int64_t L_86 = DescriptorData_get_CompressedSize_m3590(L_85, /*hidden argument*/NULL);
			if ((((int64_t)L_84) == ((int64_t)L_86)))
			{
				goto IL_01ce;
			}
		}

IL_01c8:
		{
			TestStatus_t604 * L_87 = V_0;
			NullCheck(L_87);
			TestStatus_AddError_m3397(L_87, /*hidden argument*/NULL);
		}

IL_01ce:
		{
			int32_t L_88 = V_3;
			ZipEntry_t591 * L_89 = ZipFile_get_EntryByIndex_m3490(__this, L_88, /*hidden argument*/NULL);
			NullCheck(L_89);
			int64_t L_90 = ZipEntry_get_Size_m3280(L_89, /*hidden argument*/NULL);
			DescriptorData_t626 * L_91 = V_11;
			NullCheck(L_91);
			int64_t L_92 = DescriptorData_get_Size_m3592(L_91, /*hidden argument*/NULL);
			if ((((int64_t)L_90) == ((int64_t)L_92)))
			{
				goto IL_01e9;
			}
		}

IL_01e3:
		{
			TestStatus_t604 * L_93 = V_0;
			NullCheck(L_93);
			TestStatus_AddError_m3397(L_93, /*hidden argument*/NULL);
		}

IL_01e9:
		{
			ZipTestResultHandler_t605 * L_94 = ___resultHandler;
			if (!L_94)
			{
				goto IL_01fb;
			}
		}

IL_01ec:
		{
			TestStatus_t604 * L_95 = V_0;
			NullCheck(L_95);
			TestStatus_SetOperation_m3398(L_95, 3, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_96 = ___resultHandler;
			TestStatus_t604 * L_97 = V_0;
			NullCheck(L_96);
			ZipTestResultHandler_Invoke_m3402(L_96, L_97, (String_t*)NULL, /*hidden argument*/NULL);
		}

IL_01fb:
		{
			int32_t L_98 = V_3;
			V_3 = ((int32_t)((int32_t)L_98+(int32_t)1));
		}

IL_01ff:
		{
			bool L_99 = V_2;
			if (!L_99)
			{
				goto IL_020f;
			}
		}

IL_0202:
		{
			int32_t L_100 = V_3;
			int64_t L_101 = ZipFile_get_Count_m3489(__this, /*hidden argument*/NULL);
			if ((((int64_t)(((int64_t)((int64_t)L_100)))) < ((int64_t)L_101)))
			{
				goto IL_0036;
			}
		}

IL_020f:
		{
			ZipTestResultHandler_t605 * L_102 = ___resultHandler;
			if (!L_102)
			{
				goto IL_0221;
			}
		}

IL_0212:
		{
			TestStatus_t604 * L_103 = V_0;
			NullCheck(L_103);
			TestStatus_SetOperation_m3398(L_103, 4, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_104 = ___resultHandler;
			TestStatus_t604 * L_105 = V_0;
			NullCheck(L_104);
			ZipTestResultHandler_Invoke_m3402(L_104, L_105, (String_t*)NULL, /*hidden argument*/NULL);
		}

IL_0221:
		{
			goto IL_0248;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t159_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0223;
		throw e;
	}

CATCH_0223:
	{ // begin catch(System.Exception)
		{
			V_12 = ((Exception_t159 *)__exception_local);
			TestStatus_t604 * L_106 = V_0;
			NullCheck(L_106);
			TestStatus_AddError_m3397(L_106, /*hidden argument*/NULL);
			ZipTestResultHandler_t605 * L_107 = ___resultHandler;
			if (!L_107)
			{
				goto IL_0246;
			}
		}

IL_022e:
		{
			ZipTestResultHandler_t605 * L_108 = ___resultHandler;
			TestStatus_t604 * L_109 = V_0;
			Exception_t159 * L_110 = V_12;
			NullCheck(L_110);
			String_t* L_111 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_110);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_112 = String_Format_m770(NULL /*static, unused*/, _stringLiteral425, L_111, /*hidden argument*/NULL);
			NullCheck(L_108);
			ZipTestResultHandler_Invoke_m3402(L_108, L_109, L_112, /*hidden argument*/NULL);
		}

IL_0246:
		{
			goto IL_0248;
		}
	} // end catch (depth: 1)

IL_0248:
	{
		ZipTestResultHandler_t605 * L_113 = ___resultHandler;
		if (!L_113)
		{
			goto IL_0261;
		}
	}
	{
		TestStatus_t604 * L_114 = V_0;
		NullCheck(L_114);
		TestStatus_SetOperation_m3398(L_114, 5, /*hidden argument*/NULL);
		TestStatus_t604 * L_115 = V_0;
		NullCheck(L_115);
		TestStatus_SetEntry_m3399(L_115, (ZipEntry_t591 *)NULL, /*hidden argument*/NULL);
		ZipTestResultHandler_t605 * L_116 = ___resultHandler;
		TestStatus_t604 * L_117 = V_0;
		NullCheck(L_116);
		ZipTestResultHandler_Invoke_m3402(L_116, L_117, (String_t*)NULL, /*hidden argument*/NULL);
	}

IL_0261:
	{
		TestStatus_t604 * L_118 = V_0;
		NullCheck(L_118);
		int32_t L_119 = TestStatus_get_ErrorCount_m3394(L_118, /*hidden argument*/NULL);
		return ((((int32_t)L_119) == ((int32_t)0))? 1 : 0);
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::TestLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.ZipFile/HeaderTest)
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t673_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral427;
extern Il2CppCodeGenString* _stringLiteral428;
extern Il2CppCodeGenString* _stringLiteral429;
extern Il2CppCodeGenString* _stringLiteral430;
extern Il2CppCodeGenString* _stringLiteral431;
extern Il2CppCodeGenString* _stringLiteral432;
extern Il2CppCodeGenString* _stringLiteral398;
extern Il2CppCodeGenString* _stringLiteral433;
extern Il2CppCodeGenString* _stringLiteral434;
extern Il2CppCodeGenString* _stringLiteral435;
extern Il2CppCodeGenString* _stringLiteral436;
extern Il2CppCodeGenString* _stringLiteral437;
extern Il2CppCodeGenString* _stringLiteral438;
extern Il2CppCodeGenString* _stringLiteral439;
extern Il2CppCodeGenString* _stringLiteral440;
extern Il2CppCodeGenString* _stringLiteral441;
extern Il2CppCodeGenString* _stringLiteral442;
extern Il2CppCodeGenString* _stringLiteral443;
extern Il2CppCodeGenString* _stringLiteral444;
extern Il2CppCodeGenString* _stringLiteral445;
extern Il2CppCodeGenString* _stringLiteral446;
extern Il2CppCodeGenString* _stringLiteral447;
extern Il2CppCodeGenString* _stringLiteral448;
extern Il2CppCodeGenString* _stringLiteral449;
extern Il2CppCodeGenString* _stringLiteral450;
extern Il2CppCodeGenString* _stringLiteral451;
extern Il2CppCodeGenString* _stringLiteral452;
extern Il2CppCodeGenString* _stringLiteral453;
extern "C" int64_t ZipFile_TestLocalHeader_m3498 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, int32_t ___tests, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		Int16_t673_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(360);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		_stringLiteral427 = il2cpp_codegen_string_literal_from_index(427);
		_stringLiteral428 = il2cpp_codegen_string_literal_from_index(428);
		_stringLiteral429 = il2cpp_codegen_string_literal_from_index(429);
		_stringLiteral430 = il2cpp_codegen_string_literal_from_index(430);
		_stringLiteral431 = il2cpp_codegen_string_literal_from_index(431);
		_stringLiteral432 = il2cpp_codegen_string_literal_from_index(432);
		_stringLiteral398 = il2cpp_codegen_string_literal_from_index(398);
		_stringLiteral433 = il2cpp_codegen_string_literal_from_index(433);
		_stringLiteral434 = il2cpp_codegen_string_literal_from_index(434);
		_stringLiteral435 = il2cpp_codegen_string_literal_from_index(435);
		_stringLiteral436 = il2cpp_codegen_string_literal_from_index(436);
		_stringLiteral437 = il2cpp_codegen_string_literal_from_index(437);
		_stringLiteral438 = il2cpp_codegen_string_literal_from_index(438);
		_stringLiteral439 = il2cpp_codegen_string_literal_from_index(439);
		_stringLiteral440 = il2cpp_codegen_string_literal_from_index(440);
		_stringLiteral441 = il2cpp_codegen_string_literal_from_index(441);
		_stringLiteral442 = il2cpp_codegen_string_literal_from_index(442);
		_stringLiteral443 = il2cpp_codegen_string_literal_from_index(443);
		_stringLiteral444 = il2cpp_codegen_string_literal_from_index(444);
		_stringLiteral445 = il2cpp_codegen_string_literal_from_index(445);
		_stringLiteral446 = il2cpp_codegen_string_literal_from_index(446);
		_stringLiteral447 = il2cpp_codegen_string_literal_from_index(447);
		_stringLiteral448 = il2cpp_codegen_string_literal_from_index(448);
		_stringLiteral449 = il2cpp_codegen_string_literal_from_index(449);
		_stringLiteral450 = il2cpp_codegen_string_literal_from_index(450);
		_stringLiteral451 = il2cpp_codegen_string_literal_from_index(451);
		_stringLiteral452 = il2cpp_codegen_string_literal_from_index(452);
		_stringLiteral453 = il2cpp_codegen_string_literal_from_index(453);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int16_t V_2 = 0;
	int16_t V_3 = 0;
	int16_t V_4 = 0;
	int16_t V_5 = 0;
	int16_t V_6 = 0;
	uint32_t V_7 = 0;
	int64_t V_8 = 0;
	int64_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	ByteU5BU5D_t129* V_12 = {0};
	ByteU5BU5D_t129* V_13 = {0};
	ZipExtraData_t599 * V_14 = {0};
	String_t* V_15 = {0};
	int32_t V_16 = 0;
	int64_t V_17 = 0;
	Stream_t506 * V_18 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		Stream_t506 * L_1 = L_0;
		V_18 = L_1;
		Monitor_Enter_m3798(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_2 = ___tests;
			V_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			int32_t L_3 = ___tests;
			V_1 = ((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			Stream_t506 * L_4 = (__this->___baseStream__5);
			int64_t L_5 = (__this->___offsetOfFirstEntry_7);
			ZipEntry_t591 * L_6 = ___entry;
			NullCheck(L_6);
			int64_t L_7 = ZipEntry_get_Offset_m3260(L_6, /*hidden argument*/NULL);
			NullCheck(L_4);
			VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_4, ((int64_t)((int64_t)L_5+(int64_t)L_7)), 0);
			uint32_t L_8 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
			if ((((int32_t)L_8) == ((int32_t)((int32_t)67324752))))
			{
				goto IL_006b;
			}
		}

IL_0049:
		{
			int64_t L_9 = (__this->___offsetOfFirstEntry_7);
			ZipEntry_t591 * L_10 = ___entry;
			NullCheck(L_10);
			int64_t L_11 = ZipEntry_get_Offset_m3260(L_10, /*hidden argument*/NULL);
			int64_t L_12 = ((int64_t)((int64_t)L_9+(int64_t)L_11));
			Object_t * L_13 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_12);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_14 = String_Format_m770(NULL /*static, unused*/, _stringLiteral427, L_13, /*hidden argument*/NULL);
			ZipException_t594 * L_15 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_15, L_14, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_15);
		}

IL_006b:
		{
			uint16_t L_16 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_2 = (((int16_t)((int16_t)L_16)));
			uint16_t L_17 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_3 = (((int16_t)((int16_t)L_17)));
			uint16_t L_18 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_4 = (((int16_t)((int16_t)L_18)));
			uint16_t L_19 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_5 = (((int16_t)((int16_t)L_19)));
			uint16_t L_20 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_6 = (((int16_t)((int16_t)L_20)));
			uint32_t L_21 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
			V_7 = L_21;
			uint32_t L_22 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
			V_8 = (((int64_t)((uint64_t)L_22)));
			uint32_t L_23 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
			V_9 = (((int64_t)((uint64_t)L_23)));
			uint16_t L_24 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_10 = L_24;
			uint16_t L_25 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
			V_11 = L_25;
			int32_t L_26 = V_10;
			V_12 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_26));
			Stream_t506 * L_27 = (__this->___baseStream__5);
			ByteU5BU5D_t129* L_28 = V_12;
			StreamUtils_ReadFully_m2705(NULL /*static, unused*/, L_27, L_28, /*hidden argument*/NULL);
			int32_t L_29 = V_11;
			V_13 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_29));
			Stream_t506 * L_30 = (__this->___baseStream__5);
			ByteU5BU5D_t129* L_31 = V_13;
			StreamUtils_ReadFully_m2705(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
			ByteU5BU5D_t129* L_32 = V_13;
			ZipExtraData_t599 * L_33 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
			ZipExtraData__ctor_m3355(L_33, L_32, /*hidden argument*/NULL);
			V_14 = L_33;
			ZipExtraData_t599 * L_34 = V_14;
			NullCheck(L_34);
			bool L_35 = ZipExtraData_Find_m3365(L_34, 1, /*hidden argument*/NULL);
			if (!L_35)
			{
				goto IL_018d;
			}
		}

IL_0102:
		{
			int16_t L_36 = V_2;
			if ((((int32_t)L_36) >= ((int32_t)((int32_t)45))))
			{
				goto IL_0129;
			}
		}

IL_0107:
		{
			int16_t L_37 = V_2;
			int32_t L_38 = ((int32_t)((int32_t)L_37/(int32_t)((int32_t)10)));
			Object_t * L_39 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_38);
			int16_t L_40 = V_2;
			int32_t L_41 = ((int32_t)((int32_t)L_40%(int32_t)((int32_t)10)));
			Object_t * L_42 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_41);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_43 = String_Format_m2432(NULL /*static, unused*/, _stringLiteral428, L_39, L_42, /*hidden argument*/NULL);
			ZipException_t594 * L_44 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_44, L_43, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
		}

IL_0129:
		{
			int64_t L_45 = V_9;
			if ((((int32_t)(((int32_t)((uint32_t)L_45)))) == ((int32_t)(-1))))
			{
				goto IL_0140;
			}
		}

IL_012f:
		{
			int64_t L_46 = V_8;
			if ((((int32_t)(((int32_t)((uint32_t)L_46)))) == ((int32_t)(-1))))
			{
				goto IL_0140;
			}
		}

IL_0135:
		{
			ZipException_t594 * L_47 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_47, _stringLiteral429, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_47);
		}

IL_0140:
		{
			ZipExtraData_t599 * L_48 = V_14;
			NullCheck(L_48);
			int64_t L_49 = ZipExtraData_ReadLong_m3376(L_48, /*hidden argument*/NULL);
			V_9 = L_49;
			ZipExtraData_t599 * L_50 = V_14;
			NullCheck(L_50);
			int64_t L_51 = ZipExtraData_ReadLong_m3376(L_50, /*hidden argument*/NULL);
			V_8 = L_51;
			int16_t L_52 = V_3;
			if (!((int32_t)((int32_t)L_52&(int32_t)8)))
			{
				goto IL_01a9;
			}
		}

IL_0157:
		{
			int64_t L_53 = V_9;
			if ((((int64_t)L_53) == ((int64_t)(((int64_t)((int64_t)(-1)))))))
			{
				goto IL_0172;
			}
		}

IL_015d:
		{
			int64_t L_54 = V_9;
			ZipEntry_t591 * L_55 = ___entry;
			NullCheck(L_55);
			int64_t L_56 = ZipEntry_get_Size_m3280(L_55, /*hidden argument*/NULL);
			if ((((int64_t)L_54) == ((int64_t)L_56)))
			{
				goto IL_0172;
			}
		}

IL_0167:
		{
			ZipException_t594 * L_57 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_57, _stringLiteral430, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_57);
		}

IL_0172:
		{
			int64_t L_58 = V_8;
			if ((((int64_t)L_58) == ((int64_t)(((int64_t)((int64_t)(-1)))))))
			{
				goto IL_01a9;
			}
		}

IL_0178:
		{
			int64_t L_59 = V_8;
			ZipEntry_t591 * L_60 = ___entry;
			NullCheck(L_60);
			int64_t L_61 = ZipEntry_get_CompressedSize_m3282(L_60, /*hidden argument*/NULL);
			if ((((int64_t)L_59) == ((int64_t)L_61)))
			{
				goto IL_01a9;
			}
		}

IL_0182:
		{
			ZipException_t594 * L_62 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_62, _stringLiteral431, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_62);
		}

IL_018d:
		{
			int16_t L_63 = V_2;
			if ((((int32_t)L_63) < ((int32_t)((int32_t)45))))
			{
				goto IL_01a9;
			}
		}

IL_0192:
		{
			int64_t L_64 = V_9;
			if ((((int32_t)(((int32_t)((uint32_t)L_64)))) == ((int32_t)(-1))))
			{
				goto IL_019e;
			}
		}

IL_0198:
		{
			int64_t L_65 = V_8;
			if ((!(((uint32_t)(((int32_t)((uint32_t)L_65)))) == ((uint32_t)(-1)))))
			{
				goto IL_01a9;
			}
		}

IL_019e:
		{
			ZipException_t594 * L_66 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_66, _stringLiteral432, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_66);
		}

IL_01a9:
		{
			bool L_67 = V_1;
			if (!L_67)
			{
				goto IL_0200;
			}
		}

IL_01ac:
		{
			ZipEntry_t591 * L_68 = ___entry;
			NullCheck(L_68);
			bool L_69 = ZipEntry_get_IsFile_m3294(L_68, /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_0200;
			}
		}

IL_01b4:
		{
			ZipEntry_t591 * L_70 = ___entry;
			NullCheck(L_70);
			bool L_71 = ZipEntry_IsCompressionMethodSupported_m3295(L_70, /*hidden argument*/NULL);
			if (L_71)
			{
				goto IL_01c7;
			}
		}

IL_01bc:
		{
			ZipException_t594 * L_72 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_72, _stringLiteral398, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_72);
		}

IL_01c7:
		{
			int16_t L_73 = V_2;
			if ((((int32_t)L_73) > ((int32_t)((int32_t)45))))
			{
				goto IL_01d6;
			}
		}

IL_01cc:
		{
			int16_t L_74 = V_2;
			if ((((int32_t)L_74) <= ((int32_t)((int32_t)20))))
			{
				goto IL_01ec;
			}
		}

IL_01d1:
		{
			int16_t L_75 = V_2;
			if ((((int32_t)L_75) >= ((int32_t)((int32_t)45))))
			{
				goto IL_01ec;
			}
		}

IL_01d6:
		{
			int16_t L_76 = V_2;
			int16_t L_77 = L_76;
			Object_t * L_78 = Box(Int16_t673_il2cpp_TypeInfo_var, &L_77);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_79 = String_Format_m770(NULL /*static, unused*/, _stringLiteral433, L_78, /*hidden argument*/NULL);
			ZipException_t594 * L_80 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_80, L_79, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_80);
		}

IL_01ec:
		{
			int16_t L_81 = V_3;
			if (!((int32_t)((int32_t)L_81&(int32_t)((int32_t)12384))))
			{
				goto IL_0200;
			}
		}

IL_01f5:
		{
			ZipException_t594 * L_82 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_82, _stringLiteral434, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_82);
		}

IL_0200:
		{
			bool L_83 = V_0;
			if (!L_83)
			{
				goto IL_0429;
			}
		}

IL_0206:
		{
			int16_t L_84 = V_2;
			if ((((int32_t)L_84) > ((int32_t)((int32_t)63))))
			{
				goto IL_0267;
			}
		}

IL_020b:
		{
			int16_t L_85 = V_2;
			if ((((int32_t)L_85) == ((int32_t)((int32_t)10))))
			{
				goto IL_0267;
			}
		}

IL_0210:
		{
			int16_t L_86 = V_2;
			if ((((int32_t)L_86) == ((int32_t)((int32_t)11))))
			{
				goto IL_0267;
			}
		}

IL_0215:
		{
			int16_t L_87 = V_2;
			if ((((int32_t)L_87) == ((int32_t)((int32_t)20))))
			{
				goto IL_0267;
			}
		}

IL_021a:
		{
			int16_t L_88 = V_2;
			if ((((int32_t)L_88) == ((int32_t)((int32_t)21))))
			{
				goto IL_0267;
			}
		}

IL_021f:
		{
			int16_t L_89 = V_2;
			if ((((int32_t)L_89) == ((int32_t)((int32_t)25))))
			{
				goto IL_0267;
			}
		}

IL_0224:
		{
			int16_t L_90 = V_2;
			if ((((int32_t)L_90) == ((int32_t)((int32_t)27))))
			{
				goto IL_0267;
			}
		}

IL_0229:
		{
			int16_t L_91 = V_2;
			if ((((int32_t)L_91) == ((int32_t)((int32_t)45))))
			{
				goto IL_0267;
			}
		}

IL_022e:
		{
			int16_t L_92 = V_2;
			if ((((int32_t)L_92) == ((int32_t)((int32_t)46))))
			{
				goto IL_0267;
			}
		}

IL_0233:
		{
			int16_t L_93 = V_2;
			if ((((int32_t)L_93) == ((int32_t)((int32_t)50))))
			{
				goto IL_0267;
			}
		}

IL_0238:
		{
			int16_t L_94 = V_2;
			if ((((int32_t)L_94) == ((int32_t)((int32_t)51))))
			{
				goto IL_0267;
			}
		}

IL_023d:
		{
			int16_t L_95 = V_2;
			if ((((int32_t)L_95) == ((int32_t)((int32_t)52))))
			{
				goto IL_0267;
			}
		}

IL_0242:
		{
			int16_t L_96 = V_2;
			if ((((int32_t)L_96) == ((int32_t)((int32_t)61))))
			{
				goto IL_0267;
			}
		}

IL_0247:
		{
			int16_t L_97 = V_2;
			if ((((int32_t)L_97) == ((int32_t)((int32_t)62))))
			{
				goto IL_0267;
			}
		}

IL_024c:
		{
			int16_t L_98 = V_2;
			if ((((int32_t)L_98) == ((int32_t)((int32_t)63))))
			{
				goto IL_0267;
			}
		}

IL_0251:
		{
			int16_t L_99 = V_2;
			int16_t L_100 = L_99;
			Object_t * L_101 = Box(Int16_t673_il2cpp_TypeInfo_var, &L_100);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_102 = String_Format_m770(NULL /*static, unused*/, _stringLiteral435, L_101, /*hidden argument*/NULL);
			ZipException_t594 * L_103 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_103, L_102, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_103);
		}

IL_0267:
		{
			int16_t L_104 = V_3;
			if (!((int32_t)((int32_t)L_104&(int32_t)((int32_t)49168))))
			{
				goto IL_027b;
			}
		}

IL_0270:
		{
			ZipException_t594 * L_105 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_105, _stringLiteral436, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_105);
		}

IL_027b:
		{
			int16_t L_106 = V_3;
			if (!((int32_t)((int32_t)L_106&(int32_t)1)))
			{
				goto IL_029b;
			}
		}

IL_0280:
		{
			int16_t L_107 = V_2;
			if ((((int32_t)L_107) >= ((int32_t)((int32_t)20))))
			{
				goto IL_029b;
			}
		}

IL_0285:
		{
			int16_t L_108 = V_2;
			int16_t L_109 = L_108;
			Object_t * L_110 = Box(Int16_t673_il2cpp_TypeInfo_var, &L_109);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_111 = String_Format_m770(NULL /*static, unused*/, _stringLiteral437, L_110, /*hidden argument*/NULL);
			ZipException_t594 * L_112 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_112, L_111, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_112);
		}

IL_029b:
		{
			int16_t L_113 = V_3;
			if (!((int32_t)((int32_t)L_113&(int32_t)((int32_t)64))))
			{
				goto IL_02cc;
			}
		}

IL_02a1:
		{
			int16_t L_114 = V_3;
			if (((int32_t)((int32_t)L_114&(int32_t)1)))
			{
				goto IL_02b1;
			}
		}

IL_02a6:
		{
			ZipException_t594 * L_115 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_115, _stringLiteral438, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_115);
		}

IL_02b1:
		{
			int16_t L_116 = V_2;
			if ((((int32_t)L_116) >= ((int32_t)((int32_t)50))))
			{
				goto IL_02cc;
			}
		}

IL_02b6:
		{
			int16_t L_117 = V_2;
			int16_t L_118 = L_117;
			Object_t * L_119 = Box(Int16_t673_il2cpp_TypeInfo_var, &L_118);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_120 = String_Format_m770(NULL /*static, unused*/, _stringLiteral437, L_119, /*hidden argument*/NULL);
			ZipException_t594 * L_121 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_121, L_120, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_121);
		}

IL_02cc:
		{
			int16_t L_122 = V_3;
			if (!((int32_t)((int32_t)L_122&(int32_t)((int32_t)32))))
			{
				goto IL_02ed;
			}
		}

IL_02d2:
		{
			int16_t L_123 = V_2;
			if ((((int32_t)L_123) >= ((int32_t)((int32_t)27))))
			{
				goto IL_02ed;
			}
		}

IL_02d7:
		{
			int16_t L_124 = V_2;
			int16_t L_125 = L_124;
			Object_t * L_126 = Box(Int16_t673_il2cpp_TypeInfo_var, &L_125);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_127 = String_Format_m770(NULL /*static, unused*/, _stringLiteral439, L_126, /*hidden argument*/NULL);
			ZipException_t594 * L_128 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_128, L_127, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_128);
		}

IL_02ed:
		{
			int16_t L_129 = V_3;
			ZipEntry_t591 * L_130 = ___entry;
			NullCheck(L_130);
			int32_t L_131 = ZipEntry_get_Flags_m3256(L_130, /*hidden argument*/NULL);
			if ((((int32_t)L_129) == ((int32_t)L_131)))
			{
				goto IL_0301;
			}
		}

IL_02f6:
		{
			ZipException_t594 * L_132 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_132, _stringLiteral440, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_132);
		}

IL_0301:
		{
			ZipEntry_t591 * L_133 = ___entry;
			NullCheck(L_133);
			int32_t L_134 = ZipEntry_get_CompressionMethod_m3286(L_133, /*hidden argument*/NULL);
			int16_t L_135 = V_4;
			if ((((int32_t)L_134) == ((int32_t)L_135)))
			{
				goto IL_0316;
			}
		}

IL_030b:
		{
			ZipException_t594 * L_136 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_136, _stringLiteral441, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_136);
		}

IL_0316:
		{
			ZipEntry_t591 * L_137 = ___entry;
			NullCheck(L_137);
			int32_t L_138 = ZipEntry_get_Version_m3269(L_137, /*hidden argument*/NULL);
			int16_t L_139 = V_2;
			if ((((int32_t)L_138) == ((int32_t)L_139)))
			{
				goto IL_032a;
			}
		}

IL_031f:
		{
			ZipException_t594 * L_140 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_140, _stringLiteral442, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_140);
		}

IL_032a:
		{
			int16_t L_141 = V_3;
			if (!((int32_t)((int32_t)L_141&(int32_t)((int32_t)64))))
			{
				goto IL_0340;
			}
		}

IL_0330:
		{
			int16_t L_142 = V_2;
			if ((((int32_t)L_142) >= ((int32_t)((int32_t)62))))
			{
				goto IL_0340;
			}
		}

IL_0335:
		{
			ZipException_t594 * L_143 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_143, _stringLiteral443, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_143);
		}

IL_0340:
		{
			int16_t L_144 = V_3;
			if (!((int32_t)((int32_t)L_144&(int32_t)((int32_t)8192))))
			{
				goto IL_035c;
			}
		}

IL_0349:
		{
			int16_t L_145 = V_5;
			if (L_145)
			{
				goto IL_0351;
			}
		}

IL_034d:
		{
			int16_t L_146 = V_6;
			if (!L_146)
			{
				goto IL_035c;
			}
		}

IL_0351:
		{
			ZipException_t594 * L_147 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_147, _stringLiteral444, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_147);
		}

IL_035c:
		{
			int16_t L_148 = V_3;
			if (((int32_t)((int32_t)L_148&(int32_t)8)))
			{
				goto IL_0377;
			}
		}

IL_0361:
		{
			uint32_t L_149 = V_7;
			ZipEntry_t591 * L_150 = ___entry;
			NullCheck(L_150);
			int64_t L_151 = ZipEntry_get_Crc_m3284(L_150, /*hidden argument*/NULL);
			if ((((int32_t)L_149) == ((int32_t)(((int32_t)((uint32_t)L_151))))))
			{
				goto IL_0377;
			}
		}

IL_036c:
		{
			ZipException_t594 * L_152 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_152, _stringLiteral445, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_152);
		}

IL_0377:
		{
			int64_t L_153 = V_9;
			if ((!(((uint64_t)L_153) == ((uint64_t)(((int64_t)((int64_t)0)))))))
			{
				goto IL_0392;
			}
		}

IL_037d:
		{
			int64_t L_154 = V_8;
			if ((!(((uint64_t)L_154) == ((uint64_t)(((int64_t)((int64_t)0)))))))
			{
				goto IL_0392;
			}
		}

IL_0383:
		{
			uint32_t L_155 = V_7;
			if (!L_155)
			{
				goto IL_0392;
			}
		}

IL_0387:
		{
			ZipException_t594 * L_156 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_156, _stringLiteral446, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_156);
		}

IL_0392:
		{
			ZipEntry_t591 * L_157 = ___entry;
			NullCheck(L_157);
			String_t* L_158 = ZipEntry_get_Name_m3279(L_157, /*hidden argument*/NULL);
			NullCheck(L_158);
			int32_t L_159 = String_get_Length_m564(L_158, /*hidden argument*/NULL);
			int32_t L_160 = V_10;
			if ((((int32_t)L_159) <= ((int32_t)L_160)))
			{
				goto IL_03ac;
			}
		}

IL_03a1:
		{
			ZipException_t594 * L_161 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_161, _stringLiteral447, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_161);
		}

IL_03ac:
		{
			int16_t L_162 = V_3;
			ByteU5BU5D_t129* L_163 = V_12;
			IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
			String_t* L_164 = ZipConstants_ConvertToStringExt_m3240(NULL /*static, unused*/, L_162, L_163, /*hidden argument*/NULL);
			V_15 = L_164;
			String_t* L_165 = V_15;
			ZipEntry_t591 * L_166 = ___entry;
			NullCheck(L_166);
			String_t* L_167 = ZipEntry_get_Name_m3279(L_166, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_168 = String_op_Inequality_m2285(NULL /*static, unused*/, L_165, L_167, /*hidden argument*/NULL);
			if (!L_168)
			{
				goto IL_03d0;
			}
		}

IL_03c5:
		{
			ZipException_t594 * L_169 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_169, _stringLiteral448, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_169);
		}

IL_03d0:
		{
			ZipEntry_t591 * L_170 = ___entry;
			NullCheck(L_170);
			bool L_171 = ZipEntry_get_IsDirectory_m3293(L_170, /*hidden argument*/NULL);
			if (!L_171)
			{
				goto IL_0414;
			}
		}

IL_03d8:
		{
			int64_t L_172 = V_9;
			if ((((int64_t)L_172) <= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_03e9;
			}
		}

IL_03de:
		{
			ZipException_t594 * L_173 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_173, _stringLiteral449, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_173);
		}

IL_03e9:
		{
			ZipEntry_t591 * L_174 = ___entry;
			NullCheck(L_174);
			bool L_175 = ZipEntry_get_IsCrypted_m3250(L_174, /*hidden argument*/NULL);
			if (!L_175)
			{
				goto IL_0403;
			}
		}

IL_03f1:
		{
			int64_t L_176 = V_8;
			if ((((int64_t)L_176) <= ((int64_t)(((int64_t)((int64_t)((int32_t)14)))))))
			{
				goto IL_0414;
			}
		}

IL_03f8:
		{
			ZipException_t594 * L_177 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_177, _stringLiteral450, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_177);
		}

IL_0403:
		{
			int64_t L_178 = V_8;
			if ((((int64_t)L_178) <= ((int64_t)(((int64_t)((int64_t)2))))))
			{
				goto IL_0414;
			}
		}

IL_0409:
		{
			ZipException_t594 * L_179 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_179, _stringLiteral450, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_179);
		}

IL_0414:
		{
			String_t* L_180 = V_15;
			IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
			bool L_181 = ZipNameTransform_IsValidName_m3663(NULL /*static, unused*/, L_180, 1, /*hidden argument*/NULL);
			if (L_181)
			{
				goto IL_0429;
			}
		}

IL_041e:
		{
			ZipException_t594 * L_182 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_182, _stringLiteral451, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_182);
		}

IL_0429:
		{
			int16_t L_183 = V_3;
			if (!((int32_t)((int32_t)L_183&(int32_t)8)))
			{
				goto IL_043a;
			}
		}

IL_042e:
		{
			int64_t L_184 = V_9;
			if ((((int64_t)L_184) > ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_043a;
			}
		}

IL_0434:
		{
			int64_t L_185 = V_8;
			if ((((int64_t)L_185) <= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_0492;
			}
		}

IL_043a:
		{
			int64_t L_186 = V_9;
			ZipEntry_t591 * L_187 = ___entry;
			NullCheck(L_187);
			int64_t L_188 = ZipEntry_get_Size_m3280(L_187, /*hidden argument*/NULL);
			if ((((int64_t)L_186) == ((int64_t)L_188)))
			{
				goto IL_0466;
			}
		}

IL_0444:
		{
			ZipEntry_t591 * L_189 = ___entry;
			NullCheck(L_189);
			int64_t L_190 = ZipEntry_get_Size_m3280(L_189, /*hidden argument*/NULL);
			int64_t L_191 = L_190;
			Object_t * L_192 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_191);
			int64_t L_193 = V_9;
			int64_t L_194 = L_193;
			Object_t * L_195 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_194);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_196 = String_Format_m2432(NULL /*static, unused*/, _stringLiteral452, L_192, L_195, /*hidden argument*/NULL);
			ZipException_t594 * L_197 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_197, L_196, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_197);
		}

IL_0466:
		{
			int64_t L_198 = V_8;
			ZipEntry_t591 * L_199 = ___entry;
			NullCheck(L_199);
			int64_t L_200 = ZipEntry_get_CompressedSize_m3282(L_199, /*hidden argument*/NULL);
			if ((((int64_t)L_198) == ((int64_t)L_200)))
			{
				goto IL_0492;
			}
		}

IL_0470:
		{
			ZipEntry_t591 * L_201 = ___entry;
			NullCheck(L_201);
			int64_t L_202 = ZipEntry_get_CompressedSize_m3282(L_201, /*hidden argument*/NULL);
			int64_t L_203 = L_202;
			Object_t * L_204 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_203);
			int64_t L_205 = V_8;
			int64_t L_206 = L_205;
			Object_t * L_207 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_206);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_208 = String_Format_m2432(NULL /*static, unused*/, _stringLiteral453, L_204, L_207, /*hidden argument*/NULL);
			ZipException_t594 * L_209 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_209, L_208, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_209);
		}

IL_0492:
		{
			int32_t L_210 = V_10;
			int32_t L_211 = V_11;
			V_16 = ((int32_t)((int32_t)L_210+(int32_t)L_211));
			int64_t L_212 = (__this->___offsetOfFirstEntry_7);
			ZipEntry_t591 * L_213 = ___entry;
			NullCheck(L_213);
			int64_t L_214 = ZipEntry_get_Offset_m3260(L_213, /*hidden argument*/NULL);
			int32_t L_215 = V_16;
			V_17 = ((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_212+(int64_t)L_214))+(int64_t)(((int64_t)((int64_t)((int32_t)30))))))+(int64_t)(((int64_t)((int64_t)L_215)))));
			IL2CPP_LEAVE(0x4BA, FINALLY_04b2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_04b2;
	}

FINALLY_04b2:
	{ // begin finally (depth: 1)
		Stream_t506 * L_216 = V_18;
		Monitor_Exit_m3799(NULL /*static, unused*/, L_216, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(1202)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1202)
	{
		IL2CPP_JUMP_TBL(0x4BA, IL_04ba)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_04ba:
	{
		int64_t L_217 = V_17;
		return L_217;
	}
}
// ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.ZipFile::get_NameTransform()
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern "C" Object_t * ZipFile_get_NameTransform_m3499 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___updateEntryFactory__22);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(4 /* ICSharpCode.SharpZipLib.Core.INameTransform ICSharpCode.SharpZipLib.Zip.IEntryFactory::get_NameTransform() */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_NameTransform(ICSharpCode.SharpZipLib.Core.INameTransform)
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern "C" void ZipFile_set_NameTransform_m3500 (ZipFile_t580 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___updateEntryFactory__22);
		Object_t * L_1 = ___value;
		NullCheck(L_0);
		InterfaceActionInvoker1< Object_t * >::Invoke(5 /* System.Void ICSharpCode.SharpZipLib.Zip.IEntryFactory::set_NameTransform(ICSharpCode.SharpZipLib.Core.INameTransform) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_0, L_1);
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.IEntryFactory ICSharpCode.SharpZipLib.Zip.ZipFile::get_EntryFactory()
extern "C" Object_t * ZipFile_get_EntryFactory_m3501 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___updateEntryFactory__22);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_EntryFactory(ICSharpCode.SharpZipLib.Zip.IEntryFactory)
extern TypeInfo* ZipEntryFactory_t593_il2cpp_TypeInfo_var;
extern "C" void ZipFile_set_EntryFactory_m3502 (ZipFile_t580 * __this, Object_t * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryFactory_t593_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___value;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		ZipEntryFactory_t593 * L_1 = (ZipEntryFactory_t593 *)il2cpp_codegen_object_new (ZipEntryFactory_t593_il2cpp_TypeInfo_var);
		ZipEntryFactory__ctor_m3300(L_1, /*hidden argument*/NULL);
		__this->___updateEntryFactory__22 = L_1;
		return;
	}

IL_000f:
	{
		Object_t * L_2 = ___value;
		__this->___updateEntryFactory__22 = L_2;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::get_BufferSize()
extern "C" int32_t ZipFile_get_BufferSize_m3503 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___bufferSize__18);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_BufferSize(System.Int32)
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral260;
extern Il2CppCodeGenString* _stringLiteral454;
extern "C" void ZipFile_set_BufferSize_m3504 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		_stringLiteral260 = il2cpp_codegen_string_literal_from_index(260);
		_stringLiteral454 = il2cpp_codegen_string_literal_from_index(454);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___value;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)1024))))
		{
			goto IL_0018;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_1 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3697(L_1, _stringLiteral260, _stringLiteral454, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		int32_t L_2 = (__this->___bufferSize__18);
		int32_t L_3 = ___value;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = ___value;
		__this->___bufferSize__18 = L_4;
		__this->___copyBuffer__19 = (ByteU5BU5D_t129*)NULL;
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::get_IsUpdating()
extern "C" bool ZipFile_get_IsUpdating_m3505 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ArrayList_t530 * L_0 = (__this->___updates__12);
		return ((((int32_t)((((Object_t*)(ArrayList_t530 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipFile::get_UseZip64()
extern "C" int32_t ZipFile_get_UseZip64_m3506 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___useZip64__11);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
extern "C" void ZipFile_set_UseZip64_m3507 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___useZip64__11 = L_0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate(ICSharpCode.SharpZipLib.Zip.IArchiveStorage,ICSharpCode.SharpZipLib.Zip.IDynamicDataSource)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* Hashtable_t618_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t530_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral455;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral457;
extern "C" void ZipFile_BeginUpdate_m3508 (ZipFile_t580 * __this, Object_t * ___archiveStorage, Object_t * ___dataSource, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		Hashtable_t618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(454);
		ArrayList_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		_stringLiteral455 = il2cpp_codegen_string_literal_from_index(455);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral457 = il2cpp_codegen_string_literal_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	int32_t V_1 = 0;
	ZipEntryU5BU5D_t615* V_2 = {0};
	int32_t V_3 = 0;
	{
		Object_t * L_0 = ___archiveStorage;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral455, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		Object_t * L_2 = ___dataSource;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		bool L_4 = (__this->___isDisposed__2);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		ObjectDisposedException_t662 * L_5 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_5, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002f:
	{
		bool L_6 = ZipFile_get_IsEmbeddedArchive_m3484(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0042;
		}
	}
	{
		ZipException_t594 * L_7 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_7, _stringLiteral457, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0042:
	{
		Object_t * L_8 = ___archiveStorage;
		__this->___archiveStorage__15 = L_8;
		Object_t * L_9 = ___dataSource;
		__this->___updateDataSource__16 = L_9;
		Hashtable_t618 * L_10 = (Hashtable_t618 *)il2cpp_codegen_object_new (Hashtable_t618_il2cpp_TypeInfo_var);
		Hashtable__ctor_m3804(L_10, /*hidden argument*/NULL);
		__this->___updateIndex__14 = L_10;
		ZipEntryU5BU5D_t615* L_11 = (__this->___entries__8);
		NullCheck(L_11);
		ArrayList_t530 * L_12 = (ArrayList_t530 *)il2cpp_codegen_object_new (ArrayList_t530_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3805(L_12, (((int32_t)((int32_t)(((Array_t *)L_11)->max_length)))), /*hidden argument*/NULL);
		__this->___updates__12 = L_12;
		ZipEntryU5BU5D_t615* L_13 = (__this->___entries__8);
		V_2 = L_13;
		V_3 = 0;
		goto IL_00aa;
	}

IL_0079:
	{
		ZipEntryU5BU5D_t615* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_14, L_15);
		int32_t L_16 = L_15;
		V_0 = (*(ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_14, L_16, sizeof(ZipEntry_t591 *)));
		ArrayList_t530 * L_17 = (__this->___updates__12);
		ZipEntry_t591 * L_18 = V_0;
		ZipUpdate_t611 * L_19 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3418(L_19, L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_20 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_17, L_19);
		V_1 = L_20;
		Hashtable_t618 * L_21 = (__this->___updateIndex__14);
		ZipEntry_t591 * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = ZipEntry_get_Name_m3279(L_22, /*hidden argument*/NULL);
		int32_t L_24 = V_1;
		int32_t L_25 = L_24;
		Object_t * L_26 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_25);
		NullCheck(L_21);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_21, L_23, L_26);
		int32_t L_27 = V_3;
		V_3 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00aa:
	{
		int32_t L_28 = V_3;
		ZipEntryU5BU5D_t615* L_29 = V_2;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_29)->max_length)))))))
		{
			goto IL_0079;
		}
	}
	{
		ArrayList_t530 * L_30 = (__this->___updates__12);
		NullCheck(L_30);
		int32_t L_31 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_30);
		__this->___updateCount__13 = (((int64_t)((int64_t)L_31)));
		__this->___contentsEdited__17 = 0;
		__this->___commentEdited__21 = 0;
		__this->___newComment__20 = (ZipString_t613 *)NULL;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate(ICSharpCode.SharpZipLib.Zip.IArchiveStorage)
extern TypeInfo* DynamicDiskDataSource_t622_il2cpp_TypeInfo_var;
extern "C" void ZipFile_BeginUpdate_m3509 (ZipFile_t580 * __this, Object_t * ___archiveStorage, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		DynamicDiskDataSource_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___archiveStorage;
		DynamicDiskDataSource_t622 * L_1 = (DynamicDiskDataSource_t622 *)il2cpp_codegen_object_new (DynamicDiskDataSource_t622_il2cpp_TypeInfo_var);
		DynamicDiskDataSource__ctor_m3570(L_1, /*hidden argument*/NULL);
		ZipFile_BeginUpdate_m3508(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::BeginUpdate()
extern TypeInfo* MemoryArchiveStorage_t625_il2cpp_TypeInfo_var;
extern TypeInfo* DynamicDiskDataSource_t622_il2cpp_TypeInfo_var;
extern TypeInfo* DiskArchiveStorage_t624_il2cpp_TypeInfo_var;
extern "C" void ZipFile_BeginUpdate_m3510 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryArchiveStorage_t625_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(456);
		DynamicDiskDataSource_t622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(455);
		DiskArchiveStorage_t624_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(457);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ZipFile_get_Name_m3487(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MemoryArchiveStorage_t625 * L_1 = (MemoryArchiveStorage_t625 *)il2cpp_codegen_object_new (MemoryArchiveStorage_t625_il2cpp_TypeInfo_var);
		MemoryArchiveStorage__ctor_m3582(L_1, /*hidden argument*/NULL);
		DynamicDiskDataSource_t622 * L_2 = (DynamicDiskDataSource_t622 *)il2cpp_codegen_object_new (DynamicDiskDataSource_t622_il2cpp_TypeInfo_var);
		DynamicDiskDataSource__ctor_m3570(L_2, /*hidden argument*/NULL);
		ZipFile_BeginUpdate_m3508(__this, L_1, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0019:
	{
		DiskArchiveStorage_t624 * L_3 = (DiskArchiveStorage_t624 *)il2cpp_codegen_object_new (DiskArchiveStorage_t624_il2cpp_TypeInfo_var);
		DiskArchiveStorage__ctor_m3575(L_3, __this, /*hidden argument*/NULL);
		DynamicDiskDataSource_t622 * L_4 = (DynamicDiskDataSource_t622 *)il2cpp_codegen_object_new (DynamicDiskDataSource_t622_il2cpp_TypeInfo_var);
		DynamicDiskDataSource__ctor_m3570(L_4, /*hidden argument*/NULL);
		ZipFile_BeginUpdate_m3508(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CommitUpdate()
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern "C" void ZipFile_CommitUpdate_m3511 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	ZipHelperStream_t628 * V_1 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ByteU5BU5D_t129* G_B11_0 = {0};
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			Hashtable_t618 * L_2 = (__this->___updateIndex__14);
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(26 /* System.Void System.Collections.Hashtable::Clear() */, L_2);
			__this->___updateIndex__14 = (Hashtable_t618 *)NULL;
			bool L_3 = (__this->___contentsEdited__17);
			if (!L_3)
			{
				goto IL_003b;
			}
		}

IL_0033:
		{
			ZipFile_RunUpdates_m3553(__this, /*hidden argument*/NULL);
			goto IL_009b;
		}

IL_003b:
		{
			bool L_4 = (__this->___commentEdited__21);
			if (!L_4)
			{
				goto IL_004b;
			}
		}

IL_0043:
		{
			ZipFile_UpdateCommentOnly_m3552(__this, /*hidden argument*/NULL);
			goto IL_009b;
		}

IL_004b:
		{
			ZipEntryU5BU5D_t615* L_5 = (__this->___entries__8);
			NullCheck(L_5);
			if ((((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))))
			{
				goto IL_009b;
			}
		}

IL_0055:
		{
			ZipString_t613 * L_6 = (__this->___newComment__20);
			if (L_6)
			{
				goto IL_006a;
			}
		}

IL_005d:
		{
			String_t* L_7 = (__this->___comment__4);
			IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
			ByteU5BU5D_t129* L_8 = ZipConstants_ConvertToArray_m3241(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			G_B11_0 = L_8;
			goto IL_0075;
		}

IL_006a:
		{
			ZipString_t613 * L_9 = (__this->___newComment__20);
			NullCheck(L_9);
			ByteU5BU5D_t129* L_10 = ZipString_get_RawComment_m3432(L_9, /*hidden argument*/NULL);
			G_B11_0 = L_10;
		}

IL_0075:
		{
			V_0 = G_B11_0;
			Stream_t506 * L_11 = (__this->___baseStream__5);
			ZipHelperStream_t628 * L_12 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
			ZipHelperStream__ctor_m3603(L_12, L_11, /*hidden argument*/NULL);
			V_1 = L_12;
		}

IL_0082:
		try
		{ // begin try (depth: 2)
			ZipHelperStream_t628 * L_13 = V_1;
			ByteU5BU5D_t129* L_14 = V_0;
			NullCheck(L_13);
			ZipHelperStream_WriteEndOfCentralDirectory_m3622(L_13, (((int64_t)((int64_t)0))), (((int64_t)((int64_t)0))), (((int64_t)((int64_t)0))), L_14, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x9B, FINALLY_0091);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t159 *)e.ex;
			goto FINALLY_0091;
		}

FINALLY_0091:
		{ // begin finally (depth: 2)
			{
				ZipHelperStream_t628 * L_15 = V_1;
				if (!L_15)
				{
					goto IL_009a;
				}
			}

IL_0094:
			{
				ZipHelperStream_t628 * L_16 = V_1;
				NullCheck(L_16);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_16);
			}

IL_009a:
			{
				IL2CPP_END_FINALLY(145)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(145)
		{
			IL2CPP_JUMP_TBL(0x9B, IL_009b)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
		}

IL_009b:
		{
			IL2CPP_LEAVE(0xA4, FINALLY_009d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_009d;
	}

FINALLY_009d:
	{ // begin finally (depth: 1)
		ZipFile_PostUpdateCleanup_m3534(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(157)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(157)
	{
		IL2CPP_JUMP_TBL(0xA4, IL_00a4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_00a4:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AbortUpdate()
extern "C" void ZipFile_AbortUpdate_m3512 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ZipFile_PostUpdateCleanup_m3534(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::SetComment(System.String)
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ZipString_t613_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral458;
extern "C" void ZipFile_SetComment_m3513 (ZipFile_t580 * __this, String_t* ___comment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ZipString_t613_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(458);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral458 = il2cpp_codegen_string_literal_from_index(458);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___isDisposed__2);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		ObjectDisposedException_t662 * L_1 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_1, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___comment;
		ZipString_t613 * L_3 = (ZipString_t613 *)il2cpp_codegen_object_new (ZipString_t613_il2cpp_TypeInfo_var);
		ZipString__ctor_m3428(L_3, L_2, /*hidden argument*/NULL);
		__this->___newComment__20 = L_3;
		ZipString_t613 * L_4 = (__this->___newComment__20);
		NullCheck(L_4);
		int32_t L_5 = ZipString_get_RawLength_m3431(L_4, /*hidden argument*/NULL);
		if ((((int32_t)L_5) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0049;
		}
	}
	{
		__this->___newComment__20 = (ZipString_t613 *)NULL;
		ZipException_t594 * L_6 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_6, _stringLiteral458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0049:
	{
		__this->___commentEdited__21 = 1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddUpdate(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern "C" void ZipFile_AddUpdate_m3514 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		__this->___contentsEdited__17 = 1;
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_Entry_m3419(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = ZipEntry_get_Name_m3279(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ZipFile_FindExistingUpdate_m3544(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		ArrayList_t530 * L_5 = (__this->___updates__12);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		if (L_7)
		{
			goto IL_003a;
		}
	}
	{
		int64_t L_8 = (__this->___updateCount__13);
		__this->___updateCount__13 = ((int64_t)((int64_t)L_8+(int64_t)(((int64_t)((int64_t)1)))));
	}

IL_003a:
	{
		ArrayList_t530 * L_9 = (__this->___updates__12);
		int32_t L_10 = V_0;
		ZipUpdate_t611 * L_11 = ___update;
		NullCheck(L_9);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_9, L_10, L_11);
		return;
	}

IL_0048:
	{
		ArrayList_t530 * L_12 = (__this->___updates__12);
		ZipUpdate_t611 * L_13 = ___update;
		NullCheck(L_12);
		int32_t L_14 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_12, L_13);
		V_0 = L_14;
		int64_t L_15 = (__this->___updateCount__13);
		__this->___updateCount__13 = ((int64_t)((int64_t)L_15+(int64_t)(((int64_t)((int64_t)1)))));
		Hashtable_t618 * L_16 = (__this->___updateIndex__14);
		ZipUpdate_t611 * L_17 = ___update;
		NullCheck(L_17);
		ZipEntry_t591 * L_18 = ZipUpdate_get_Entry_m3419(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = ZipEntry_get_Name_m3279(L_18, /*hidden argument*/NULL);
		int32_t L_20 = V_0;
		int32_t L_21 = L_20;
		Object_t * L_22 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_16);
		VirtActionInvoker2< Object_t *, Object_t * >::Invoke(25 /* System.Void System.Collections.Hashtable::Add(System.Object,System.Object) */, L_16, L_19, L_22);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod,System.Boolean)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectDisposedException_t662_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral421;
extern Il2CppCodeGenString* _stringLiteral459;
extern "C" void ZipFile_Add_m3515 (ZipFile_t580 * __this, String_t* ___fileName, int32_t ___compressionMethod, bool ___useUnicodeText, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ObjectDisposedException_t662_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(398);
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral421 = il2cpp_codegen_string_literal_from_index(421);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		bool L_2 = (__this->___isDisposed__2);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ObjectDisposedException_t662 * L_3 = (ObjectDisposedException_t662 *)il2cpp_codegen_object_new (ObjectDisposedException_t662_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m3722(L_3, _stringLiteral421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0021:
	{
		int32_t L_4 = ___compressionMethod;
		bool L_5 = ZipEntry_IsCompressionMethodSupported_m3298(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_6 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3694(L_6, _stringLiteral459, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0034:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		__this->___contentsEdited__17 = 1;
		Object_t * L_7 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_8 = ___fileName;
		NullCheck(L_7);
		ZipEntry_t591 * L_9 = (ZipEntry_t591 *)InterfaceFuncInvoker1< ZipEntry_t591 *, String_t* >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_7, L_8);
		V_0 = L_9;
		ZipEntry_t591 * L_10 = V_0;
		bool L_11 = ___useUnicodeText;
		NullCheck(L_10);
		ZipEntry_set_IsUnicodeText_m3253(L_10, L_11, /*hidden argument*/NULL);
		ZipEntry_t591 * L_12 = V_0;
		int32_t L_13 = ___compressionMethod;
		NullCheck(L_12);
		ZipEntry_set_CompressionMethod_m3287(L_12, L_13, /*hidden argument*/NULL);
		String_t* L_14 = ___fileName;
		ZipEntry_t591 * L_15 = V_0;
		ZipUpdate_t611 * L_16 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3411(L_16, L_14, L_15, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral459;
extern "C" void ZipFile_Add_m3516 (ZipFile_t580 * __this, String_t* ___fileName, int32_t ___compressionMethod, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral459 = il2cpp_codegen_string_literal_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___compressionMethod;
		bool L_3 = ZipEntry_IsCompressionMethodSupported_m3298(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_4 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3694(L_4, _stringLiteral459, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_4);
	}

IL_0021:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		__this->___contentsEdited__17 = 1;
		Object_t * L_5 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___fileName;
		NullCheck(L_5);
		ZipEntry_t591 * L_7 = (ZipEntry_t591 *)InterfaceFuncInvoker1< ZipEntry_t591 *, String_t* >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		ZipEntry_t591 * L_8 = V_0;
		int32_t L_9 = ___compressionMethod;
		NullCheck(L_8);
		ZipEntry_set_CompressionMethod_m3287(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_10 = ___fileName;
		ZipEntry_t591 * L_11 = V_0;
		ZipUpdate_t611 * L_12 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3411(L_12, L_10, L_11, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern "C" void ZipFile_Add_m3517 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___fileName;
		Object_t * L_3 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___fileName;
		NullCheck(L_3);
		ZipEntry_t591 * L_5 = (ZipEntry_t591 *)InterfaceFuncInvoker1< ZipEntry_t591 *, String_t* >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_3, L_4);
		ZipUpdate_t611 * L_6 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3411(L_6, L_2, L_5, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(System.String,System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" void ZipFile_Add_m3518 (ZipFile_t580 * __this, String_t* ___fileName, String_t* ___entryName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___entryName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral460, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		String_t* L_4 = ___fileName;
		Object_t * L_5 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___entryName;
		NullCheck(L_5);
		ZipEntry_t591 * L_7 = (ZipEntry_t591 *)InterfaceFuncInvoker1< ZipEntry_t591 *, String_t* >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_5, L_6);
		ZipUpdate_t611 * L_8 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3411(L_8, L_4, L_7, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" void ZipFile_Add_m3519 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ___dataSource;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___entryName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral460, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		Object_t * L_4 = ___dataSource;
		Object_t * L_5 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_6 = ___entryName;
		NullCheck(L_5);
		ZipEntry_t591 * L_7 = (ZipEntry_t591 *)InterfaceFuncInvoker2< ZipEntry_t591 *, String_t*, bool >::Invoke(1 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String,System.Boolean) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_5, L_6, 0);
		ZipUpdate_t611 * L_8 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3415(L_8, L_4, L_7, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" void ZipFile_Add_m3520 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, int32_t ___compressionMethod, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	{
		Object_t * L_0 = ___dataSource;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___entryName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral460, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		Object_t * L_4 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_5 = ___entryName;
		NullCheck(L_4);
		ZipEntry_t591 * L_6 = (ZipEntry_t591 *)InterfaceFuncInvoker2< ZipEntry_t591 *, String_t*, bool >::Invoke(1 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String,System.Boolean) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_4, L_5, 0);
		V_0 = L_6;
		ZipEntry_t591 * L_7 = V_0;
		int32_t L_8 = ___compressionMethod;
		NullCheck(L_7);
		ZipEntry_set_CompressionMethod_m3287(L_7, L_8, /*hidden argument*/NULL);
		Object_t * L_9 = ___dataSource;
		ZipEntry_t591 * L_10 = V_0;
		ZipUpdate_t611 * L_11 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3415(L_11, L_9, L_10, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.IStaticDataSource,System.String,ICSharpCode.SharpZipLib.Zip.CompressionMethod,System.Boolean)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral456;
extern Il2CppCodeGenString* _stringLiteral460;
extern "C" void ZipFile_Add_m3521 (ZipFile_t580 * __this, Object_t * ___dataSource, String_t* ___entryName, int32_t ___compressionMethod, bool ___useUnicodeText, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral456 = il2cpp_codegen_string_literal_from_index(456);
		_stringLiteral460 = il2cpp_codegen_string_literal_from_index(460);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	{
		Object_t * L_0 = ___dataSource;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		String_t* L_2 = ___entryName;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral460, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		Object_t * L_4 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_5 = ___entryName;
		NullCheck(L_4);
		ZipEntry_t591 * L_6 = (ZipEntry_t591 *)InterfaceFuncInvoker2< ZipEntry_t591 *, String_t*, bool >::Invoke(1 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeFileEntry(System.String,System.Boolean) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_4, L_5, 0);
		V_0 = L_6;
		ZipEntry_t591 * L_7 = V_0;
		bool L_8 = ___useUnicodeText;
		NullCheck(L_7);
		ZipEntry_set_IsUnicodeText_m3253(L_7, L_8, /*hidden argument*/NULL);
		ZipEntry_t591 * L_9 = V_0;
		int32_t L_10 = ___compressionMethod;
		NullCheck(L_9);
		ZipEntry_set_CompressionMethod_m3287(L_9, L_10, /*hidden argument*/NULL);
		Object_t * L_11 = ___dataSource;
		ZipEntry_t591 * L_12 = V_0;
		ZipUpdate_t611 * L_13 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3415(L_13, L_11, L_12, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Add(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral461;
extern "C" void ZipFile_Add_m3522 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral461 = il2cpp_codegen_string_literal_from_index(461);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipEntry_t591 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		ZipEntry_t591 * L_2 = ___entry;
		NullCheck(L_2);
		int64_t L_3 = ZipEntry_get_Size_m3280(L_2, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_3) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0028;
		}
	}
	{
		ZipEntry_t591 * L_4 = ___entry;
		NullCheck(L_4);
		int64_t L_5 = ZipEntry_get_CompressedSize_m3282(L_4, /*hidden argument*/NULL);
		if ((((int64_t)L_5) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0033;
		}
	}

IL_0028:
	{
		ZipException_t594 * L_6 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_6, _stringLiteral461, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0033:
	{
		ZipEntry_t591 * L_7 = ___entry;
		ZipUpdate_t611 * L_8 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3417(L_8, 2, L_7, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddDirectory(System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* IEntryFactory_t581_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral462;
extern "C" void ZipFile_AddDirectory_m3523 (ZipFile_t580 * __this, String_t* ___directoryName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		IEntryFactory_t581_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(420);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		_stringLiteral462 = il2cpp_codegen_string_literal_from_index(462);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	{
		String_t* L_0 = ___directoryName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral462, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		Object_t * L_2 = ZipFile_get_EntryFactory_m3501(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___directoryName;
		NullCheck(L_2);
		ZipEntry_t591 * L_4 = (ZipEntry_t591 *)InterfaceFuncInvoker1< ZipEntry_t591 *, String_t* >::Invoke(2 /* ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.IEntryFactory::MakeDirectoryEntry(System.String) */, IEntryFactory_t581_il2cpp_TypeInfo_var, L_2, L_3);
		V_0 = L_4;
		ZipEntry_t591 * L_5 = V_0;
		ZipUpdate_t611 * L_6 = (ZipUpdate_t611 *)il2cpp_codegen_object_new (ZipUpdate_t611_il2cpp_TypeInfo_var);
		ZipUpdate__ctor_m3417(L_6, 2, L_5, /*hidden argument*/NULL);
		ZipFile_AddUpdate_m3514(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipFile::Delete(System.String)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral419;
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" bool ZipFile_Delete_m3524 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral419 = il2cpp_codegen_string_literal_from_index(419);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___fileName;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral419, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		V_0 = 0;
		String_t* L_2 = ___fileName;
		int32_t L_3 = ZipFile_FindExistingUpdate_m3544(__this, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		ArrayList_t530 * L_5 = (__this->___updates__12);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_5, L_6);
		if (!L_7)
		{
			goto IL_0057;
		}
	}
	{
		V_0 = 1;
		__this->___contentsEdited__17 = 1;
		ArrayList_t530 * L_8 = (__this->___updates__12);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_8, L_9, NULL);
		int64_t L_10 = (__this->___updateCount__13);
		__this->___updateCount__13 = ((int64_t)((int64_t)L_10-(int64_t)(((int64_t)((int64_t)1)))));
		goto IL_0062;
	}

IL_0057:
	{
		ZipException_t594 * L_11 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_11, _stringLiteral463, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0062:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Delete(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral463;
extern "C" void ZipFile_Delete_m3525 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral463 = il2cpp_codegen_string_literal_from_index(463);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ZipEntry_t591 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ZipFile_CheckUpdating_m3554(__this, /*hidden argument*/NULL);
		ZipEntry_t591 * L_2 = ___entry;
		int32_t L_3 = ZipFile_FindExistingUpdate_m3543(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_0044;
		}
	}
	{
		__this->___contentsEdited__17 = 1;
		ArrayList_t530 * L_5 = (__this->___updates__12);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		VirtActionInvoker2< int32_t, Object_t * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_5, L_6, NULL);
		int64_t L_7 = (__this->___updateCount__13);
		__this->___updateCount__13 = ((int64_t)((int64_t)L_7-(int64_t)(((int64_t)((int64_t)1)))));
		return;
	}

IL_0044:
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral463, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEShort(System.Int32)
extern "C" void ZipFile_WriteLEShort_m3526 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		int32_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		Stream_t506 * L_2 = (__this->___baseStream__5);
		int32_t L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUshort(System.UInt16)
extern "C" void ZipFile_WriteLEUshort_m3527 (ZipFile_t580 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		uint16_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		Stream_t506 * L_2 = (__this->___baseStream__5);
		uint16_t L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)8))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEInt(System.Int32)
extern "C" void ZipFile_WriteLEInt_m3528 (ZipFile_t580 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		ZipFile_WriteLEShort_m3526(__this, ((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535))), /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		ZipFile_WriteLEShort_m3526(__this, ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUint(System.UInt32)
extern "C" void ZipFile_WriteLEUint_m3529 (ZipFile_t580 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		ZipFile_WriteLEUshort_m3527(__this, (((int32_t)((uint16_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))))), /*hidden argument*/NULL);
		uint32_t L_1 = ___value;
		ZipFile_WriteLEUshort_m3527(__this, (((int32_t)((uint16_t)((int32_t)((uint32_t)L_1>>((int32_t)16)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLeLong(System.Int64)
extern "C" void ZipFile_WriteLeLong_m3530 (ZipFile_t580 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))), /*hidden argument*/NULL);
		int64_t L_1 = ___value;
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_1>>(int32_t)((int32_t)32)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLEUlong(System.UInt64)
extern "C" void ZipFile_WriteLEUlong_m3531 (ZipFile_t580 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		ZipFile_WriteLEUint_m3529(__this, (((int32_t)((uint32_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))), /*hidden argument*/NULL);
		uint64_t L_1 = ___value;
		ZipFile_WriteLEUint_m3529(__this, (((int32_t)((uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteLocalEntryHeader(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral465;
extern "C" void ZipFile_WriteLocalEntryHeader_m3532 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral465 = il2cpp_codegen_string_literal_from_index(465);
		s_Il2CppMethodIntialized = true;
	}
	ZipEntry_t591 * V_0 = {0};
	ByteU5BU5D_t129* V_1 = {0};
	ZipExtraData_t599 * V_2 = {0};
	int32_t V_3 = {0};
	{
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_OutEntry_m3420(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ZipEntry_t591 * L_2 = V_0;
		Stream_t506 * L_3 = (__this->___baseStream__5);
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		NullCheck(L_2);
		ZipEntry_set_Offset_m3261(L_2, L_4, /*hidden argument*/NULL);
		ZipUpdate_t611 * L_5 = ___update;
		NullCheck(L_5);
		int32_t L_6 = ZipUpdate_get_Command_m3421(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00cd;
		}
	}
	{
		ZipEntry_t591 * L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = ZipEntry_get_CompressionMethod_m3286(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)8))))
		{
			goto IL_0053;
		}
	}
	{
		ZipEntry_t591 * L_9 = V_0;
		NullCheck(L_9);
		int64_t L_10 = ZipEntry_get_Size_m3280(L_9, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_10) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_006a;
		}
	}
	{
		ZipEntry_t591 * L_11 = V_0;
		ZipEntry_t591 * L_12 = V_0;
		NullCheck(L_12);
		int64_t L_13 = ZipEntry_get_Size_m3280(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		ZipEntry_set_CompressedSize_m3283(L_11, L_13, /*hidden argument*/NULL);
		ZipEntry_t591 * L_14 = V_0;
		NullCheck(L_14);
		ZipEntry_set_Crc_m3285(L_14, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_15 = V_0;
		NullCheck(L_15);
		ZipEntry_set_CompressionMethod_m3287(L_15, 0, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0053:
	{
		ZipEntry_t591 * L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17 = ZipEntry_get_CompressionMethod_m3286(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_006a;
		}
	}
	{
		ZipEntry_t591 * L_18 = V_0;
		ZipEntry_t591 * L_19 = L_18;
		NullCheck(L_19);
		int32_t L_20 = ZipEntry_get_Flags_m3256(L_19, /*hidden argument*/NULL);
		NullCheck(L_19);
		ZipEntry_set_Flags_m3257(L_19, ((int32_t)((int32_t)L_20&(int32_t)((int32_t)-9))), /*hidden argument*/NULL);
	}

IL_006a:
	{
		bool L_21 = ZipFile_get_HaveKeys_m3473(__this, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0093;
		}
	}
	{
		ZipEntry_t591 * L_22 = V_0;
		NullCheck(L_22);
		ZipEntry_set_IsCrypted_m3251(L_22, 1, /*hidden argument*/NULL);
		ZipEntry_t591 * L_23 = V_0;
		NullCheck(L_23);
		int64_t L_24 = ZipEntry_get_Crc_m3284(L_23, /*hidden argument*/NULL);
		if ((((int64_t)L_24) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_009a;
		}
	}
	{
		ZipEntry_t591 * L_25 = V_0;
		ZipEntry_t591 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = ZipEntry_get_Flags_m3256(L_26, /*hidden argument*/NULL);
		NullCheck(L_26);
		ZipEntry_set_Flags_m3257(L_26, ((int32_t)((int32_t)L_27|(int32_t)8)), /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_0093:
	{
		ZipEntry_t591 * L_28 = V_0;
		NullCheck(L_28);
		ZipEntry_set_IsCrypted_m3251(L_28, 0, /*hidden argument*/NULL);
	}

IL_009a:
	{
		int32_t L_29 = (__this->___useZip64__11);
		V_3 = L_29;
		int32_t L_30 = V_3;
		if (L_30 == 0)
		{
			goto IL_00cd;
		}
		if (L_30 == 1)
		{
			goto IL_00c7;
		}
		if (L_30 == 2)
		{
			goto IL_00b5;
		}
	}
	{
		goto IL_00cd;
	}

IL_00b5:
	{
		ZipEntry_t591 * L_31 = V_0;
		NullCheck(L_31);
		int64_t L_32 = ZipEntry_get_Size_m3280(L_31, /*hidden argument*/NULL);
		if ((((int64_t)L_32) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00cd;
		}
	}
	{
		ZipEntry_t591 * L_33 = V_0;
		NullCheck(L_33);
		ZipEntry_ForceZip64_m3271(L_33, /*hidden argument*/NULL);
		goto IL_00cd;
	}

IL_00c7:
	{
		ZipEntry_t591 * L_34 = V_0;
		NullCheck(L_34);
		ZipEntry_ForceZip64_m3271(L_34, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		ZipFile_WriteLEInt_m3528(__this, ((int32_t)67324752), /*hidden argument*/NULL);
		ZipEntry_t591 * L_35 = V_0;
		NullCheck(L_35);
		int32_t L_36 = ZipEntry_get_Version_m3269(L_35, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, L_36, /*hidden argument*/NULL);
		ZipEntry_t591 * L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38 = ZipEntry_get_Flags_m3256(L_37, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, L_38, /*hidden argument*/NULL);
		ZipEntry_t591 * L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = ZipEntry_get_CompressionMethod_m3286(L_39, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((uint8_t)L_40))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_41 = V_0;
		NullCheck(L_41);
		int64_t L_42 = ZipEntry_get_DosTime_m3275(L_41, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_42))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_43 = V_0;
		NullCheck(L_43);
		bool L_44 = ZipEntry_get_HasCrc_m3249(L_43, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_012c;
		}
	}
	{
		ZipUpdate_t611 * L_45 = ___update;
		Stream_t506 * L_46 = (__this->___baseStream__5);
		NullCheck(L_46);
		int64_t L_47 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_46);
		NullCheck(L_45);
		ZipUpdate_set_CrcPatchOffset_m3426(L_45, L_47, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, 0, /*hidden argument*/NULL);
		goto IL_0139;
	}

IL_012c:
	{
		ZipEntry_t591 * L_48 = V_0;
		NullCheck(L_48);
		int64_t L_49 = ZipEntry_get_Crc_m3284(L_48, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_49))), /*hidden argument*/NULL);
	}

IL_0139:
	{
		ZipEntry_t591 * L_50 = V_0;
		NullCheck(L_50);
		bool L_51 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_50, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_0151;
		}
	}
	{
		ZipFile_WriteLEInt_m3528(__this, (-1), /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (-1), /*hidden argument*/NULL);
		goto IL_0190;
	}

IL_0151:
	{
		ZipEntry_t591 * L_52 = V_0;
		NullCheck(L_52);
		int64_t L_53 = ZipEntry_get_CompressedSize_m3282(L_52, /*hidden argument*/NULL);
		if ((((int64_t)L_53) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0165;
		}
	}
	{
		ZipEntry_t591 * L_54 = V_0;
		NullCheck(L_54);
		int64_t L_55 = ZipEntry_get_Size_m3280(L_54, /*hidden argument*/NULL);
		if ((((int64_t)L_55) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0176;
		}
	}

IL_0165:
	{
		ZipUpdate_t611 * L_56 = ___update;
		Stream_t506 * L_57 = (__this->___baseStream__5);
		NullCheck(L_57);
		int64_t L_58 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_57);
		NullCheck(L_56);
		ZipUpdate_set_SizePatchOffset_m3424(L_56, L_58, /*hidden argument*/NULL);
	}

IL_0176:
	{
		ZipEntry_t591 * L_59 = V_0;
		NullCheck(L_59);
		int64_t L_60 = ZipEntry_get_CompressedSize_m3282(L_59, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_60))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_61 = V_0;
		NullCheck(L_61);
		int64_t L_62 = ZipEntry_get_Size_m3280(L_61, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_62))), /*hidden argument*/NULL);
	}

IL_0190:
	{
		ZipEntry_t591 * L_63 = V_0;
		NullCheck(L_63);
		int32_t L_64 = ZipEntry_get_Flags_m3256(L_63, /*hidden argument*/NULL);
		ZipEntry_t591 * L_65 = V_0;
		NullCheck(L_65);
		String_t* L_66 = ZipEntry_get_Name_m3279(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_67 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_64, L_66, /*hidden argument*/NULL);
		V_1 = L_67;
		ByteU5BU5D_t129* L_68 = V_1;
		NullCheck(L_68);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_68)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_01b7;
		}
	}
	{
		ZipException_t594 * L_69 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_69, _stringLiteral464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_69);
	}

IL_01b7:
	{
		ZipEntry_t591 * L_70 = V_0;
		NullCheck(L_70);
		ByteU5BU5D_t129* L_71 = ZipEntry_get_ExtraData_m3288(L_70, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_72 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m3355(L_72, L_71, /*hidden argument*/NULL);
		V_2 = L_72;
		ZipEntry_t591 * L_73 = V_0;
		NullCheck(L_73);
		bool L_74 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_73, /*hidden argument*/NULL);
		if (!L_74)
		{
			goto IL_01f2;
		}
	}
	{
		ZipExtraData_t599 * L_75 = V_2;
		NullCheck(L_75);
		ZipExtraData_StartNewEntry_m3368(L_75, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_76 = V_2;
		ZipEntry_t591 * L_77 = V_0;
		NullCheck(L_77);
		int64_t L_78 = ZipEntry_get_Size_m3280(L_77, /*hidden argument*/NULL);
		NullCheck(L_76);
		ZipExtraData_AddLeLong_m3374(L_76, L_78, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_79 = V_2;
		ZipEntry_t591 * L_80 = V_0;
		NullCheck(L_80);
		int64_t L_81 = ZipEntry_get_CompressedSize_m3282(L_80, /*hidden argument*/NULL);
		NullCheck(L_79);
		ZipExtraData_AddLeLong_m3374(L_79, L_81, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_82 = V_2;
		NullCheck(L_82);
		ZipExtraData_AddNewEntry_m3369(L_82, 1, /*hidden argument*/NULL);
		goto IL_01fa;
	}

IL_01f2:
	{
		ZipExtraData_t599 * L_83 = V_2;
		NullCheck(L_83);
		ZipExtraData_Delete_m3375(L_83, 1, /*hidden argument*/NULL);
	}

IL_01fa:
	{
		ZipEntry_t591 * L_84 = V_0;
		ZipExtraData_t599 * L_85 = V_2;
		NullCheck(L_85);
		ByteU5BU5D_t129* L_86 = ZipExtraData_GetEntryData_m3356(L_85, /*hidden argument*/NULL);
		NullCheck(L_84);
		ZipEntry_set_ExtraData_m3289(L_84, L_86, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_87 = V_1;
		NullCheck(L_87);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((int32_t)(((Array_t *)L_87)->max_length)))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_88 = V_0;
		NullCheck(L_88);
		ByteU5BU5D_t129* L_89 = ZipEntry_get_ExtraData_m3288(L_88, /*hidden argument*/NULL);
		NullCheck(L_89);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((int32_t)(((Array_t *)L_89)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_90 = V_1;
		NullCheck(L_90);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_90)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0233;
		}
	}
	{
		Stream_t506 * L_91 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_92 = V_1;
		ByteU5BU5D_t129* L_93 = V_1;
		NullCheck(L_93);
		NullCheck(L_91);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_91, L_92, 0, (((int32_t)((int32_t)(((Array_t *)L_93)->max_length)))));
	}

IL_0233:
	{
		ZipEntry_t591 * L_94 = V_0;
		NullCheck(L_94);
		bool L_95 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_94, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_0268;
		}
	}
	{
		ZipExtraData_t599 * L_96 = V_2;
		NullCheck(L_96);
		bool L_97 = ZipExtraData_Find_m3365(L_96, 1, /*hidden argument*/NULL);
		if (L_97)
		{
			goto IL_024f;
		}
	}
	{
		ZipException_t594 * L_98 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_98, _stringLiteral465, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_98);
	}

IL_024f:
	{
		ZipUpdate_t611 * L_99 = ___update;
		Stream_t506 * L_100 = (__this->___baseStream__5);
		NullCheck(L_100);
		int64_t L_101 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_100);
		ZipExtraData_t599 * L_102 = V_2;
		NullCheck(L_102);
		int32_t L_103 = ZipExtraData_get_CurrentReadIndex_m3363(L_102, /*hidden argument*/NULL);
		NullCheck(L_99);
		ZipUpdate_set_SizePatchOffset_m3424(L_99, ((int64_t)((int64_t)L_101+(int64_t)(((int64_t)((int64_t)L_103))))), /*hidden argument*/NULL);
	}

IL_0268:
	{
		ZipEntry_t591 * L_104 = V_0;
		NullCheck(L_104);
		ByteU5BU5D_t129* L_105 = ZipEntry_get_ExtraData_m3288(L_104, /*hidden argument*/NULL);
		NullCheck(L_105);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_105)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_028d;
		}
	}
	{
		Stream_t506 * L_106 = (__this->___baseStream__5);
		ZipEntry_t591 * L_107 = V_0;
		NullCheck(L_107);
		ByteU5BU5D_t129* L_108 = ZipEntry_get_ExtraData_m3288(L_107, /*hidden argument*/NULL);
		ZipEntry_t591 * L_109 = V_0;
		NullCheck(L_109);
		ByteU5BU5D_t129* L_110 = ZipEntry_get_ExtraData_m3288(L_109, /*hidden argument*/NULL);
		NullCheck(L_110);
		NullCheck(L_106);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_106, L_108, 0, (((int32_t)((int32_t)(((Array_t *)L_110)->max_length)))));
	}

IL_028d:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::WriteCentralDirectoryHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t664_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral466;
extern Il2CppCodeGenString* _stringLiteral467;
extern Il2CppCodeGenString* _stringLiteral468;
extern Il2CppCodeGenString* _stringLiteral469;
extern "C" int32_t ZipFile_WriteCentralDirectoryHeader_m3533 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		Encoding_t664_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(400);
		_stringLiteral466 = il2cpp_codegen_string_literal_from_index(466);
		_stringLiteral467 = il2cpp_codegen_string_literal_from_index(467);
		_stringLiteral468 = il2cpp_codegen_string_literal_from_index(468);
		_stringLiteral469 = il2cpp_codegen_string_literal_from_index(469);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	ZipExtraData_t599 * V_1 = {0};
	ByteU5BU5D_t129* V_2 = {0};
	ByteU5BU5D_t129* V_3 = {0};
	ZipFile_t580 * G_B29_0 = {0};
	ZipFile_t580 * G_B28_0 = {0};
	int32_t G_B30_0 = 0;
	ZipFile_t580 * G_B30_1 = {0};
	ByteU5BU5D_t129* G_B45_0 = {0};
	{
		ZipEntry_t591 * L_0 = ___entry;
		NullCheck(L_0);
		int64_t L_1 = ZipEntry_get_CompressedSize_m3282(L_0, /*hidden argument*/NULL);
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0015;
		}
	}
	{
		ZipException_t594 * L_2 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_2, _stringLiteral466, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0015:
	{
		ZipEntry_t591 * L_3 = ___entry;
		NullCheck(L_3);
		int64_t L_4 = ZipEntry_get_Size_m3280(L_3, /*hidden argument*/NULL);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_002a;
		}
	}
	{
		ZipException_t594 * L_5 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_5, _stringLiteral467, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002a:
	{
		ZipEntry_t591 * L_6 = ___entry;
		NullCheck(L_6);
		int64_t L_7 = ZipEntry_get_Crc_m3284(L_6, /*hidden argument*/NULL);
		if ((((int64_t)L_7) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_003f;
		}
	}
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral468, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003f:
	{
		ZipFile_WriteLEInt_m3528(__this, ((int32_t)33639248), /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, ((int32_t)45), /*hidden argument*/NULL);
		ZipEntry_t591 * L_9 = ___entry;
		NullCheck(L_9);
		int32_t L_10 = ZipEntry_get_Version_m3269(L_9, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, L_10, /*hidden argument*/NULL);
		ZipEntry_t591 * L_11 = ___entry;
		NullCheck(L_11);
		int32_t L_12 = ZipEntry_get_Flags_m3256(L_11, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, L_12, /*hidden argument*/NULL);
		ZipEntry_t591 * L_13 = ___entry;
		NullCheck(L_13);
		int32_t L_14 = ZipEntry_get_CompressionMethod_m3286(L_13, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((uint8_t)L_14))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_15 = ___entry;
		NullCheck(L_15);
		int64_t L_16 = ZipEntry_get_DosTime_m3275(L_15, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_16))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_17 = ___entry;
		NullCheck(L_17);
		int64_t L_18 = ZipEntry_get_Crc_m3284(L_17, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_18))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_19 = ___entry;
		NullCheck(L_19);
		bool L_20 = ZipEntry_IsZip64Forced_m3272(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00a3;
		}
	}
	{
		ZipEntry_t591 * L_21 = ___entry;
		NullCheck(L_21);
		int64_t L_22 = ZipEntry_get_CompressedSize_m3282(L_21, /*hidden argument*/NULL);
		if ((((int64_t)L_22) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_00ac;
		}
	}

IL_00a3:
	{
		ZipFile_WriteLEInt_m3528(__this, (-1), /*hidden argument*/NULL);
		goto IL_00bc;
	}

IL_00ac:
	{
		ZipEntry_t591 * L_23 = ___entry;
		NullCheck(L_23);
		int64_t L_24 = ZipEntry_get_CompressedSize_m3282(L_23, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_24&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))), /*hidden argument*/NULL);
	}

IL_00bc:
	{
		ZipEntry_t591 * L_25 = ___entry;
		NullCheck(L_25);
		bool L_26 = ZipEntry_IsZip64Forced_m3272(L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00ce;
		}
	}
	{
		ZipEntry_t591 * L_27 = ___entry;
		NullCheck(L_27);
		int64_t L_28 = ZipEntry_get_Size_m3280(L_27, /*hidden argument*/NULL);
		if ((((int64_t)L_28) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_00d7;
		}
	}

IL_00ce:
	{
		ZipFile_WriteLEInt_m3528(__this, (-1), /*hidden argument*/NULL);
		goto IL_00e4;
	}

IL_00d7:
	{
		ZipEntry_t591 * L_29 = ___entry;
		NullCheck(L_29);
		int64_t L_30 = ZipEntry_get_Size_m3280(L_29, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, (((int32_t)((int32_t)L_30))), /*hidden argument*/NULL);
	}

IL_00e4:
	{
		ZipEntry_t591 * L_31 = ___entry;
		NullCheck(L_31);
		int32_t L_32 = ZipEntry_get_Flags_m3256(L_31, /*hidden argument*/NULL);
		ZipEntry_t591 * L_33 = ___entry;
		NullCheck(L_33);
		String_t* L_34 = ZipEntry_get_Name_m3279(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_35 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		ByteU5BU5D_t129* L_36 = V_0;
		NullCheck(L_36);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_36)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_010b;
		}
	}
	{
		ZipException_t594 * L_37 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_37, _stringLiteral469, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_010b:
	{
		ByteU5BU5D_t129* L_38 = V_0;
		NullCheck(L_38);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_39 = ___entry;
		NullCheck(L_39);
		ByteU5BU5D_t129* L_40 = ZipEntry_get_ExtraData_m3288(L_39, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_41 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m3355(L_41, L_40, /*hidden argument*/NULL);
		V_1 = L_41;
		ZipEntry_t591 * L_42 = ___entry;
		NullCheck(L_42);
		bool L_43 = ZipEntry_get_CentralHeaderRequiresZip64_m3274(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_018b;
		}
	}
	{
		ZipExtraData_t599 * L_44 = V_1;
		NullCheck(L_44);
		ZipExtraData_StartNewEntry_m3368(L_44, /*hidden argument*/NULL);
		ZipEntry_t591 * L_45 = ___entry;
		NullCheck(L_45);
		int64_t L_46 = ZipEntry_get_Size_m3280(L_45, /*hidden argument*/NULL);
		if ((((int64_t)L_46) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_47 = (__this->___useZip64__11);
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_014d;
		}
	}

IL_0141:
	{
		ZipExtraData_t599 * L_48 = V_1;
		ZipEntry_t591 * L_49 = ___entry;
		NullCheck(L_49);
		int64_t L_50 = ZipEntry_get_Size_m3280(L_49, /*hidden argument*/NULL);
		NullCheck(L_48);
		ZipExtraData_AddLeLong_m3374(L_48, L_50, /*hidden argument*/NULL);
	}

IL_014d:
	{
		ZipEntry_t591 * L_51 = ___entry;
		NullCheck(L_51);
		int64_t L_52 = ZipEntry_get_CompressedSize_m3282(L_51, /*hidden argument*/NULL);
		if ((((int64_t)L_52) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0160;
		}
	}
	{
		int32_t L_53 = (__this->___useZip64__11);
		if ((!(((uint32_t)L_53) == ((uint32_t)1))))
		{
			goto IL_016c;
		}
	}

IL_0160:
	{
		ZipExtraData_t599 * L_54 = V_1;
		ZipEntry_t591 * L_55 = ___entry;
		NullCheck(L_55);
		int64_t L_56 = ZipEntry_get_CompressedSize_m3282(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		ZipExtraData_AddLeLong_m3374(L_54, L_56, /*hidden argument*/NULL);
	}

IL_016c:
	{
		ZipEntry_t591 * L_57 = ___entry;
		NullCheck(L_57);
		int64_t L_58 = ZipEntry_get_Offset_m3260(L_57, /*hidden argument*/NULL);
		if ((((int64_t)L_58) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0182;
		}
	}
	{
		ZipExtraData_t599 * L_59 = V_1;
		ZipEntry_t591 * L_60 = ___entry;
		NullCheck(L_60);
		int64_t L_61 = ZipEntry_get_Offset_m3260(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ZipExtraData_AddLeLong_m3374(L_59, L_61, /*hidden argument*/NULL);
	}

IL_0182:
	{
		ZipExtraData_t599 * L_62 = V_1;
		NullCheck(L_62);
		ZipExtraData_AddNewEntry_m3369(L_62, 1, /*hidden argument*/NULL);
		goto IL_0193;
	}

IL_018b:
	{
		ZipExtraData_t599 * L_63 = V_1;
		NullCheck(L_63);
		ZipExtraData_Delete_m3375(L_63, 1, /*hidden argument*/NULL);
	}

IL_0193:
	{
		ZipExtraData_t599 * L_64 = V_1;
		NullCheck(L_64);
		ByteU5BU5D_t129* L_65 = ZipExtraData_GetEntryData_m3356(L_64, /*hidden argument*/NULL);
		V_2 = L_65;
		ByteU5BU5D_t129* L_66 = V_2;
		NullCheck(L_66);
		ZipFile_WriteLEShort_m3526(__this, (((int32_t)((int32_t)(((Array_t *)L_66)->max_length)))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_67 = ___entry;
		NullCheck(L_67);
		String_t* L_68 = ZipEntry_get_Comment_m3291(L_67, /*hidden argument*/NULL);
		G_B28_0 = __this;
		if (L_68)
		{
			G_B29_0 = __this;
			goto IL_01af;
		}
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_01ba;
	}

IL_01af:
	{
		ZipEntry_t591 * L_69 = ___entry;
		NullCheck(L_69);
		String_t* L_70 = ZipEntry_get_Comment_m3291(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		int32_t L_71 = String_get_Length_m564(L_70, /*hidden argument*/NULL);
		G_B30_0 = L_71;
		G_B30_1 = G_B29_0;
	}

IL_01ba:
	{
		NullCheck(G_B30_1);
		ZipFile_WriteLEShort_m3526(G_B30_1, G_B30_0, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, 0, /*hidden argument*/NULL);
		ZipFile_WriteLEShort_m3526(__this, 0, /*hidden argument*/NULL);
		ZipEntry_t591 * L_72 = ___entry;
		NullCheck(L_72);
		int32_t L_73 = ZipEntry_get_ExternalFileAttributes_m3262(L_72, /*hidden argument*/NULL);
		if ((((int32_t)L_73) == ((int32_t)(-1))))
		{
			goto IL_01e4;
		}
	}
	{
		ZipEntry_t591 * L_74 = ___entry;
		NullCheck(L_74);
		int32_t L_75 = ZipEntry_get_ExternalFileAttributes_m3262(L_74, /*hidden argument*/NULL);
		ZipFile_WriteLEInt_m3528(__this, L_75, /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_01e4:
	{
		ZipEntry_t591 * L_76 = ___entry;
		NullCheck(L_76);
		bool L_77 = ZipEntry_get_IsDirectory_m3293(L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_01f6;
		}
	}
	{
		ZipFile_WriteLEUint_m3529(__this, ((int32_t)16), /*hidden argument*/NULL);
		goto IL_01fd;
	}

IL_01f6:
	{
		ZipFile_WriteLEUint_m3529(__this, 0, /*hidden argument*/NULL);
	}

IL_01fd:
	{
		ZipEntry_t591 * L_78 = ___entry;
		NullCheck(L_78);
		int64_t L_79 = ZipEntry_get_Offset_m3260(L_78, /*hidden argument*/NULL);
		if ((((int64_t)L_79) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0210;
		}
	}
	{
		ZipFile_WriteLEUint_m3529(__this, (-1), /*hidden argument*/NULL);
		goto IL_021d;
	}

IL_0210:
	{
		ZipEntry_t591 * L_80 = ___entry;
		NullCheck(L_80);
		int64_t L_81 = ZipEntry_get_Offset_m3260(L_80, /*hidden argument*/NULL);
		ZipFile_WriteLEUint_m3529(__this, (((int32_t)((int32_t)L_81))), /*hidden argument*/NULL);
	}

IL_021d:
	{
		ByteU5BU5D_t129* L_82 = V_0;
		NullCheck(L_82);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_82)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0233;
		}
	}
	{
		Stream_t506 * L_83 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_84 = V_0;
		ByteU5BU5D_t129* L_85 = V_0;
		NullCheck(L_85);
		NullCheck(L_83);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_83, L_84, 0, (((int32_t)((int32_t)(((Array_t *)L_85)->max_length)))));
	}

IL_0233:
	{
		ByteU5BU5D_t129* L_86 = V_2;
		NullCheck(L_86);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_86)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0249;
		}
	}
	{
		Stream_t506 * L_87 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_88 = V_2;
		ByteU5BU5D_t129* L_89 = V_2;
		NullCheck(L_89);
		NullCheck(L_87);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_87, L_88, 0, (((int32_t)((int32_t)(((Array_t *)L_89)->max_length)))));
	}

IL_0249:
	{
		ZipEntry_t591 * L_90 = ___entry;
		NullCheck(L_90);
		String_t* L_91 = ZipEntry_get_Comment_m3291(L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_0259;
		}
	}
	{
		G_B45_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, 0));
		goto IL_0269;
	}

IL_0259:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t664_il2cpp_TypeInfo_var);
		Encoding_t664 * L_92 = Encoding_get_ASCII_m3731(NULL /*static, unused*/, /*hidden argument*/NULL);
		ZipEntry_t591 * L_93 = ___entry;
		NullCheck(L_93);
		String_t* L_94 = ZipEntry_get_Comment_m3291(L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		ByteU5BU5D_t129* L_95 = (ByteU5BU5D_t129*)VirtFuncInvoker1< ByteU5BU5D_t129*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_92, L_94);
		G_B45_0 = L_95;
	}

IL_0269:
	{
		V_3 = G_B45_0;
		ByteU5BU5D_t129* L_96 = V_3;
		NullCheck(L_96);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_96)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0280;
		}
	}
	{
		Stream_t506 * L_97 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_98 = V_3;
		ByteU5BU5D_t129* L_99 = V_3;
		NullCheck(L_99);
		NullCheck(L_97);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_97, L_98, 0, (((int32_t)((int32_t)(((Array_t *)L_99)->max_length)))));
	}

IL_0280:
	{
		ByteU5BU5D_t129* L_100 = V_0;
		NullCheck(L_100);
		ByteU5BU5D_t129* L_101 = V_2;
		NullCheck(L_101);
		ByteU5BU5D_t129* L_102 = V_3;
		NullCheck(L_102);
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)46)+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_100)->max_length))))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_101)->max_length))))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_102)->max_length))))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::PostUpdateCleanup()
extern TypeInfo* IArchiveStorage_t619_il2cpp_TypeInfo_var;
extern "C" void ZipFile_PostUpdateCleanup_m3534 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IArchiveStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___archiveStorage__15);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Object_t * L_1 = (__this->___archiveStorage__15);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(5 /* System.Void ICSharpCode.SharpZipLib.Zip.IArchiveStorage::Dispose() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_1);
		__this->___archiveStorage__15 = (Object_t *)NULL;
	}

IL_001a:
	{
		__this->___updateDataSource__16 = (Object_t *)NULL;
		__this->___updates__12 = (ArrayList_t530 *)NULL;
		__this->___updateIndex__14 = (Hashtable_t618 *)NULL;
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::GetTransformedFileName(System.String)
extern TypeInfo* INameTransform_t582_il2cpp_TypeInfo_var;
extern "C" String_t* ZipFile_GetTransformedFileName_m3535 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		INameTransform_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ZipFile_get_NameTransform_m3499(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name;
		return L_1;
	}

IL_000a:
	{
		Object_t * L_2 = ZipFile_get_NameTransform_m3499(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		NullCheck(L_2);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(0 /* System.String ICSharpCode.SharpZipLib.Core.INameTransform::TransformFile(System.String) */, INameTransform_t582_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipFile::GetTransformedDirectoryName(System.String)
extern TypeInfo* INameTransform_t582_il2cpp_TypeInfo_var;
extern "C" String_t* ZipFile_GetTransformedDirectoryName_m3536 (ZipFile_t580 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		INameTransform_t582_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(431);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = ZipFile_get_NameTransform_m3499(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___name;
		return L_1;
	}

IL_000a:
	{
		Object_t * L_2 = ZipFile_get_NameTransform_m3499(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___name;
		NullCheck(L_2);
		String_t* L_4 = (String_t*)InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(1 /* System.String ICSharpCode.SharpZipLib.Core.INameTransform::TransformDirectory(System.String) */, INameTransform_t582_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Byte[] ICSharpCode.SharpZipLib.Zip.ZipFile::GetBuffer()
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t129* ZipFile_GetBuffer_m3537 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t129* L_0 = (__this->___copyBuffer__19);
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = (__this->___bufferSize__18);
		__this->___copyBuffer__19 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_1));
	}

IL_0019:
	{
		ByteU5BU5D_t129* L_2 = (__this->___copyBuffer__19);
		return L_2;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyDescriptorBytes(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.IO.Stream)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" void ZipFile_CopyDescriptorBytes_m3538 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___dest, Stream_t506 * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t129* V_1 = {0};
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		ZipUpdate_t611 * L_0 = ___update;
		int32_t L_1 = ZipFile_GetDescriptorSize_m3540(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_004b;
		}
	}
	{
		ByteU5BU5D_t129* L_3 = ZipFile_GetBuffer_m3537(__this, /*hidden argument*/NULL);
		V_1 = L_3;
		goto IL_0047;
	}

IL_0015:
	{
		ByteU5BU5D_t129* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = V_0;
		int32_t L_6 = Math_Min_m3690(NULL /*static, unused*/, (((int32_t)((int32_t)(((Array_t *)L_4)->max_length)))), L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Stream_t506 * L_7 = ___source;
		ByteU5BU5D_t129* L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_7);
		int32_t L_10 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_7, L_8, 0, L_9);
		V_3 = L_10;
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Stream_t506 * L_12 = ___dest;
		ByteU5BU5D_t129* L_13 = V_1;
		int32_t L_14 = V_3;
		NullCheck(L_12);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, L_14);
		int32_t L_15 = V_0;
		int32_t L_16 = V_3;
		V_0 = ((int32_t)((int32_t)L_15-(int32_t)L_16));
		goto IL_0047;
	}

IL_003c:
	{
		ZipException_t594 * L_17 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_17, _stringLiteral470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0047:
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}

IL_004b:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyBytes(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.IO.Stream,System.Int64,System.Boolean)
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* Crc32_t513_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral471;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" void ZipFile_CopyBytes_m3539 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___destination, Stream_t506 * ___source, int64_t ___bytesToCopy, bool ___updateCrc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		Crc32_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral471 = il2cpp_codegen_string_literal_from_index(471);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	Crc32_t513 * V_0 = {0};
	ByteU5BU5D_t129* V_1 = {0};
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Stream_t506 * L_0 = ___destination;
		Stream_t506 * L_1 = ___source;
		if ((!(((Object_t*)(Stream_t506 *)L_0) == ((Object_t*)(Stream_t506 *)L_1))))
		{
			goto IL_000f;
		}
	}
	{
		InvalidOperationException_t658 * L_2 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_2, _stringLiteral471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_000f:
	{
		Crc32_t513 * L_3 = (Crc32_t513 *)il2cpp_codegen_object_new (Crc32_t513_il2cpp_TypeInfo_var);
		Crc32__ctor_m2614(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		ByteU5BU5D_t129* L_4 = ZipFile_GetBuffer_m3537(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		int64_t L_5 = ___bytesToCopy;
		V_2 = L_5;
		V_3 = (((int64_t)((int64_t)0)));
	}

IL_0022:
	{
		ByteU5BU5D_t129* L_6 = V_1;
		NullCheck(L_6);
		V_5 = (((int32_t)((int32_t)(((Array_t *)L_6)->max_length))));
		int64_t L_7 = ___bytesToCopy;
		int32_t L_8 = V_5;
		if ((((int64_t)L_7) >= ((int64_t)(((int64_t)((int64_t)L_8))))))
		{
			goto IL_0033;
		}
	}
	{
		int64_t L_9 = ___bytesToCopy;
		V_5 = (((int32_t)((int32_t)L_9)));
	}

IL_0033:
	{
		Stream_t506 * L_10 = ___source;
		ByteU5BU5D_t129* L_11 = V_1;
		int32_t L_12 = V_5;
		NullCheck(L_10);
		int32_t L_13 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, L_12);
		V_4 = L_13;
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) <= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		bool L_15 = ___updateCrc;
		if (!L_15)
		{
			goto IL_0052;
		}
	}
	{
		Crc32_t513 * L_16 = V_0;
		ByteU5BU5D_t129* L_17 = V_1;
		int32_t L_18 = V_4;
		NullCheck(L_16);
		Crc32_Update_m2613(L_16, L_17, 0, L_18, /*hidden argument*/NULL);
	}

IL_0052:
	{
		Stream_t506 * L_19 = ___destination;
		ByteU5BU5D_t129* L_20 = V_1;
		int32_t L_21 = V_4;
		NullCheck(L_19);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, L_21);
		int64_t L_22 = ___bytesToCopy;
		int32_t L_23 = V_4;
		___bytesToCopy = ((int64_t)((int64_t)L_22-(int64_t)(((int64_t)((int64_t)L_23)))));
		int64_t L_24 = V_3;
		int32_t L_25 = V_4;
		V_3 = ((int64_t)((int64_t)L_24+(int64_t)(((int64_t)((int64_t)L_25)))));
	}

IL_006a:
	{
		int32_t L_26 = V_4;
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		int64_t L_27 = ___bytesToCopy;
		if ((((int64_t)L_27) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0022;
		}
	}

IL_0075:
	{
		int64_t L_28 = V_3;
		int64_t L_29 = V_2;
		if ((((int64_t)L_28) == ((int64_t)L_29)))
		{
			goto IL_0095;
		}
	}
	{
		int64_t L_30 = V_2;
		int64_t L_31 = L_30;
		Object_t * L_32 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_31);
		int64_t L_33 = V_3;
		int64_t L_34 = L_33;
		Object_t * L_35 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_34);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Format_m2432(NULL /*static, unused*/, _stringLiteral472, L_32, L_35, /*hidden argument*/NULL);
		ZipException_t594 * L_37 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_37, L_36, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_0095:
	{
		bool L_38 = ___updateCrc;
		if (!L_38)
		{
			goto IL_00aa;
		}
	}
	{
		ZipUpdate_t611 * L_39 = ___update;
		NullCheck(L_39);
		ZipEntry_t591 * L_40 = ZipUpdate_get_OutEntry_m3420(L_39, /*hidden argument*/NULL);
		Crc32_t513 * L_41 = V_0;
		NullCheck(L_41);
		int64_t L_42 = Crc32_get_Value_m2608(L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		ZipEntry_set_Crc_m3285(L_40, L_42, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::GetDescriptorSize(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" int32_t ZipFile_GetDescriptorSize_m3540 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_Entry_m3419(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = ZipEntry_get_Flags_m3256(L_1, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_2&(int32_t)8)))
		{
			goto IL_0024;
		}
	}
	{
		V_0 = ((int32_t)12);
		ZipUpdate_t611 * L_3 = ___update;
		NullCheck(L_3);
		ZipEntry_t591 * L_4 = ZipUpdate_get_Entry_m3419(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		V_0 = ((int32_t)20);
	}

IL_0024:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyDescriptorBytesDirect(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.Int64&,System.Int64)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral470;
extern "C" void ZipFile_CopyDescriptorBytesDirect_m3541 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___stream, int64_t* ___destinationPosition, int64_t ___sourcePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral470 = il2cpp_codegen_string_literal_from_index(470);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_t129* V_2 = {0};
	int32_t V_3 = 0;
	{
		ZipUpdate_t611 * L_0 = ___update;
		int32_t L_1 = ZipFile_GetDescriptorSize_m3540(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0059;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		V_1 = L_2;
		ByteU5BU5D_t129* L_3 = ZipFile_GetBuffer_m3537(__this, /*hidden argument*/NULL);
		V_2 = L_3;
		Stream_t506 * L_4 = ___stream;
		int64_t L_5 = ___sourcePosition;
		NullCheck(L_4);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_4, L_5);
		Stream_t506 * L_6 = ___stream;
		ByteU5BU5D_t129* L_7 = V_2;
		int32_t L_8 = V_1;
		NullCheck(L_6);
		int32_t L_9 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, L_8);
		V_3 = L_9;
		int32_t L_10 = V_3;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		Stream_t506 * L_11 = ___stream;
		int64_t* L_12 = ___destinationPosition;
		NullCheck(L_11);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_11, (*((int64_t*)L_12)));
		Stream_t506 * L_13 = ___stream;
		ByteU5BU5D_t129* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_13);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_13, L_14, 0, L_15);
		int32_t L_16 = V_0;
		int32_t L_17 = V_3;
		V_0 = ((int32_t)((int32_t)L_16-(int32_t)L_17));
		int64_t* L_18 = ___destinationPosition;
		int64_t* L_19 = L_18;
		int32_t L_20 = V_3;
		*((int64_t*)(L_19)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_19))+(int64_t)(((int64_t)((int64_t)L_20)))));
		int64_t L_21 = ___sourcePosition;
		int32_t L_22 = V_3;
		___sourcePosition = ((int64_t)((int64_t)L_21+(int64_t)(((int64_t)((int64_t)L_22)))));
		goto IL_0059;
	}

IL_004e:
	{
		ZipException_t594 * L_23 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_23, _stringLiteral470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_0059:
	{
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntryDataDirect(ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.IO.Stream,System.Boolean,System.Int64&,System.Int64&)
extern TypeInfo* Crc32_t513_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral472;
extern "C" void ZipFile_CopyEntryDataDirect_m3542 (ZipFile_t580 * __this, ZipUpdate_t611 * ___update, Stream_t506 * ___stream, bool ___updateCrc, int64_t* ___destinationPosition, int64_t* ___sourcePosition, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Crc32_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral472 = il2cpp_codegen_string_literal_from_index(472);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	Crc32_t513 * V_1 = {0};
	ByteU5BU5D_t129* V_2 = {0};
	int64_t V_3 = 0;
	int64_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_Entry_m3419(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int64_t L_2 = ZipEntry_get_CompressedSize_m3282(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Crc32_t513 * L_3 = (Crc32_t513 *)il2cpp_codegen_object_new (Crc32_t513_il2cpp_TypeInfo_var);
		Crc32__ctor_m2614(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		ByteU5BU5D_t129* L_4 = ZipFile_GetBuffer_m3537(__this, /*hidden argument*/NULL);
		V_2 = L_4;
		int64_t L_5 = V_0;
		V_3 = L_5;
		V_4 = (((int64_t)((int64_t)0)));
	}

IL_001f:
	{
		ByteU5BU5D_t129* L_6 = V_2;
		NullCheck(L_6);
		V_6 = (((int32_t)((int32_t)(((Array_t *)L_6)->max_length))));
		int64_t L_7 = V_0;
		int32_t L_8 = V_6;
		if ((((int64_t)L_7) >= ((int64_t)(((int64_t)((int64_t)L_8))))))
		{
			goto IL_002e;
		}
	}
	{
		int64_t L_9 = V_0;
		V_6 = (((int32_t)((int32_t)L_9)));
	}

IL_002e:
	{
		Stream_t506 * L_10 = ___stream;
		int64_t* L_11 = ___sourcePosition;
		NullCheck(L_10);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_10, (*((int64_t*)L_11)));
		Stream_t506 * L_12 = ___stream;
		ByteU5BU5D_t129* L_13 = V_2;
		int32_t L_14 = V_6;
		NullCheck(L_12);
		int32_t L_15 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_12, L_13, 0, L_14);
		V_5 = L_15;
		int32_t L_16 = V_5;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		bool L_17 = ___updateCrc;
		if (!L_17)
		{
			goto IL_0055;
		}
	}
	{
		Crc32_t513 * L_18 = V_1;
		ByteU5BU5D_t129* L_19 = V_2;
		int32_t L_20 = V_5;
		NullCheck(L_18);
		Crc32_Update_m2613(L_18, L_19, 0, L_20, /*hidden argument*/NULL);
	}

IL_0055:
	{
		Stream_t506 * L_21 = ___stream;
		int64_t* L_22 = ___destinationPosition;
		NullCheck(L_21);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_21, (*((int64_t*)L_22)));
		Stream_t506 * L_23 = ___stream;
		ByteU5BU5D_t129* L_24 = V_2;
		int32_t L_25 = V_5;
		NullCheck(L_23);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, L_25);
		int64_t* L_26 = ___destinationPosition;
		int64_t* L_27 = L_26;
		int32_t L_28 = V_5;
		*((int64_t*)(L_27)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_27))+(int64_t)(((int64_t)((int64_t)L_28)))));
		int64_t* L_29 = ___sourcePosition;
		int64_t* L_30 = L_29;
		int32_t L_31 = V_5;
		*((int64_t*)(L_30)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_30))+(int64_t)(((int64_t)((int64_t)L_31)))));
		int64_t L_32 = V_0;
		int32_t L_33 = V_5;
		V_0 = ((int64_t)((int64_t)L_32-(int64_t)(((int64_t)((int64_t)L_33)))));
		int64_t L_34 = V_4;
		int32_t L_35 = V_5;
		V_4 = ((int64_t)((int64_t)L_34+(int64_t)(((int64_t)((int64_t)L_35)))));
	}

IL_0088:
	{
		int32_t L_36 = V_5;
		if ((((int32_t)L_36) <= ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		int64_t L_37 = V_0;
		if ((((int64_t)L_37) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_001f;
		}
	}

IL_0092:
	{
		int64_t L_38 = V_4;
		int64_t L_39 = V_3;
		if ((((int64_t)L_38) == ((int64_t)L_39)))
		{
			goto IL_00b4;
		}
	}
	{
		int64_t L_40 = V_3;
		int64_t L_41 = L_40;
		Object_t * L_42 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_41);
		int64_t L_43 = V_4;
		int64_t L_44 = L_43;
		Object_t * L_45 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_44);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_46 = String_Format_m2432(NULL /*static, unused*/, _stringLiteral472, L_42, L_45, /*hidden argument*/NULL);
		ZipException_t594 * L_47 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_47, L_46, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_47);
	}

IL_00b4:
	{
		bool L_48 = ___updateCrc;
		if (!L_48)
		{
			goto IL_00c8;
		}
	}
	{
		ZipUpdate_t611 * L_49 = ___update;
		NullCheck(L_49);
		ZipEntry_t591 * L_50 = ZipUpdate_get_OutEntry_m3420(L_49, /*hidden argument*/NULL);
		Crc32_t513 * L_51 = V_1;
		NullCheck(L_51);
		int64_t L_52 = Crc32_get_Value_m2608(L_51, /*hidden argument*/NULL);
		NullCheck(L_50);
		ZipEntry_set_Crc_m3285(L_50, L_52, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindExistingUpdate(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern "C" int32_t ZipFile_FindExistingUpdate_m3543 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		V_0 = (-1);
		ZipEntry_t591 * L_0 = ___entry;
		NullCheck(L_0);
		String_t* L_1 = ZipEntry_get_Name_m3279(L_0, /*hidden argument*/NULL);
		String_t* L_2 = ZipFile_GetTransformedFileName_m3535(__this, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		Hashtable_t618 * L_3 = (__this->___updateIndex__14);
		String_t* L_4 = V_1;
		NullCheck(L_3);
		bool L_5 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		Hashtable_t618 * L_6 = (__this->___updateIndex__14);
		String_t* L_7 = V_1;
		NullCheck(L_6);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, L_7);
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_8, Int32_t447_il2cpp_TypeInfo_var))));
	}

IL_002f:
	{
		int32_t L_9 = V_0;
		return L_9;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipFile::FindExistingUpdate(System.String)
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern "C" int32_t ZipFile_FindExistingUpdate_m3544 (ZipFile_t580 * __this, String_t* ___fileName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = {0};
	{
		V_0 = (-1);
		String_t* L_0 = ___fileName;
		String_t* L_1 = ZipFile_GetTransformedFileName_m3535(__this, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		Hashtable_t618 * L_2 = (__this->___updateIndex__14);
		String_t* L_3 = V_1;
		NullCheck(L_2);
		bool L_4 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(30 /* System.Boolean System.Collections.Hashtable::ContainsKey(System.Object) */, L_2, L_3);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		Hashtable_t618 * L_5 = (__this->___updateIndex__14);
		String_t* L_6 = V_1;
		NullCheck(L_5);
		Object_t * L_7 = (Object_t *)VirtFuncInvoker1< Object_t *, Object_t * >::Invoke(22 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_5, L_6);
		V_0 = ((*(int32_t*)((int32_t*)UnBox (L_7, Int32_t447_il2cpp_TypeInfo_var))));
	}

IL_002a:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::GetOutputStream(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* UncompressedStream_t616_il2cpp_TypeInfo_var;
extern TypeInfo* Deflater_t549_il2cpp_TypeInfo_var;
extern TypeInfo* DeflaterOutputStream_t548_il2cpp_TypeInfo_var;
extern TypeInfo* CompressionMethod_t585_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral473;
extern "C" Stream_t506 * ZipFile_GetOutputStream_m3545 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		UncompressedStream_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		Deflater_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		DeflaterOutputStream_t548_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(461);
		CompressionMethod_t585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(451);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral473 = il2cpp_codegen_string_literal_from_index(473);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	DeflaterOutputStream_t548 * V_1 = {0};
	int32_t V_2 = {0};
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		V_0 = L_0;
		ZipEntry_t591 * L_1 = ___entry;
		NullCheck(L_1);
		bool L_2 = ZipEntry_get_IsCrypted_m3250(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		Stream_t506 * L_3 = V_0;
		ZipEntry_t591 * L_4 = ___entry;
		Stream_t506 * L_5 = ZipFile_CreateAndInitEncryptionStream_m3565(__this, L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0018:
	{
		ZipEntry_t591 * L_6 = ___entry;
		NullCheck(L_6);
		int32_t L_7 = ZipEntry_get_CompressionMethod_m3286(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_004c;
	}

IL_0029:
	{
		Stream_t506 * L_10 = V_0;
		UncompressedStream_t616 * L_11 = (UncompressedStream_t616 *)il2cpp_codegen_object_new (UncompressedStream_t616_il2cpp_TypeInfo_var);
		UncompressedStream__ctor_m3441(L_11, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0067;
	}

IL_0032:
	{
		Stream_t506 * L_12 = V_0;
		Deflater_t549 * L_13 = (Deflater_t549 *)il2cpp_codegen_object_new (Deflater_t549_il2cpp_TypeInfo_var);
		Deflater__ctor_m3072(L_13, ((int32_t)9), 1, /*hidden argument*/NULL);
		DeflaterOutputStream_t548 * L_14 = (DeflaterOutputStream_t548 *)il2cpp_codegen_object_new (DeflaterOutputStream_t548_il2cpp_TypeInfo_var);
		DeflaterOutputStream__ctor_m2781(L_14, L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		DeflaterOutputStream_t548 * L_15 = V_1;
		NullCheck(L_15);
		DeflaterOutputStream_set_IsStreamOwner_m2785(L_15, 0, /*hidden argument*/NULL);
		DeflaterOutputStream_t548 * L_16 = V_1;
		V_0 = L_16;
		goto IL_0067;
	}

IL_004c:
	{
		ZipEntry_t591 * L_17 = ___entry;
		NullCheck(L_17);
		int32_t L_18 = ZipEntry_get_CompressionMethod_m3286(L_17, /*hidden argument*/NULL);
		int32_t L_19 = L_18;
		Object_t * L_20 = Box(CompressionMethod_t585_il2cpp_TypeInfo_var, &L_19);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = String_Concat_m541(NULL /*static, unused*/, _stringLiteral473, L_20, /*hidden argument*/NULL);
		ZipException_t594 * L_22 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_22, L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
	}

IL_0067:
	{
		Stream_t506 * L_23 = V_0;
		return L_23;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::AddEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern TypeInfo* IDynamicDataSource_t620_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral474;
extern "C" void ZipFile_AddEntry_m3546 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDynamicDataSource_t620_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(462);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		_stringLiteral474 = il2cpp_codegen_string_literal_from_index(474);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	Stream_t506 * V_3 = {0};
	int64_t V_4 = 0;
	ZipHelperStream_t628 * V_5 = {0};
	Stream_t506 * V_6 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Stream_t506 *)NULL;
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_Entry_m3419(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = ZipEntry_get_IsFile_m3294(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ZipUpdate_t611 * L_3 = ___update;
		NullCheck(L_3);
		Stream_t506 * L_4 = ZipUpdate_GetSource_m3427(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		Stream_t506 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		Object_t * L_6 = (__this->___updateDataSource__16);
		ZipUpdate_t611 * L_7 = ___update;
		NullCheck(L_7);
		ZipEntry_t591 * L_8 = ZipUpdate_get_Entry_m3419(L_7, /*hidden argument*/NULL);
		ZipUpdate_t611 * L_9 = ___update;
		NullCheck(L_9);
		String_t* L_10 = ZipUpdate_get_Filename_m3422(L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		Stream_t506 * L_11 = (Stream_t506 *)InterfaceFuncInvoker2< Stream_t506 *, ZipEntry_t591 *, String_t* >::Invoke(0 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IDynamicDataSource::GetSource(ICSharpCode.SharpZipLib.Zip.ZipEntry,System.String) */, IDynamicDataSource_t620_il2cpp_TypeInfo_var, L_6, L_8, L_10);
		V_0 = L_11;
	}

IL_0031:
	{
		Stream_t506 * L_12 = V_0;
		if (!L_12)
		{
			goto IL_0103;
		}
	}
	{
		Stream_t506 * L_13 = V_0;
		V_6 = L_13;
	}

IL_003a:
	try
	{ // begin try (depth: 1)
		{
			Stream_t506 * L_14 = V_0;
			NullCheck(L_14);
			int64_t L_15 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_14);
			V_1 = L_15;
			ZipUpdate_t611 * L_16 = ___update;
			NullCheck(L_16);
			ZipEntry_t591 * L_17 = ZipUpdate_get_OutEntry_m3420(L_16, /*hidden argument*/NULL);
			NullCheck(L_17);
			int64_t L_18 = ZipEntry_get_Size_m3280(L_17, /*hidden argument*/NULL);
			if ((((int64_t)L_18) >= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_005e;
			}
		}

IL_0050:
		{
			ZipUpdate_t611 * L_19 = ___update;
			NullCheck(L_19);
			ZipEntry_t591 * L_20 = ZipUpdate_get_OutEntry_m3420(L_19, /*hidden argument*/NULL);
			int64_t L_21 = V_1;
			NullCheck(L_20);
			ZipEntry_set_Size_m3281(L_20, L_21, /*hidden argument*/NULL);
			goto IL_0077;
		}

IL_005e:
		{
			ZipUpdate_t611 * L_22 = ___update;
			NullCheck(L_22);
			ZipEntry_t591 * L_23 = ZipUpdate_get_OutEntry_m3420(L_22, /*hidden argument*/NULL);
			NullCheck(L_23);
			int64_t L_24 = ZipEntry_get_Size_m3280(L_23, /*hidden argument*/NULL);
			int64_t L_25 = V_1;
			if ((((int64_t)L_24) == ((int64_t)L_25)))
			{
				goto IL_0077;
			}
		}

IL_006c:
		{
			ZipException_t594 * L_26 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_26, _stringLiteral474, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
		}

IL_0077:
		{
			ZipFile_t580 * L_27 = ___workFile;
			ZipUpdate_t611 * L_28 = ___update;
			NullCheck(L_27);
			ZipFile_WriteLocalEntryHeader_m3532(L_27, L_28, /*hidden argument*/NULL);
			ZipFile_t580 * L_29 = ___workFile;
			NullCheck(L_29);
			Stream_t506 * L_30 = (L_29->___baseStream__5);
			NullCheck(L_30);
			int64_t L_31 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_30);
			V_2 = L_31;
			ZipFile_t580 * L_32 = ___workFile;
			ZipUpdate_t611 * L_33 = ___update;
			NullCheck(L_33);
			ZipEntry_t591 * L_34 = ZipUpdate_get_OutEntry_m3420(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			Stream_t506 * L_35 = ZipFile_GetOutputStream_m3545(L_32, L_34, /*hidden argument*/NULL);
			V_3 = L_35;
		}

IL_0097:
		try
		{ // begin try (depth: 2)
			ZipUpdate_t611 * L_36 = ___update;
			Stream_t506 * L_37 = V_3;
			Stream_t506 * L_38 = V_0;
			int64_t L_39 = V_1;
			ZipFile_CopyBytes_m3539(__this, L_36, L_37, L_38, L_39, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0xAE, FINALLY_00a4);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t159 *)e.ex;
			goto FINALLY_00a4;
		}

FINALLY_00a4:
		{ // begin finally (depth: 2)
			{
				Stream_t506 * L_40 = V_3;
				if (!L_40)
				{
					goto IL_00ad;
				}
			}

IL_00a7:
			{
				Stream_t506 * L_41 = V_3;
				NullCheck(L_41);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_41);
			}

IL_00ad:
			{
				IL2CPP_END_FINALLY(164)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(164)
		{
			IL2CPP_JUMP_TBL(0xAE, IL_00ae)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
		}

IL_00ae:
		{
			ZipFile_t580 * L_42 = ___workFile;
			NullCheck(L_42);
			Stream_t506 * L_43 = (L_42->___baseStream__5);
			NullCheck(L_43);
			int64_t L_44 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_43);
			V_4 = L_44;
			ZipUpdate_t611 * L_45 = ___update;
			NullCheck(L_45);
			ZipEntry_t591 * L_46 = ZipUpdate_get_OutEntry_m3420(L_45, /*hidden argument*/NULL);
			int64_t L_47 = V_4;
			int64_t L_48 = V_2;
			NullCheck(L_46);
			ZipEntry_set_CompressedSize_m3283(L_46, ((int64_t)((int64_t)L_47-(int64_t)L_48)), /*hidden argument*/NULL);
			ZipUpdate_t611 * L_49 = ___update;
			NullCheck(L_49);
			ZipEntry_t591 * L_50 = ZipUpdate_get_OutEntry_m3420(L_49, /*hidden argument*/NULL);
			NullCheck(L_50);
			int32_t L_51 = ZipEntry_get_Flags_m3256(L_50, /*hidden argument*/NULL);
			if ((!(((uint32_t)((int32_t)((int32_t)L_51&(int32_t)8))) == ((uint32_t)8))))
			{
				goto IL_00f5;
			}
		}

IL_00da:
		{
			ZipFile_t580 * L_52 = ___workFile;
			NullCheck(L_52);
			Stream_t506 * L_53 = (L_52->___baseStream__5);
			ZipHelperStream_t628 * L_54 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
			ZipHelperStream__ctor_m3603(L_54, L_53, /*hidden argument*/NULL);
			V_5 = L_54;
			ZipHelperStream_t628 * L_55 = V_5;
			ZipUpdate_t611 * L_56 = ___update;
			NullCheck(L_56);
			ZipEntry_t591 * L_57 = ZipUpdate_get_OutEntry_m3420(L_56, /*hidden argument*/NULL);
			NullCheck(L_55);
			ZipHelperStream_WriteDataDescriptor_m3632(L_55, L_57, /*hidden argument*/NULL);
		}

IL_00f5:
		{
			IL2CPP_LEAVE(0x117, FINALLY_00f7);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_00f7;
	}

FINALLY_00f7:
	{ // begin finally (depth: 1)
		{
			Stream_t506 * L_58 = V_6;
			if (!L_58)
			{
				goto IL_0102;
			}
		}

IL_00fb:
		{
			Stream_t506 * L_59 = V_6;
			NullCheck(L_59);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_59);
		}

IL_0102:
		{
			IL2CPP_END_FINALLY(247)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(247)
	{
		IL2CPP_JUMP_TBL(0x117, IL_0117)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_0103:
	{
		ZipFile_t580 * L_60 = ___workFile;
		ZipUpdate_t611 * L_61 = ___update;
		NullCheck(L_60);
		ZipFile_WriteLocalEntryHeader_m3532(L_60, L_61, /*hidden argument*/NULL);
		ZipUpdate_t611 * L_62 = ___update;
		NullCheck(L_62);
		ZipEntry_t591 * L_63 = ZipUpdate_get_OutEntry_m3420(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		ZipEntry_set_CompressedSize_m3283(L_63, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
	}

IL_0117:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ModifyEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern "C" void ZipFile_ModifyEntry_m3547 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	Stream_t506 * V_1 = {0};
	Stream_t506 * V_2 = {0};
	int64_t V_3 = 0;
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ZipFile_t580 * L_0 = ___workFile;
		ZipUpdate_t611 * L_1 = ___update;
		NullCheck(L_0);
		ZipFile_WriteLocalEntryHeader_m3532(L_0, L_1, /*hidden argument*/NULL);
		ZipFile_t580 * L_2 = ___workFile;
		NullCheck(L_2);
		Stream_t506 * L_3 = (L_2->___baseStream__5);
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_3);
		V_0 = L_4;
		ZipUpdate_t611 * L_5 = ___update;
		NullCheck(L_5);
		ZipEntry_t591 * L_6 = ZipUpdate_get_Entry_m3419(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7 = ZipEntry_get_IsFile_m3294(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_006a;
		}
	}
	{
		ZipUpdate_t611 * L_8 = ___update;
		NullCheck(L_8);
		String_t* L_9 = ZipUpdate_get_Filename_m3422(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_006a;
		}
	}
	{
		ZipFile_t580 * L_10 = ___workFile;
		ZipUpdate_t611 * L_11 = ___update;
		NullCheck(L_11);
		ZipEntry_t591 * L_12 = ZipUpdate_get_OutEntry_m3420(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Stream_t506 * L_13 = ZipFile_GetOutputStream_m3545(L_10, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		{
			ZipUpdate_t611 * L_14 = ___update;
			NullCheck(L_14);
			ZipEntry_t591 * L_15 = ZipUpdate_get_Entry_m3419(L_14, /*hidden argument*/NULL);
			Stream_t506 * L_16 = ZipFile_GetInputStream_m3494(__this, L_15, /*hidden argument*/NULL);
			V_2 = L_16;
		}

IL_0042:
		try
		{ // begin try (depth: 2)
			ZipUpdate_t611 * L_17 = ___update;
			Stream_t506 * L_18 = V_1;
			Stream_t506 * L_19 = V_2;
			Stream_t506 * L_20 = V_2;
			NullCheck(L_20);
			int64_t L_21 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_20);
			ZipFile_CopyBytes_m3539(__this, L_17, L_18, L_19, L_21, 1, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x5E, FINALLY_0054);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t159 *)e.ex;
			goto FINALLY_0054;
		}

FINALLY_0054:
		{ // begin finally (depth: 2)
			{
				Stream_t506 * L_22 = V_2;
				if (!L_22)
				{
					goto IL_005d;
				}
			}

IL_0057:
			{
				Stream_t506 * L_23 = V_2;
				NullCheck(L_23);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_23);
			}

IL_005d:
			{
				IL2CPP_END_FINALLY(84)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(84)
		{
			IL2CPP_JUMP_TBL(0x5E, IL_005e)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			Stream_t506 * L_24 = V_1;
			if (!L_24)
			{
				goto IL_0069;
			}
		}

IL_0063:
		{
			Stream_t506 * L_25 = V_1;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_25);
		}

IL_0069:
		{
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_006a:
	{
		ZipFile_t580 * L_26 = ___workFile;
		NullCheck(L_26);
		Stream_t506 * L_27 = (L_26->___baseStream__5);
		NullCheck(L_27);
		int64_t L_28 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_27);
		V_3 = L_28;
		ZipUpdate_t611 * L_29 = ___update;
		NullCheck(L_29);
		ZipEntry_t591 * L_30 = ZipUpdate_get_Entry_m3419(L_29, /*hidden argument*/NULL);
		int64_t L_31 = V_3;
		int64_t L_32 = V_0;
		NullCheck(L_30);
		ZipEntry_set_CompressedSize_m3283(L_30, ((int64_t)((int64_t)L_31-(int64_t)L_32)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntryDirect(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate,System.Int64&)
extern "C" void ZipFile_CopyEntryDirect_m3548 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, int64_t* ___destinationPosition, const MethodInfo* method)
{
	bool V_0 = false;
	int64_t V_1 = 0;
	int64_t V_2 = 0;
	uint32_t V_3 = 0;
	uint32_t V_4 = 0;
	{
		V_0 = 0;
		ZipUpdate_t611 * L_0 = ___update;
		NullCheck(L_0);
		ZipEntry_t591 * L_1 = ZipUpdate_get_Entry_m3419(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		int64_t L_2 = ZipEntry_get_Offset_m3260(L_1, /*hidden argument*/NULL);
		int64_t* L_3 = ___destinationPosition;
		if ((!(((uint64_t)L_2) == ((uint64_t)(*((int64_t*)L_3))))))
		{
			goto IL_0013;
		}
	}
	{
		V_0 = 1;
	}

IL_0013:
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		Stream_t506 * L_5 = (__this->___baseStream__5);
		int64_t* L_6 = ___destinationPosition;
		NullCheck(L_5);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_5, (*((int64_t*)L_6)));
		ZipFile_t580 * L_7 = ___workFile;
		ZipUpdate_t611 * L_8 = ___update;
		NullCheck(L_7);
		ZipFile_WriteLocalEntryHeader_m3532(L_7, L_8, /*hidden argument*/NULL);
		int64_t* L_9 = ___destinationPosition;
		Stream_t506 * L_10 = (__this->___baseStream__5);
		NullCheck(L_10);
		int64_t L_11 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_10);
		*((int64_t*)(L_9)) = (int64_t)L_11;
	}

IL_0037:
	{
		V_1 = (((int64_t)((int64_t)0)));
		ZipUpdate_t611 * L_12 = ___update;
		NullCheck(L_12);
		ZipEntry_t591 * L_13 = ZipUpdate_get_Entry_m3419(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		int64_t L_14 = ZipEntry_get_Offset_m3260(L_13, /*hidden argument*/NULL);
		V_2 = ((int64_t)((int64_t)L_14+(int64_t)(((int64_t)((int64_t)((int32_t)26))))));
		Stream_t506 * L_15 = (__this->___baseStream__5);
		int64_t L_16 = V_2;
		NullCheck(L_15);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_15, L_16, 0);
		uint16_t L_17 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_3 = L_17;
		uint16_t L_18 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_4 = L_18;
		Stream_t506 * L_19 = (__this->___baseStream__5);
		NullCheck(L_19);
		int64_t L_20 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_19);
		uint32_t L_21 = V_3;
		uint32_t L_22 = V_4;
		V_1 = ((int64_t)((int64_t)((int64_t)((int64_t)L_20+(int64_t)(((int64_t)((uint64_t)L_21)))))+(int64_t)(((int64_t)((uint64_t)L_22)))));
		bool L_23 = V_0;
		if (!L_23)
		{
			goto IL_009f;
		}
	}
	{
		int64_t* L_24 = ___destinationPosition;
		int64_t* L_25 = L_24;
		int64_t L_26 = V_1;
		int64_t L_27 = V_2;
		ZipUpdate_t611 * L_28 = ___update;
		NullCheck(L_28);
		ZipEntry_t591 * L_29 = ZipUpdate_get_Entry_m3419(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		int64_t L_30 = ZipEntry_get_CompressedSize_m3282(L_29, /*hidden argument*/NULL);
		ZipUpdate_t611 * L_31 = ___update;
		int32_t L_32 = ZipFile_GetDescriptorSize_m3540(__this, L_31, /*hidden argument*/NULL);
		*((int64_t*)(L_25)) = (int64_t)((int64_t)((int64_t)(*((int64_t*)L_25))+(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_26-(int64_t)L_27))+(int64_t)(((int64_t)((int64_t)((int32_t)26))))))+(int64_t)L_30))+(int64_t)(((int64_t)((int64_t)L_32)))))));
		return;
	}

IL_009f:
	{
		ZipUpdate_t611 * L_33 = ___update;
		NullCheck(L_33);
		ZipEntry_t591 * L_34 = ZipUpdate_get_Entry_m3419(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		int64_t L_35 = ZipEntry_get_CompressedSize_m3282(L_34, /*hidden argument*/NULL);
		if ((((int64_t)L_35) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00bf;
		}
	}
	{
		ZipUpdate_t611 * L_36 = ___update;
		Stream_t506 * L_37 = (__this->___baseStream__5);
		int64_t* L_38 = ___destinationPosition;
		ZipFile_CopyEntryDataDirect_m3542(__this, L_36, L_37, 0, L_38, (&V_1), /*hidden argument*/NULL);
	}

IL_00bf:
	{
		ZipUpdate_t611 * L_39 = ___update;
		Stream_t506 * L_40 = (__this->___baseStream__5);
		int64_t* L_41 = ___destinationPosition;
		int64_t L_42 = V_1;
		ZipFile_CopyDescriptorBytesDirect_m3541(__this, L_39, L_40, L_41, L_42, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CopyEntry(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.ZipFile/ZipUpdate)
extern "C" void ZipFile_CopyEntry_m3549 (ZipFile_t580 * __this, ZipFile_t580 * ___workFile, ZipUpdate_t611 * ___update, const MethodInfo* method)
{
	int64_t V_0 = 0;
	uint32_t V_1 = 0;
	uint32_t V_2 = 0;
	{
		ZipFile_t580 * L_0 = ___workFile;
		ZipUpdate_t611 * L_1 = ___update;
		NullCheck(L_0);
		ZipFile_WriteLocalEntryHeader_m3532(L_0, L_1, /*hidden argument*/NULL);
		ZipUpdate_t611 * L_2 = ___update;
		NullCheck(L_2);
		ZipEntry_t591 * L_3 = ZipUpdate_get_Entry_m3419(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int64_t L_4 = ZipEntry_get_CompressedSize_m3282(L_3, /*hidden argument*/NULL);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0072;
		}
	}
	{
		ZipUpdate_t611 * L_5 = ___update;
		NullCheck(L_5);
		ZipEntry_t591 * L_6 = ZipUpdate_get_Entry_m3419(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int64_t L_7 = ZipEntry_get_Offset_m3260(L_6, /*hidden argument*/NULL);
		V_0 = ((int64_t)((int64_t)L_7+(int64_t)(((int64_t)((int64_t)((int32_t)26))))));
		Stream_t506 * L_8 = (__this->___baseStream__5);
		int64_t L_9 = V_0;
		NullCheck(L_8);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_8, L_9, 0);
		uint16_t L_10 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_1 = L_10;
		uint16_t L_11 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_2 = L_11;
		Stream_t506 * L_12 = (__this->___baseStream__5);
		uint32_t L_13 = V_1;
		uint32_t L_14 = V_2;
		NullCheck(L_12);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_12, (((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)((int32_t)L_13+(int32_t)L_14)))))))), 1);
		ZipUpdate_t611 * L_15 = ___update;
		ZipFile_t580 * L_16 = ___workFile;
		NullCheck(L_16);
		Stream_t506 * L_17 = (L_16->___baseStream__5);
		Stream_t506 * L_18 = (__this->___baseStream__5);
		ZipUpdate_t611 * L_19 = ___update;
		NullCheck(L_19);
		ZipEntry_t591 * L_20 = ZipUpdate_get_Entry_m3419(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int64_t L_21 = ZipEntry_get_CompressedSize_m3282(L_20, /*hidden argument*/NULL);
		ZipFile_CopyBytes_m3539(__this, L_15, L_17, L_18, L_21, 0, /*hidden argument*/NULL);
	}

IL_0072:
	{
		ZipUpdate_t611 * L_22 = ___update;
		ZipFile_t580 * L_23 = ___workFile;
		NullCheck(L_23);
		Stream_t506 * L_24 = (L_23->___baseStream__5);
		Stream_t506 * L_25 = (__this->___baseStream__5);
		ZipFile_CopyDescriptorBytes_m3538(__this, L_22, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Reopen(System.IO.Stream)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral475;
extern "C" void ZipFile_Reopen_m3550 (ZipFile_t580 * __this, Stream_t506 * ___source, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral475 = il2cpp_codegen_string_literal_from_index(475);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t506 * L_0 = ___source;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ZipException_t594 * L_1 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_1, _stringLiteral475, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		__this->___isNewArchive__10 = 0;
		Stream_t506 * L_2 = ___source;
		__this->___baseStream__5 = L_2;
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Reopen()
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral476;
extern "C" void ZipFile_Reopen_m3551 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		_stringLiteral476 = il2cpp_codegen_string_literal_from_index(476);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ZipFile_get_Name_m3487(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral476, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		String_t* L_2 = ZipFile_get_Name_m3487(__this, /*hidden argument*/NULL);
		FileStream_t649 * L_3 = File_OpenRead_m3735(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		ZipFile_Reopen_m3550(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::UpdateCommentOnly()
extern TypeInfo* IArchiveStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral477;
extern "C" void ZipFile_UpdateCommentOnly_m3552 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IArchiveStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	ZipHelperStream_t628 * V_1 = {0};
	Stream_t506 * V_2 = {0};
	int64_t V_3 = 0;
	ByteU5BU5D_t129* V_4 = {0};
	ZipHelperStream_t628 * V_5 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		V_0 = L_1;
		V_1 = (ZipHelperStream_t628 *)NULL;
		Object_t * L_2 = (__this->___archiveStorage__15);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.FileUpdateMode ICSharpCode.SharpZipLib.Zip.IArchiveStorage::get_UpdateMode() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_2);
		if (L_3)
		{
			goto IL_004f;
		}
	}
	{
		Object_t * L_4 = (__this->___archiveStorage__15);
		Stream_t506 * L_5 = (__this->___baseStream__5);
		NullCheck(L_4);
		Stream_t506 * L_6 = (Stream_t506 *)InterfaceFuncInvoker1< Stream_t506 *, Stream_t506 * >::Invoke(3 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IArchiveStorage::MakeTemporaryCopy(System.IO.Stream) */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_4, L_5);
		V_2 = L_6;
		Stream_t506 * L_7 = V_2;
		ZipHelperStream_t628 * L_8 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m3603(L_8, L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		ZipHelperStream_t628 * L_9 = V_1;
		NullCheck(L_9);
		ZipHelperStream_set_IsStreamOwner_m3605(L_9, 1, /*hidden argument*/NULL);
		Stream_t506 * L_10 = (__this->___baseStream__5);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_10);
		__this->___baseStream__5 = (Stream_t506 *)NULL;
		goto IL_00a0;
	}

IL_004f:
	{
		Object_t * L_11 = (__this->___archiveStorage__15);
		NullCheck(L_11);
		int32_t L_12 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.FileUpdateMode ICSharpCode.SharpZipLib.Zip.IArchiveStorage::get_UpdateMode() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		Object_t * L_13 = (__this->___archiveStorage__15);
		Stream_t506 * L_14 = (__this->___baseStream__5);
		NullCheck(L_13);
		Stream_t506 * L_15 = (Stream_t506 *)InterfaceFuncInvoker1< Stream_t506 *, Stream_t506 * >::Invoke(4 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IArchiveStorage::OpenForDirectUpdate(System.IO.Stream) */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_13, L_14);
		__this->___baseStream__5 = L_15;
		Stream_t506 * L_16 = (__this->___baseStream__5);
		ZipHelperStream_t628 * L_17 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m3603(L_17, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		goto IL_00a0;
	}

IL_0082:
	{
		Stream_t506 * L_18 = (__this->___baseStream__5);
		NullCheck(L_18);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_18);
		__this->___baseStream__5 = (Stream_t506 *)NULL;
		String_t* L_19 = ZipFile_get_Name_m3487(__this, /*hidden argument*/NULL);
		ZipHelperStream_t628 * L_20 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m3602(L_20, L_19, /*hidden argument*/NULL);
		V_1 = L_20;
	}

IL_00a0:
	{
		ZipHelperStream_t628 * L_21 = V_1;
		V_5 = L_21;
	}

IL_00a3:
	try
	{ // begin try (depth: 1)
		{
			ZipHelperStream_t628 * L_22 = V_1;
			int64_t L_23 = V_0;
			NullCheck(L_22);
			int64_t L_24 = ZipHelperStream_LocateBlockWithSignature_m3620(L_22, ((int32_t)101010256), L_23, ((int32_t)22), ((int32_t)65535), /*hidden argument*/NULL);
			V_3 = L_24;
			int64_t L_25 = V_3;
			if ((((int64_t)L_25) >= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_00c7;
			}
		}

IL_00bc:
		{
			ZipException_t594 * L_26 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_26, _stringLiteral477, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
		}

IL_00c7:
		{
			ZipHelperStream_t628 * L_27 = V_1;
			ZipHelperStream_t628 * L_28 = L_27;
			NullCheck(L_28);
			int64_t L_29 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_28);
			NullCheck(L_28);
			VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_28, ((int64_t)((int64_t)L_29+(int64_t)(((int64_t)((int64_t)((int32_t)16)))))));
			ZipString_t613 * L_30 = (__this->___newComment__20);
			NullCheck(L_30);
			ByteU5BU5D_t129* L_31 = ZipString_get_RawComment_m3432(L_30, /*hidden argument*/NULL);
			V_4 = L_31;
			ZipHelperStream_t628 * L_32 = V_1;
			ByteU5BU5D_t129* L_33 = V_4;
			NullCheck(L_33);
			NullCheck(L_32);
			ZipHelperStream_WriteLEShort_m3626(L_32, (((int32_t)((int32_t)(((Array_t *)L_33)->max_length)))), /*hidden argument*/NULL);
			ZipHelperStream_t628 * L_34 = V_1;
			ByteU5BU5D_t129* L_35 = V_4;
			ByteU5BU5D_t129* L_36 = V_4;
			NullCheck(L_36);
			NullCheck(L_34);
			VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_34, L_35, 0, (((int32_t)((int32_t)(((Array_t *)L_36)->max_length)))));
			ZipHelperStream_t628 * L_37 = V_1;
			ZipHelperStream_t628 * L_38 = V_1;
			NullCheck(L_38);
			int64_t L_39 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_38);
			NullCheck(L_37);
			VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_37, L_39);
			IL2CPP_LEAVE(0x115, FINALLY_0109);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_0109;
	}

FINALLY_0109:
	{ // begin finally (depth: 1)
		{
			ZipHelperStream_t628 * L_40 = V_5;
			if (!L_40)
			{
				goto IL_0114;
			}
		}

IL_010d:
		{
			ZipHelperStream_t628 * L_41 = V_5;
			NullCheck(L_41);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_41);
		}

IL_0114:
		{
			IL2CPP_END_FINALLY(265)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(265)
	{
		IL2CPP_JUMP_TBL(0x115, IL_0115)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_0115:
	{
		Object_t * L_42 = (__this->___archiveStorage__15);
		NullCheck(L_42);
		int32_t L_43 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.FileUpdateMode ICSharpCode.SharpZipLib.Zip.IArchiveStorage::get_UpdateMode() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_42);
		if (L_43)
		{
			goto IL_0134;
		}
	}
	{
		Object_t * L_44 = (__this->___archiveStorage__15);
		NullCheck(L_44);
		Stream_t506 * L_45 = (Stream_t506 *)InterfaceFuncInvoker0< Stream_t506 * >::Invoke(2 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IArchiveStorage::ConvertTemporaryToFinal() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_44);
		ZipFile_Reopen_m3550(__this, L_45, /*hidden argument*/NULL);
		return;
	}

IL_0134:
	{
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::RunUpdates()
extern TypeInfo* IArchiveStorage_t619_il2cpp_TypeInfo_var;
extern TypeInfo* UpdateComparer_t610_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* ZipUpdate_t611_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t159_il2cpp_TypeInfo_var;
extern "C" void ZipFile_RunUpdates_m3553 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IArchiveStorage_t619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(459);
		UpdateComparer_t610_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(463);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		ZipUpdate_t611_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(442);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		Exception_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int64_t V_4 = 0;
	ZipFile_t580 * V_5 = {0};
	ZipUpdate_t611 * V_6 = {0};
	int64_t V_7 = 0;
	ZipUpdate_t611 * V_8 = {0};
	ByteU5BU5D_t129* V_9 = {0};
	ZipHelperStream_t628 * V_10 = {0};
	ZipUpdate_t611 * V_11 = {0};
	Object_t * V_12 = {0};
	int32_t V_13 = {0};
	Object_t * V_14 = {0};
	Object_t * V_15 = {0};
	Object_t * V_16 = {0};
	Object_t * V_17 = {0};
	Object_t * V_18 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ByteU5BU5D_t129* G_B40_0 = {0};
	{
		V_0 = (((int64_t)((int64_t)0)));
		V_1 = (((int64_t)((int64_t)0)));
		V_2 = 1;
		V_3 = 0;
		V_4 = (((int64_t)((int64_t)0)));
		bool L_0 = ZipFile_get_IsNewArchive_m3485(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		V_5 = __this;
		ZipFile_t580 * L_1 = V_5;
		NullCheck(L_1);
		Stream_t506 * L_2 = (L_1->___baseStream__5);
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_2, (((int64_t)((int64_t)0))));
		V_3 = 1;
		goto IL_009c;
	}

IL_002b:
	{
		Object_t * L_3 = (__this->___archiveStorage__15);
		NullCheck(L_3);
		int32_t L_4 = (int32_t)InterfaceFuncInvoker0< int32_t >::Invoke(0 /* ICSharpCode.SharpZipLib.Zip.FileUpdateMode ICSharpCode.SharpZipLib.Zip.IArchiveStorage::get_UpdateMode() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_3);
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_005e;
		}
	}
	{
		V_5 = __this;
		ZipFile_t580 * L_5 = V_5;
		NullCheck(L_5);
		Stream_t506 * L_6 = (L_5->___baseStream__5);
		NullCheck(L_6);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_6, (((int64_t)((int64_t)0))));
		V_3 = 1;
		ArrayList_t530 * L_7 = (__this->___updates__12);
		UpdateComparer_t610 * L_8 = (UpdateComparer_t610 *)il2cpp_codegen_object_new (UpdateComparer_t610_il2cpp_TypeInfo_var);
		UpdateComparer__ctor_m3410(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		VirtActionInvoker1< Object_t * >::Invoke(46 /* System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer) */, L_7, L_8);
		goto IL_009c;
	}

IL_005e:
	{
		Object_t * L_9 = (__this->___archiveStorage__15);
		NullCheck(L_9);
		Stream_t506 * L_10 = (Stream_t506 *)InterfaceFuncInvoker0< Stream_t506 * >::Invoke(1 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IArchiveStorage::GetTemporaryOutput() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_9);
		ZipFile_t580 * L_11 = ZipFile_Create_m3481(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		ZipFile_t580 * L_12 = V_5;
		int32_t L_13 = ZipFile_get_UseZip64_m3506(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ZipFile_set_UseZip64_m3507(L_12, L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_14 = (__this->___key_9);
		if (!L_14)
		{
			goto IL_009c;
		}
	}
	{
		ZipFile_t580 * L_15 = V_5;
		ByteU5BU5D_t129* L_16 = (__this->___key_9);
		NullCheck(L_16);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(5 /* System.Object System.Array::Clone() */, L_16);
		NullCheck(L_15);
		L_15->___key_9 = ((ByteU5BU5D_t129*)Castclass(L_17, ByteU5BU5D_t129_il2cpp_TypeInfo_var));
	}

IL_009c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				ArrayList_t530 * L_18 = (__this->___updates__12);
				NullCheck(L_18);
				Object_t * L_19 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_18);
				V_12 = L_19;
			}

IL_00a9:
			try
			{ // begin try (depth: 3)
				{
					goto IL_013b;
				}

IL_00ae:
				{
					Object_t * L_20 = V_12;
					NullCheck(L_20);
					Object_t * L_21 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_20);
					V_6 = ((ZipUpdate_t611 *)CastclassClass(L_21, ZipUpdate_t611_il2cpp_TypeInfo_var));
					ZipUpdate_t611 * L_22 = V_6;
					if (!L_22)
					{
						goto IL_013b;
					}
				}

IL_00c0:
				{
					ZipUpdate_t611 * L_23 = V_6;
					NullCheck(L_23);
					int32_t L_24 = ZipUpdate_get_Command_m3421(L_23, /*hidden argument*/NULL);
					V_13 = L_24;
					int32_t L_25 = V_13;
					if (L_25 == 0)
					{
						goto IL_00de;
					}
					if (L_25 == 1)
					{
						goto IL_00fb;
					}
					if (L_25 == 2)
					{
						goto IL_0107;
					}
				}

IL_00dc:
				{
					goto IL_013b;
				}

IL_00de:
				{
					bool L_26 = V_3;
					if (!L_26)
					{
						goto IL_00ef;
					}
				}

IL_00e1:
				{
					ZipFile_t580 * L_27 = V_5;
					ZipUpdate_t611 * L_28 = V_6;
					ZipFile_CopyEntryDirect_m3548(__this, L_27, L_28, (&V_4), /*hidden argument*/NULL);
					goto IL_013b;
				}

IL_00ef:
				{
					ZipFile_t580 * L_29 = V_5;
					ZipUpdate_t611 * L_30 = V_6;
					ZipFile_CopyEntry_m3549(__this, L_29, L_30, /*hidden argument*/NULL);
					goto IL_013b;
				}

IL_00fb:
				{
					ZipFile_t580 * L_31 = V_5;
					ZipUpdate_t611 * L_32 = V_6;
					ZipFile_ModifyEntry_m3547(__this, L_31, L_32, /*hidden argument*/NULL);
					goto IL_013b;
				}

IL_0107:
				{
					bool L_33 = ZipFile_get_IsNewArchive_m3485(__this, /*hidden argument*/NULL);
					if (L_33)
					{
						goto IL_0120;
					}
				}

IL_010f:
				{
					bool L_34 = V_3;
					if (!L_34)
					{
						goto IL_0120;
					}
				}

IL_0112:
				{
					ZipFile_t580 * L_35 = V_5;
					NullCheck(L_35);
					Stream_t506 * L_36 = (L_35->___baseStream__5);
					int64_t L_37 = V_4;
					NullCheck(L_36);
					VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_36, L_37);
				}

IL_0120:
				{
					ZipFile_t580 * L_38 = V_5;
					ZipUpdate_t611 * L_39 = V_6;
					ZipFile_AddEntry_m3546(__this, L_38, L_39, /*hidden argument*/NULL);
					bool L_40 = V_3;
					if (!L_40)
					{
						goto IL_013b;
					}
				}

IL_012d:
				{
					ZipFile_t580 * L_41 = V_5;
					NullCheck(L_41);
					Stream_t506 * L_42 = (L_41->___baseStream__5);
					NullCheck(L_42);
					int64_t L_43 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_42);
					V_4 = L_43;
				}

IL_013b:
				{
					Object_t * L_44 = V_12;
					NullCheck(L_44);
					bool L_45 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_44);
					if (L_45)
					{
						goto IL_00ae;
					}
				}

IL_0147:
				{
					IL2CPP_LEAVE(0x15E, FINALLY_0149);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t159 *)e.ex;
				goto FINALLY_0149;
			}

FINALLY_0149:
			{ // begin finally (depth: 3)
				{
					Object_t * L_46 = V_12;
					V_14 = ((Object_t *)IsInst(L_46, IDisposable_t160_il2cpp_TypeInfo_var));
					Object_t * L_47 = V_14;
					if (!L_47)
					{
						goto IL_015d;
					}
				}

IL_0156:
				{
					Object_t * L_48 = V_14;
					NullCheck(L_48);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_48);
				}

IL_015d:
				{
					IL2CPP_END_FINALLY(329)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(329)
			{
				IL2CPP_JUMP_TBL(0x15E, IL_015e)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
			}

IL_015e:
			{
				bool L_49 = ZipFile_get_IsNewArchive_m3485(__this, /*hidden argument*/NULL);
				if (L_49)
				{
					goto IL_0177;
				}
			}

IL_0166:
			{
				bool L_50 = V_3;
				if (!L_50)
				{
					goto IL_0177;
				}
			}

IL_0169:
			{
				ZipFile_t580 * L_51 = V_5;
				NullCheck(L_51);
				Stream_t506 * L_52 = (L_51->___baseStream__5);
				int64_t L_53 = V_4;
				NullCheck(L_52);
				VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_52, L_53);
			}

IL_0177:
			{
				ZipFile_t580 * L_54 = V_5;
				NullCheck(L_54);
				Stream_t506 * L_55 = (L_54->___baseStream__5);
				NullCheck(L_55);
				int64_t L_56 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_55);
				V_7 = L_56;
				ArrayList_t530 * L_57 = (__this->___updates__12);
				NullCheck(L_57);
				Object_t * L_58 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_57);
				V_15 = L_58;
			}

IL_0192:
			try
			{ // begin try (depth: 3)
				{
					goto IL_01b8;
				}

IL_0194:
				{
					Object_t * L_59 = V_15;
					NullCheck(L_59);
					Object_t * L_60 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_59);
					V_8 = ((ZipUpdate_t611 *)CastclassClass(L_60, ZipUpdate_t611_il2cpp_TypeInfo_var));
					ZipUpdate_t611 * L_61 = V_8;
					if (!L_61)
					{
						goto IL_01b8;
					}
				}

IL_01a6:
				{
					int64_t L_62 = V_0;
					ZipFile_t580 * L_63 = V_5;
					ZipUpdate_t611 * L_64 = V_8;
					NullCheck(L_64);
					ZipEntry_t591 * L_65 = ZipUpdate_get_OutEntry_m3420(L_64, /*hidden argument*/NULL);
					NullCheck(L_63);
					int32_t L_66 = ZipFile_WriteCentralDirectoryHeader_m3533(L_63, L_65, /*hidden argument*/NULL);
					V_0 = ((int64_t)((int64_t)L_62+(int64_t)(((int64_t)((int64_t)L_66)))));
				}

IL_01b8:
				{
					Object_t * L_67 = V_15;
					NullCheck(L_67);
					bool L_68 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_67);
					if (L_68)
					{
						goto IL_0194;
					}
				}

IL_01c1:
				{
					IL2CPP_LEAVE(0x1D8, FINALLY_01c3);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t159 *)e.ex;
				goto FINALLY_01c3;
			}

FINALLY_01c3:
			{ // begin finally (depth: 3)
				{
					Object_t * L_69 = V_15;
					V_16 = ((Object_t *)IsInst(L_69, IDisposable_t160_il2cpp_TypeInfo_var));
					Object_t * L_70 = V_16;
					if (!L_70)
					{
						goto IL_01d7;
					}
				}

IL_01d0:
				{
					Object_t * L_71 = V_16;
					NullCheck(L_71);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_71);
				}

IL_01d7:
				{
					IL2CPP_END_FINALLY(451)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(451)
			{
				IL2CPP_JUMP_TBL(0x1D8, IL_01d8)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
			}

IL_01d8:
			{
				ZipString_t613 * L_72 = (__this->___newComment__20);
				if (L_72)
				{
					goto IL_01ed;
				}
			}

IL_01e0:
			{
				String_t* L_73 = (__this->___comment__4);
				IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
				ByteU5BU5D_t129* L_74 = ZipConstants_ConvertToArray_m3241(NULL /*static, unused*/, L_73, /*hidden argument*/NULL);
				G_B40_0 = L_74;
				goto IL_01f8;
			}

IL_01ed:
			{
				ZipString_t613 * L_75 = (__this->___newComment__20);
				NullCheck(L_75);
				ByteU5BU5D_t129* L_76 = ZipString_get_RawComment_m3432(L_75, /*hidden argument*/NULL);
				G_B40_0 = L_76;
			}

IL_01f8:
			{
				V_9 = G_B40_0;
				ZipFile_t580 * L_77 = V_5;
				NullCheck(L_77);
				Stream_t506 * L_78 = (L_77->___baseStream__5);
				ZipHelperStream_t628 * L_79 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
				ZipHelperStream__ctor_m3603(L_79, L_78, /*hidden argument*/NULL);
				V_10 = L_79;
			}

IL_0208:
			try
			{ // begin try (depth: 3)
				ZipHelperStream_t628 * L_80 = V_10;
				int64_t L_81 = (__this->___updateCount__13);
				int64_t L_82 = V_0;
				int64_t L_83 = V_7;
				ByteU5BU5D_t129* L_84 = V_9;
				NullCheck(L_80);
				ZipHelperStream_WriteEndOfCentralDirectory_m3622(L_80, L_81, L_82, L_83, L_84, /*hidden argument*/NULL);
				IL2CPP_LEAVE(0x228, FINALLY_021c);
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t159 *)e.ex;
				goto FINALLY_021c;
			}

FINALLY_021c:
			{ // begin finally (depth: 3)
				{
					ZipHelperStream_t628 * L_85 = V_10;
					if (!L_85)
					{
						goto IL_0227;
					}
				}

IL_0220:
				{
					ZipHelperStream_t628 * L_86 = V_10;
					NullCheck(L_86);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_86);
				}

IL_0227:
				{
					IL2CPP_END_FINALLY(540)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(540)
			{
				IL2CPP_JUMP_TBL(0x228, IL_0228)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
			}

IL_0228:
			{
				ZipFile_t580 * L_87 = V_5;
				NullCheck(L_87);
				Stream_t506 * L_88 = (L_87->___baseStream__5);
				NullCheck(L_88);
				int64_t L_89 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_88);
				V_1 = L_89;
				ArrayList_t530 * L_90 = (__this->___updates__12);
				NullCheck(L_90);
				Object_t * L_91 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_90);
				V_17 = L_91;
			}

IL_0242:
			try
			{ // begin try (depth: 3)
				{
					goto IL_031a;
				}

IL_0247:
				{
					Object_t * L_92 = V_17;
					NullCheck(L_92);
					Object_t * L_93 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_92);
					V_11 = ((ZipUpdate_t611 *)CastclassClass(L_93, ZipUpdate_t611_il2cpp_TypeInfo_var));
					ZipUpdate_t611 * L_94 = V_11;
					if (!L_94)
					{
						goto IL_031a;
					}
				}

IL_025c:
				{
					ZipUpdate_t611 * L_95 = V_11;
					NullCheck(L_95);
					int64_t L_96 = ZipUpdate_get_CrcPatchOffset_m3425(L_95, /*hidden argument*/NULL);
					if ((((int64_t)L_96) <= ((int64_t)(((int64_t)((int64_t)0))))))
					{
						goto IL_029e;
					}
				}

IL_0267:
				{
					ZipUpdate_t611 * L_97 = V_11;
					NullCheck(L_97);
					ZipEntry_t591 * L_98 = ZipUpdate_get_OutEntry_m3420(L_97, /*hidden argument*/NULL);
					NullCheck(L_98);
					int64_t L_99 = ZipEntry_get_CompressedSize_m3282(L_98, /*hidden argument*/NULL);
					if ((((int64_t)L_99) <= ((int64_t)(((int64_t)((int64_t)0))))))
					{
						goto IL_029e;
					}
				}

IL_0277:
				{
					ZipFile_t580 * L_100 = V_5;
					NullCheck(L_100);
					Stream_t506 * L_101 = (L_100->___baseStream__5);
					ZipUpdate_t611 * L_102 = V_11;
					NullCheck(L_102);
					int64_t L_103 = ZipUpdate_get_CrcPatchOffset_m3425(L_102, /*hidden argument*/NULL);
					NullCheck(L_101);
					VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_101, L_103);
					ZipFile_t580 * L_104 = V_5;
					ZipUpdate_t611 * L_105 = V_11;
					NullCheck(L_105);
					ZipEntry_t591 * L_106 = ZipUpdate_get_OutEntry_m3420(L_105, /*hidden argument*/NULL);
					NullCheck(L_106);
					int64_t L_107 = ZipEntry_get_Crc_m3284(L_106, /*hidden argument*/NULL);
					NullCheck(L_104);
					ZipFile_WriteLEInt_m3528(L_104, (((int32_t)((int32_t)L_107))), /*hidden argument*/NULL);
				}

IL_029e:
				{
					ZipUpdate_t611 * L_108 = V_11;
					NullCheck(L_108);
					int64_t L_109 = ZipUpdate_get_SizePatchOffset_m3423(L_108, /*hidden argument*/NULL);
					if ((((int64_t)L_109) <= ((int64_t)(((int64_t)((int64_t)0))))))
					{
						goto IL_031a;
					}
				}

IL_02a9:
				{
					ZipFile_t580 * L_110 = V_5;
					NullCheck(L_110);
					Stream_t506 * L_111 = (L_110->___baseStream__5);
					ZipUpdate_t611 * L_112 = V_11;
					NullCheck(L_112);
					int64_t L_113 = ZipUpdate_get_SizePatchOffset_m3423(L_112, /*hidden argument*/NULL);
					NullCheck(L_111);
					VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_111, L_113);
					ZipUpdate_t611 * L_114 = V_11;
					NullCheck(L_114);
					ZipEntry_t591 * L_115 = ZipUpdate_get_OutEntry_m3420(L_114, /*hidden argument*/NULL);
					NullCheck(L_115);
					bool L_116 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_115, /*hidden argument*/NULL);
					if (!L_116)
					{
						goto IL_02f2;
					}
				}

IL_02ca:
				{
					ZipFile_t580 * L_117 = V_5;
					ZipUpdate_t611 * L_118 = V_11;
					NullCheck(L_118);
					ZipEntry_t591 * L_119 = ZipUpdate_get_OutEntry_m3420(L_118, /*hidden argument*/NULL);
					NullCheck(L_119);
					int64_t L_120 = ZipEntry_get_Size_m3280(L_119, /*hidden argument*/NULL);
					NullCheck(L_117);
					ZipFile_WriteLeLong_m3530(L_117, L_120, /*hidden argument*/NULL);
					ZipFile_t580 * L_121 = V_5;
					ZipUpdate_t611 * L_122 = V_11;
					NullCheck(L_122);
					ZipEntry_t591 * L_123 = ZipUpdate_get_OutEntry_m3420(L_122, /*hidden argument*/NULL);
					NullCheck(L_123);
					int64_t L_124 = ZipEntry_get_CompressedSize_m3282(L_123, /*hidden argument*/NULL);
					NullCheck(L_121);
					ZipFile_WriteLeLong_m3530(L_121, L_124, /*hidden argument*/NULL);
					goto IL_031a;
				}

IL_02f2:
				{
					ZipFile_t580 * L_125 = V_5;
					ZipUpdate_t611 * L_126 = V_11;
					NullCheck(L_126);
					ZipEntry_t591 * L_127 = ZipUpdate_get_OutEntry_m3420(L_126, /*hidden argument*/NULL);
					NullCheck(L_127);
					int64_t L_128 = ZipEntry_get_CompressedSize_m3282(L_127, /*hidden argument*/NULL);
					NullCheck(L_125);
					ZipFile_WriteLEInt_m3528(L_125, (((int32_t)((int32_t)L_128))), /*hidden argument*/NULL);
					ZipFile_t580 * L_129 = V_5;
					ZipUpdate_t611 * L_130 = V_11;
					NullCheck(L_130);
					ZipEntry_t591 * L_131 = ZipUpdate_get_OutEntry_m3420(L_130, /*hidden argument*/NULL);
					NullCheck(L_131);
					int64_t L_132 = ZipEntry_get_Size_m3280(L_131, /*hidden argument*/NULL);
					NullCheck(L_129);
					ZipFile_WriteLEInt_m3528(L_129, (((int32_t)((int32_t)L_132))), /*hidden argument*/NULL);
				}

IL_031a:
				{
					Object_t * L_133 = V_17;
					NullCheck(L_133);
					bool L_134 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_133);
					if (L_134)
					{
						goto IL_0247;
					}
				}

IL_0326:
				{
					IL2CPP_LEAVE(0x33D, FINALLY_0328);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t159 *)e.ex;
				goto FINALLY_0328;
			}

FINALLY_0328:
			{ // begin finally (depth: 3)
				{
					Object_t * L_135 = V_17;
					V_18 = ((Object_t *)IsInst(L_135, IDisposable_t160_il2cpp_TypeInfo_var));
					Object_t * L_136 = V_18;
					if (!L_136)
					{
						goto IL_033c;
					}
				}

IL_0335:
				{
					Object_t * L_137 = V_18;
					NullCheck(L_137);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_137);
				}

IL_033c:
				{
					IL2CPP_END_FINALLY(808)
				}
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(808)
			{
				IL2CPP_JUMP_TBL(0x33D, IL_033d)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
			}

IL_033d:
			{
				goto IL_0344;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t159 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t159_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_033f;
			throw e;
		}

CATCH_033f:
		{ // begin catch(System.Exception)
			V_2 = 0;
			goto IL_0344;
		} // end catch (depth: 2)

IL_0344:
		{
			IL2CPP_LEAVE(0x36F, FINALLY_0346);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_0346;
	}

FINALLY_0346:
	{ // begin finally (depth: 1)
		{
			bool L_138 = V_3;
			if (!L_138)
			{
				goto IL_0367;
			}
		}

IL_0349:
		{
			bool L_139 = V_2;
			if (!L_139)
			{
				goto IL_036e;
			}
		}

IL_034c:
		{
			ZipFile_t580 * L_140 = V_5;
			NullCheck(L_140);
			Stream_t506 * L_141 = (L_140->___baseStream__5);
			NullCheck(L_141);
			VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Flush() */, L_141);
			ZipFile_t580 * L_142 = V_5;
			NullCheck(L_142);
			Stream_t506 * L_143 = (L_142->___baseStream__5);
			int64_t L_144 = V_1;
			NullCheck(L_143);
			VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_143, L_144);
			goto IL_036e;
		}

IL_0367:
		{
			ZipFile_t580 * L_145 = V_5;
			NullCheck(L_145);
			ZipFile_Close_m3479(L_145, /*hidden argument*/NULL);
		}

IL_036e:
		{
			IL2CPP_END_FINALLY(838)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(838)
	{
		IL2CPP_JUMP_TBL(0x36F, IL_036f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_036f:
	{
		bool L_146 = V_2;
		if (!L_146)
		{
			goto IL_03ac;
		}
	}
	{
		bool L_147 = V_3;
		if (!L_147)
		{
			goto IL_038f;
		}
	}
	{
		__this->___isNewArchive__10 = 0;
		ZipFile_t580 * L_148 = V_5;
		NullCheck(L_148);
		Stream_t506 * L_149 = (L_148->___baseStream__5);
		NullCheck(L_149);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Flush() */, L_149);
		ZipFile_ReadEntries_m3562(__this, /*hidden argument*/NULL);
		return;
	}

IL_038f:
	{
		Stream_t506 * L_150 = (__this->___baseStream__5);
		NullCheck(L_150);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_150);
		Object_t * L_151 = (__this->___archiveStorage__15);
		NullCheck(L_151);
		Stream_t506 * L_152 = (Stream_t506 *)InterfaceFuncInvoker0< Stream_t506 * >::Invoke(2 /* System.IO.Stream ICSharpCode.SharpZipLib.Zip.IArchiveStorage::ConvertTemporaryToFinal() */, IArchiveStorage_t619_il2cpp_TypeInfo_var, L_151);
		ZipFile_Reopen_m3550(__this, L_152, /*hidden argument*/NULL);
		return;
	}

IL_03ac:
	{
		ZipFile_t580 * L_153 = V_5;
		NullCheck(L_153);
		ZipFile_Close_m3479(L_153, /*hidden argument*/NULL);
		bool L_154 = V_3;
		if (L_154)
		{
			goto IL_03cb;
		}
	}
	{
		ZipFile_t580 * L_155 = V_5;
		NullCheck(L_155);
		String_t* L_156 = ZipFile_get_Name_m3487(L_155, /*hidden argument*/NULL);
		if (!L_156)
		{
			goto IL_03cb;
		}
	}
	{
		ZipFile_t580 * L_157 = V_5;
		NullCheck(L_157);
		String_t* L_158 = ZipFile_get_Name_m3487(L_157, /*hidden argument*/NULL);
		File_Delete_m3736(NULL /*static, unused*/, L_158, /*hidden argument*/NULL);
	}

IL_03cb:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckUpdating()
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral478;
extern "C" void ZipFile_CheckUpdating_m3554 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		_stringLiteral478 = il2cpp_codegen_string_literal_from_index(478);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t530 * L_0 = (__this->___updates__12);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral478, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::System.IDisposable.Dispose()
extern "C" void ZipFile_System_IDisposable_Dispose_m3555 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		ZipFile_Close_m3479(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::DisposeInternal(System.Boolean)
extern TypeInfo* ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var;
extern "C" void ZipFile_DisposeInternal_m3556 (ZipFile_t580 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___isDisposed__2);
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		__this->___isDisposed__2 = 1;
		__this->___entries__8 = ((ZipEntryU5BU5D_t615*)SZArrayNew(ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var, 0));
		bool L_1 = ZipFile_get_IsStreamOwner_m3482(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Stream_t506 * L_2 = (__this->___baseStream__5);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		Stream_t506 * L_3 = (__this->___baseStream__5);
		Stream_t506 * L_4 = L_3;
		V_0 = L_4;
		Monitor_Enter_m3798(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		Stream_t506 * L_5 = (__this->___baseStream__5);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_5);
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		Stream_t506 * L_6 = V_0;
		Monitor_Exit_m3799(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_004c:
	{
		ZipFile_PostUpdateCleanup_m3534(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::Dispose(System.Boolean)
extern "C" void ZipFile_Dispose_m3557 (ZipFile_t580 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		ZipFile_DisposeInternal_m3556(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.UInt16 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUshort()
extern TypeInfo* EndOfStreamException_t653_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral479;
extern "C" uint16_t ZipFile_ReadLEUshort_m3558 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EndOfStreamException_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		_stringLiteral479 = il2cpp_codegen_string_literal_from_index(479);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		EndOfStreamException_t653 * L_3 = (EndOfStreamException_t653 *)il2cpp_codegen_object_new (EndOfStreamException_t653_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m3692(L_3, _stringLiteral479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001b:
	{
		Stream_t506 * L_4 = (__this->___baseStream__5);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		EndOfStreamException_t653 * L_7 = (EndOfStreamException_t653 *)il2cpp_codegen_object_new (EndOfStreamException_t653_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m3692(L_7, _stringLiteral479, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0036:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return (((int32_t)((uint16_t)((int32_t)((int32_t)(((int32_t)((uint16_t)L_8)))|(int32_t)(((int32_t)((uint16_t)((int32_t)((int32_t)L_9<<(int32_t)8))))))))));
	}
}
// System.UInt32 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUint()
extern "C" uint32_t ZipFile_ReadLEUint_m3559 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		uint16_t L_0 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		uint16_t L_1 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))));
	}
}
// System.UInt64 ICSharpCode.SharpZipLib.Zip.ZipFile::ReadLEUlong()
extern "C" uint64_t ZipFile_ReadLEUlong_m3560 (ZipFile_t580 * __this, const MethodInfo* method)
{
	{
		uint32_t L_0 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		uint32_t L_1 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		return ((int64_t)((int64_t)(((int64_t)((uint64_t)L_0)))|(int64_t)((int64_t)((int64_t)(((int64_t)((uint64_t)L_1)))<<(int32_t)((int32_t)32)))));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern "C" int64_t ZipFile_LocateBlockWithSignature_m3561 (ZipFile_t580 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		s_Il2CppMethodIntialized = true;
	}
	ZipHelperStream_t628 * V_0 = {0};
	int64_t V_1 = 0;
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		ZipHelperStream_t628 * L_1 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m3603(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		ZipHelperStream_t628 * L_2 = V_0;
		int32_t L_3 = ___signature;
		int64_t L_4 = ___endLocation;
		int32_t L_5 = ___minimumBlockSize;
		int32_t L_6 = ___maximumVariableData;
		NullCheck(L_2);
		int64_t L_7 = ZipHelperStream_LocateBlockWithSignature_m3620(L_2, L_3, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			ZipHelperStream_t628 * L_8 = V_0;
			if (!L_8)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			ZipHelperStream_t628 * L_9 = V_0;
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_9);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_JUMP_TBL(0x24, IL_0024)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_0024:
	{
		int64_t L_10 = V_1;
		return L_10;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::ReadEntries()
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* UInt64_t674_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t591_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral480;
extern Il2CppCodeGenString* _stringLiteral477;
extern Il2CppCodeGenString* _stringLiteral481;
extern Il2CppCodeGenString* _stringLiteral482;
extern Il2CppCodeGenString* _stringLiteral483;
extern Il2CppCodeGenString* _stringLiteral484;
extern "C" void ZipFile_ReadEntries_m3562 (ZipFile_t580 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		UInt64_t674_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(464);
		ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(446);
		ZipEntry_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		_stringLiteral480 = il2cpp_codegen_string_literal_from_index(480);
		_stringLiteral477 = il2cpp_codegen_string_literal_from_index(477);
		_stringLiteral481 = il2cpp_codegen_string_literal_from_index(481);
		_stringLiteral482 = il2cpp_codegen_string_literal_from_index(482);
		_stringLiteral483 = il2cpp_codegen_string_literal_from_index(483);
		_stringLiteral484 = il2cpp_codegen_string_literal_from_index(484);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	uint16_t V_1 = 0;
	uint16_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	int64_t V_6 = 0;
	uint32_t V_7 = 0;
	ByteU5BU5D_t129* V_8 = {0};
	bool V_9 = false;
	int64_t V_10 = 0;
	uint64_t V_11 = 0;
	int64_t V_12 = 0;
	uint64_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	uint32_t V_18 = 0;
	uint32_t V_19 = 0;
	int64_t V_20 = 0;
	int64_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	uint32_t V_25 = 0;
	int64_t V_26 = 0;
	ByteU5BU5D_t129* V_27 = {0};
	String_t* V_28 = {0};
	ZipEntry_t591 * V_29 = {0};
	ByteU5BU5D_t129* V_30 = {0};
	{
		Stream_t506 * L_0 = (__this->___baseStream__5);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		ZipException_t594 * L_2 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_2, _stringLiteral480, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0018:
	{
		Stream_t506 * L_3 = (__this->___baseStream__5);
		NullCheck(L_3);
		int64_t L_4 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		int64_t L_5 = ZipFile_LocateBlockWithSignature_m3561(__this, ((int32_t)101010256), L_4, ((int32_t)22), ((int32_t)65535), /*hidden argument*/NULL);
		V_0 = L_5;
		int64_t L_6 = V_0;
		if ((((int64_t)L_6) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0046;
		}
	}
	{
		ZipException_t594 * L_7 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_7, _stringLiteral477, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0046:
	{
		uint16_t L_8 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_1 = L_8;
		uint16_t L_9 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_2 = L_9;
		uint16_t L_10 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_3 = (((int64_t)((uint64_t)L_10)));
		uint16_t L_11 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_4 = (((int64_t)((uint64_t)L_11)));
		uint32_t L_12 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_5 = (((int64_t)((uint64_t)L_12)));
		uint32_t L_13 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_6 = (((int64_t)((uint64_t)L_13)));
		uint16_t L_14 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_7 = L_14;
		uint32_t L_15 = V_7;
		if ((!(((uint32_t)L_15) > ((uint32_t)0))))
		{
			goto IL_00aa;
		}
	}
	{
		uint32_t L_16 = V_7;
		V_8 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, (((uintptr_t)L_16))));
		Stream_t506 * L_17 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_18 = V_8;
		StreamUtils_ReadFully_m2705(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_19 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		String_t* L_20 = ZipConstants_ConvertToString_m3238(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		__this->___comment__4 = L_20;
		goto IL_00b5;
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_21 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___comment__4 = L_21;
	}

IL_00b5:
	{
		V_9 = 0;
		uint16_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)65535))))
		{
			goto IL_00ea;
		}
	}
	{
		uint16_t L_23 = V_2;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)65535))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_24 = V_3;
		if ((((int64_t)L_24) == ((int64_t)(((int64_t)((int64_t)((int32_t)65535)))))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_25 = V_4;
		if ((((int64_t)L_25) == ((int64_t)(((int64_t)((int64_t)((int32_t)65535)))))))
		{
			goto IL_00ea;
		}
	}
	{
		uint64_t L_26 = V_5;
		if ((((int64_t)L_26) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_00ea;
		}
	}
	{
		int64_t L_27 = V_6;
		if ((!(((uint64_t)L_27) == ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_01a1;
		}
	}

IL_00ea:
	{
		V_9 = 1;
		int64_t L_28 = V_0;
		int64_t L_29 = ZipFile_LocateBlockWithSignature_m3561(__this, ((int32_t)117853008), L_28, 0, ((int32_t)4096), /*hidden argument*/NULL);
		V_10 = L_29;
		int64_t L_30 = V_10;
		if ((((int64_t)L_30) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0112;
		}
	}
	{
		ZipException_t594 * L_31 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_31, _stringLiteral481, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}

IL_0112:
	{
		ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		uint64_t L_32 = ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		V_11 = L_32;
		ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		Stream_t506 * L_33 = (__this->___baseStream__5);
		uint64_t L_34 = V_11;
		NullCheck(L_33);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_33, L_34);
		uint32_t L_35 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_12 = (((int64_t)((uint64_t)L_35)));
		int64_t L_36 = V_12;
		if ((((int64_t)L_36) == ((int64_t)(((int64_t)((int64_t)((int32_t)101075792)))))))
		{
			goto IL_015f;
		}
	}
	{
		uint64_t L_37 = V_11;
		uint64_t L_38 = L_37;
		Object_t * L_39 = Box(UInt64_t674_il2cpp_TypeInfo_var, &L_38);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_40 = String_Format_m770(NULL /*static, unused*/, _stringLiteral482, L_39, /*hidden argument*/NULL);
		ZipException_t594 * L_41 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_41, L_40, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_41);
	}

IL_015f:
	{
		ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		uint64_t L_42 = ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		V_3 = L_42;
		uint64_t L_43 = ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		V_4 = L_43;
		uint64_t L_44 = ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		V_5 = L_44;
		uint64_t L_45 = ZipFile_ReadLEUlong_m3560(__this, /*hidden argument*/NULL);
		V_6 = L_45;
	}

IL_01a1:
	{
		uint64_t L_46 = V_3;
		if ((uint64_t)(L_46) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		__this->___entries__8 = ((ZipEntryU5BU5D_t615*)SZArrayNew(ZipEntryU5BU5D_t615_il2cpp_TypeInfo_var, (((intptr_t)L_46))));
		bool L_47 = V_9;
		if (L_47)
		{
			goto IL_01e2;
		}
	}
	{
		int64_t L_48 = V_6;
		int64_t L_49 = V_0;
		uint64_t L_50 = V_5;
		if ((((int64_t)L_48) >= ((int64_t)((int64_t)((int64_t)L_49-(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)4)))+(int64_t)L_50)))))))
		{
			goto IL_01e2;
		}
	}
	{
		int64_t L_51 = V_0;
		uint64_t L_52 = V_5;
		int64_t L_53 = V_6;
		__this->___offsetOfFirstEntry_7 = ((int64_t)((int64_t)L_51-(int64_t)((int64_t)((int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)4)))+(int64_t)L_52))+(int64_t)L_53))));
		int64_t L_54 = (__this->___offsetOfFirstEntry_7);
		if ((((int64_t)L_54) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_01e2;
		}
	}
	{
		ZipException_t594 * L_55 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_55, _stringLiteral483, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_55);
	}

IL_01e2:
	{
		Stream_t506 * L_56 = (__this->___baseStream__5);
		int64_t L_57 = (__this->___offsetOfFirstEntry_7);
		int64_t L_58 = V_6;
		NullCheck(L_56);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_56, ((int64_t)((int64_t)L_57+(int64_t)L_58)), 0);
		V_13 = (((int64_t)((int64_t)0)));
		goto IL_03ae;
	}

IL_0201:
	{
		uint32_t L_59 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_59) == ((int32_t)((int32_t)33639248))))
		{
			goto IL_0219;
		}
	}
	{
		ZipException_t594 * L_60 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_60, _stringLiteral484, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_60);
	}

IL_0219:
	{
		uint16_t L_61 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_14 = L_61;
		uint16_t L_62 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_15 = L_62;
		uint16_t L_63 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_16 = L_63;
		uint16_t L_64 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_17 = L_64;
		uint32_t L_65 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_18 = L_65;
		uint32_t L_66 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_19 = L_66;
		uint32_t L_67 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_20 = (((int64_t)((uint64_t)L_67)));
		uint32_t L_68 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_21 = (((int64_t)((uint64_t)L_68)));
		uint16_t L_69 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_22 = L_69;
		uint16_t L_70 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_23 = L_70;
		uint16_t L_71 = ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		V_24 = L_71;
		ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		ZipFile_ReadLEUshort_m3558(__this, /*hidden argument*/NULL);
		uint32_t L_72 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_25 = L_72;
		uint32_t L_73 = ZipFile_ReadLEUint_m3559(__this, /*hidden argument*/NULL);
		V_26 = (((int64_t)((uint64_t)L_73)));
		int32_t L_74 = V_22;
		int32_t L_75 = V_24;
		int32_t L_76 = Math_Max_m3689(NULL /*static, unused*/, L_74, L_75, /*hidden argument*/NULL);
		V_27 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_76));
		Stream_t506 * L_77 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_78 = V_27;
		int32_t L_79 = V_22;
		StreamUtils_ReadFully_m2706(NULL /*static, unused*/, L_77, L_78, 0, L_79, /*hidden argument*/NULL);
		int32_t L_80 = V_16;
		ByteU5BU5D_t129* L_81 = V_27;
		int32_t L_82 = V_22;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		String_t* L_83 = ZipConstants_ConvertToStringExt_m3239(NULL /*static, unused*/, L_80, L_81, L_82, /*hidden argument*/NULL);
		V_28 = L_83;
		String_t* L_84 = V_28;
		int32_t L_85 = V_15;
		int32_t L_86 = V_14;
		int32_t L_87 = V_17;
		ZipEntry_t591 * L_88 = (ZipEntry_t591 *)il2cpp_codegen_object_new (ZipEntry_t591_il2cpp_TypeInfo_var);
		ZipEntry__ctor_m3247(L_88, L_84, L_85, L_86, L_87, /*hidden argument*/NULL);
		V_29 = L_88;
		ZipEntry_t591 * L_89 = V_29;
		uint32_t L_90 = V_19;
		NullCheck(L_89);
		ZipEntry_set_Crc_m3285(L_89, ((int64_t)((int64_t)(((int64_t)((uint64_t)L_90)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_91 = V_29;
		int64_t L_92 = V_21;
		NullCheck(L_91);
		ZipEntry_set_Size_m3281(L_91, ((int64_t)((int64_t)L_92&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_93 = V_29;
		int64_t L_94 = V_20;
		NullCheck(L_93);
		ZipEntry_set_CompressedSize_m3283(L_93, ((int64_t)((int64_t)L_94&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_95 = V_29;
		int32_t L_96 = V_16;
		NullCheck(L_95);
		ZipEntry_set_Flags_m3257(L_95, L_96, /*hidden argument*/NULL);
		ZipEntry_t591 * L_97 = V_29;
		uint32_t L_98 = V_18;
		NullCheck(L_97);
		ZipEntry_set_DosTime_m3276(L_97, (((int64_t)((uint64_t)L_98))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_99 = V_29;
		uint64_t L_100 = V_13;
		NullCheck(L_99);
		ZipEntry_set_ZipFileIndex_m3259(L_99, L_100, /*hidden argument*/NULL);
		ZipEntry_t591 * L_101 = V_29;
		int64_t L_102 = V_26;
		NullCheck(L_101);
		ZipEntry_set_Offset_m3261(L_101, L_102, /*hidden argument*/NULL);
		ZipEntry_t591 * L_103 = V_29;
		uint32_t L_104 = V_25;
		NullCheck(L_103);
		ZipEntry_set_ExternalFileAttributes_m3263(L_103, L_104, /*hidden argument*/NULL);
		int32_t L_105 = V_16;
		if (((int32_t)((int32_t)L_105&(int32_t)8)))
		{
			goto IL_0336;
		}
	}
	{
		ZipEntry_t591 * L_106 = V_29;
		uint32_t L_107 = V_19;
		NullCheck(L_106);
		ZipEntry_set_CryptoCheckValue_m3255(L_106, (((int32_t)((uint8_t)((int32_t)((uint32_t)L_107>>((int32_t)24)))))), /*hidden argument*/NULL);
		goto IL_0348;
	}

IL_0336:
	{
		ZipEntry_t591 * L_108 = V_29;
		uint32_t L_109 = V_18;
		NullCheck(L_108);
		ZipEntry_set_CryptoCheckValue_m3255(L_108, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_109>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
	}

IL_0348:
	{
		int32_t L_110 = V_23;
		if ((((int32_t)L_110) <= ((int32_t)0)))
		{
			goto IL_036c;
		}
	}
	{
		int32_t L_111 = V_23;
		V_30 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_111));
		Stream_t506 * L_112 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_113 = V_30;
		StreamUtils_ReadFully_m2705(NULL /*static, unused*/, L_112, L_113, /*hidden argument*/NULL);
		ZipEntry_t591 * L_114 = V_29;
		ByteU5BU5D_t129* L_115 = V_30;
		NullCheck(L_114);
		ZipEntry_set_ExtraData_m3289(L_114, L_115, /*hidden argument*/NULL);
	}

IL_036c:
	{
		ZipEntry_t591 * L_116 = V_29;
		NullCheck(L_116);
		ZipEntry_ProcessExtraData_m3290(L_116, 0, /*hidden argument*/NULL);
		int32_t L_117 = V_24;
		if ((((int32_t)L_117) <= ((int32_t)0)))
		{
			goto IL_039b;
		}
	}
	{
		Stream_t506 * L_118 = (__this->___baseStream__5);
		ByteU5BU5D_t129* L_119 = V_27;
		int32_t L_120 = V_24;
		StreamUtils_ReadFully_m2706(NULL /*static, unused*/, L_118, L_119, 0, L_120, /*hidden argument*/NULL);
		ZipEntry_t591 * L_121 = V_29;
		int32_t L_122 = V_16;
		ByteU5BU5D_t129* L_123 = V_27;
		int32_t L_124 = V_24;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		String_t* L_125 = ZipConstants_ConvertToStringExt_m3239(NULL /*static, unused*/, L_122, L_123, L_124, /*hidden argument*/NULL);
		NullCheck(L_121);
		ZipEntry_set_Comment_m3292(L_121, L_125, /*hidden argument*/NULL);
	}

IL_039b:
	{
		ZipEntryU5BU5D_t615* L_126 = (__this->___entries__8);
		uint64_t L_127 = V_13;
		if ((uint64_t)(L_127) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
		ZipEntry_t591 * L_128 = V_29;
		NullCheck(L_126);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_126, (((intptr_t)L_127)));
		ArrayElementTypeCheck (L_126, L_128);
		*((ZipEntry_t591 **)(ZipEntry_t591 **)SZArrayLdElema(L_126, (((intptr_t)L_127)), sizeof(ZipEntry_t591 *))) = (ZipEntry_t591 *)L_128;
		uint64_t L_129 = V_13;
		V_13 = ((int64_t)((int64_t)L_129+(int64_t)(((int64_t)((int64_t)1)))));
	}

IL_03ae:
	{
		uint64_t L_130 = V_13;
		uint64_t L_131 = V_3;
		if ((!(((uint64_t)L_130) >= ((uint64_t)L_131))))
		{
			goto IL_0201;
		}
	}
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipFile::LocateEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern "C" int64_t ZipFile_LocateEntry_m3563 (ZipFile_t580 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	{
		ZipEntry_t591 * L_0 = ___entry;
		int64_t L_1 = ZipFile_TestLocalHeader_m3498(__this, L_0, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitDecryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* PkzipClassicManaged_t541_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* CryptoStream_t650_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral485;
extern Il2CppCodeGenString* _stringLiteral486;
extern "C" Stream_t506 * ZipFile_CreateAndInitDecryptionStream_m3564 (ZipFile_t580 * __this, Stream_t506 * ___baseStream, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PkzipClassicManaged_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		CryptoStream_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral485 = il2cpp_codegen_string_literal_from_index(485);
		_stringLiteral486 = il2cpp_codegen_string_literal_from_index(486);
		s_Il2CppMethodIntialized = true;
	}
	CryptoStream_t650 * V_0 = {0};
	PkzipClassicManaged_t541 * V_1 = {0};
	{
		V_0 = (CryptoStream_t650 *)NULL;
		ZipEntry_t591 * L_0 = ___entry;
		NullCheck(L_0);
		int32_t L_1 = ZipEntry_get_Version_m3269(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			goto IL_0017;
		}
	}
	{
		ZipEntry_t591 * L_2 = ___entry;
		NullCheck(L_2);
		int32_t L_3 = ZipEntry_get_Flags_m3256(L_2, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_005a;
		}
	}

IL_0017:
	{
		PkzipClassicManaged_t541 * L_4 = (PkzipClassicManaged_t541 *)il2cpp_codegen_object_new (PkzipClassicManaged_t541_il2cpp_TypeInfo_var);
		PkzipClassicManaged__ctor_m2746(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		ZipEntry_t591 * L_5 = ___entry;
		NullCheck(L_5);
		String_t* L_6 = ZipEntry_get_Name_m3279(L_5, /*hidden argument*/NULL);
		ZipFile_OnKeysRequired_m3469(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ZipFile_get_HaveKeys_m3473(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral485, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003c:
	{
		Stream_t506 * L_9 = ___baseStream;
		PkzipClassicManaged_t541 * L_10 = V_1;
		ByteU5BU5D_t129* L_11 = (__this->___key_9);
		NullCheck(L_10);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker2< Object_t *, ByteU5BU5D_t129*, ByteU5BU5D_t129* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_10, L_11, (ByteU5BU5D_t129*)(ByteU5BU5D_t129*)NULL);
		CryptoStream_t650 * L_13 = (CryptoStream_t650 *)il2cpp_codegen_object_new (CryptoStream_t650_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m3806(L_13, L_9, L_12, 0, /*hidden argument*/NULL);
		V_0 = L_13;
		CryptoStream_t650 * L_14 = V_0;
		ZipEntry_t591 * L_15 = ___entry;
		ZipFile_CheckClassicPassword_m3566(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		goto IL_0065;
	}

IL_005a:
	{
		ZipException_t594 * L_16 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_16, _stringLiteral486, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
	}

IL_0065:
	{
		CryptoStream_t650 * L_17 = V_0;
		return L_17;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.ZipFile::CreateAndInitEncryptionStream(System.IO.Stream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* PkzipClassicManaged_t541_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* UncompressedStream_t616_il2cpp_TypeInfo_var;
extern TypeInfo* CryptoStream_t650_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral485;
extern "C" Stream_t506 * ZipFile_CreateAndInitEncryptionStream_m3565 (ZipFile_t580 * __this, Stream_t506 * ___baseStream, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PkzipClassicManaged_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		UncompressedStream_t616_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(460);
		CryptoStream_t650_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(465);
		_stringLiteral485 = il2cpp_codegen_string_literal_from_index(485);
		s_Il2CppMethodIntialized = true;
	}
	CryptoStream_t650 * V_0 = {0};
	PkzipClassicManaged_t541 * V_1 = {0};
	{
		V_0 = (CryptoStream_t650 *)NULL;
		ZipEntry_t591 * L_0 = ___entry;
		NullCheck(L_0);
		int32_t L_1 = ZipEntry_get_Version_m3269(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)50))))
		{
			goto IL_0017;
		}
	}
	{
		ZipEntry_t591 * L_2 = ___entry;
		NullCheck(L_2);
		int32_t L_3 = ZipEntry_get_Flags_m3256(L_2, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_3&(int32_t)((int32_t)64))))
		{
			goto IL_0087;
		}
	}

IL_0017:
	{
		PkzipClassicManaged_t541 * L_4 = (PkzipClassicManaged_t541 *)il2cpp_codegen_object_new (PkzipClassicManaged_t541_il2cpp_TypeInfo_var);
		PkzipClassicManaged__ctor_m2746(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		ZipEntry_t591 * L_5 = ___entry;
		NullCheck(L_5);
		String_t* L_6 = ZipEntry_get_Name_m3279(L_5, /*hidden argument*/NULL);
		ZipFile_OnKeysRequired_m3469(__this, L_6, /*hidden argument*/NULL);
		bool L_7 = ZipFile_get_HaveKeys_m3473(__this, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003c;
		}
	}
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral485, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_003c:
	{
		Stream_t506 * L_9 = ___baseStream;
		UncompressedStream_t616 * L_10 = (UncompressedStream_t616 *)il2cpp_codegen_object_new (UncompressedStream_t616_il2cpp_TypeInfo_var);
		UncompressedStream__ctor_m3441(L_10, L_9, /*hidden argument*/NULL);
		PkzipClassicManaged_t541 * L_11 = V_1;
		ByteU5BU5D_t129* L_12 = (__this->___key_9);
		NullCheck(L_11);
		Object_t * L_13 = (Object_t *)VirtFuncInvoker2< Object_t *, ByteU5BU5D_t129*, ByteU5BU5D_t129* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_11, L_12, (ByteU5BU5D_t129*)(ByteU5BU5D_t129*)NULL);
		CryptoStream_t650 * L_14 = (CryptoStream_t650 *)il2cpp_codegen_object_new (CryptoStream_t650_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m3806(L_14, L_10, L_13, 1, /*hidden argument*/NULL);
		V_0 = L_14;
		ZipEntry_t591 * L_15 = ___entry;
		NullCheck(L_15);
		int64_t L_16 = ZipEntry_get_Crc_m3284(L_15, /*hidden argument*/NULL);
		if ((((int64_t)L_16) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_006a;
		}
	}
	{
		ZipEntry_t591 * L_17 = ___entry;
		NullCheck(L_17);
		int32_t L_18 = ZipEntry_get_Flags_m3256(L_17, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_18&(int32_t)8)))
		{
			goto IL_007b;
		}
	}

IL_006a:
	{
		CryptoStream_t650 * L_19 = V_0;
		ZipEntry_t591 * L_20 = ___entry;
		NullCheck(L_20);
		int64_t L_21 = ZipEntry_get_DosTime_m3275(L_20, /*hidden argument*/NULL);
		ZipFile_WriteEncryptionHeader_m3567(NULL /*static, unused*/, L_19, ((int64_t)((int64_t)L_21<<(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_007b:
	{
		CryptoStream_t650 * L_22 = V_0;
		ZipEntry_t591 * L_23 = ___entry;
		NullCheck(L_23);
		int64_t L_24 = ZipEntry_get_Crc_m3284(L_23, /*hidden argument*/NULL);
		ZipFile_WriteEncryptionHeader_m3567(NULL /*static, unused*/, L_22, L_24, /*hidden argument*/NULL);
	}

IL_0087:
	{
		CryptoStream_t650 * L_25 = V_0;
		return L_25;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::CheckClassicPassword(System.Security.Cryptography.CryptoStream,ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral487;
extern "C" void ZipFile_CheckClassicPassword_m3566 (Object_t * __this /* static, unused */, CryptoStream_t650 * ___classicCryptoStream, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral487 = il2cpp_codegen_string_literal_from_index(487);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)12)));
		CryptoStream_t650 * L_0 = ___classicCryptoStream;
		ByteU5BU5D_t129* L_1 = V_0;
		StreamUtils_ReadFully_m2705(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ((int32_t)11));
		int32_t L_3 = ((int32_t)11);
		ZipEntry_t591 * L_4 = ___entry;
		NullCheck(L_4);
		uint8_t L_5 = ZipEntry_get_CryptoCheckValue_m3254(L_4, /*hidden argument*/NULL);
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3, sizeof(uint8_t)))) == ((int32_t)L_5)))
		{
			goto IL_0026;
		}
	}
	{
		ZipException_t594 * L_6 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_6, _stringLiteral487, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0026:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipFile::WriteEncryptionHeader(System.IO.Stream,System.Int64)
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* Random_t661_il2cpp_TypeInfo_var;
extern "C" void ZipFile_WriteEncryptionHeader_m3567 (Object_t * __this /* static, unused */, Stream_t506 * ___stream, int64_t ___crcValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		Random_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	Random_t661 * V_1 = {0};
	{
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)12)));
		Random_t661 * L_0 = (Random_t661 *)il2cpp_codegen_object_new (Random_t661_il2cpp_TypeInfo_var);
		Random__ctor_m3719(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		Random_t661 * L_1 = V_1;
		ByteU5BU5D_t129* L_2 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< ByteU5BU5D_t129* >::Invoke(6 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_1, L_2);
		ByteU5BU5D_t129* L_3 = V_0;
		int64_t L_4 = ___crcValue;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, ((int32_t)11), sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_4>>(int32_t)((int32_t)24))))));
		Stream_t506 * L_5 = ___stream;
		ByteU5BU5D_t129* L_6 = V_0;
		ByteU5BU5D_t129* L_7 = V_0;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length)))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource::.ctor(System.String)
extern "C" void StaticDiskDataSource__ctor_m3568 (StaticDiskDataSource_t621 * __this, String_t* ___fileName, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___fileName;
		__this->___fileName__0 = L_0;
		return;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.StaticDiskDataSource::GetSource()
extern "C" Stream_t506 * StaticDiskDataSource_GetSource_m3569 (StaticDiskDataSource_t621 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___fileName__0);
		FileStream_t649 * L_1 = File_OpenRead_m3735(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource::.ctor()
extern "C" void DynamicDiskDataSource__ctor_m3570 (DynamicDiskDataSource_t622 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DynamicDiskDataSource::GetSource(ICSharpCode.SharpZipLib.Zip.ZipEntry,System.String)
extern "C" Stream_t506 * DynamicDiskDataSource_GetSource_m3571 (DynamicDiskDataSource_t622 * __this, ZipEntry_t591 * ___entry, String_t* ___name, const MethodInfo* method)
{
	Stream_t506 * V_0 = {0};
	{
		V_0 = (Stream_t506 *)NULL;
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		String_t* L_1 = ___name;
		FileStream_t649 * L_2 = File_OpenRead_m3735(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_000c:
	{
		Stream_t506 * L_3 = V_0;
		return L_3;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.FileUpdateMode)
extern "C" void BaseArchiveStorage__ctor_m3572 (BaseArchiveStorage_t623 * __this, int32_t ___updateMode, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___updateMode;
		__this->___updateMode__0 = L_0;
		return;
	}
}
// ICSharpCode.SharpZipLib.Zip.FileUpdateMode ICSharpCode.SharpZipLib.Zip.BaseArchiveStorage::get_UpdateMode()
extern "C" int32_t BaseArchiveStorage_get_UpdateMode_m3573 (BaseArchiveStorage_t623 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___updateMode__0);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile,ICSharpCode.SharpZipLib.Zip.FileUpdateMode)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral488;
extern "C" void DiskArchiveStorage__ctor_m3574 (DiskArchiveStorage_t624 * __this, ZipFile_t580 * ___file, int32_t ___updateMode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral488 = il2cpp_codegen_string_literal_from_index(488);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___updateMode;
		BaseArchiveStorage__ctor_m3572(__this, L_0, /*hidden argument*/NULL);
		ZipFile_t580 * L_1 = ___file;
		NullCheck(L_1);
		String_t* L_2 = ZipFile_get_Name_m3487(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		ZipException_t594 * L_3 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_3, _stringLiteral488, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001a:
	{
		ZipFile_t580 * L_4 = ___file;
		NullCheck(L_4);
		String_t* L_5 = ZipFile_get_Name_m3487(L_4, /*hidden argument*/NULL);
		__this->___fileName__2 = L_5;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.ZipFile)
extern "C" void DiskArchiveStorage__ctor_m3575 (DiskArchiveStorage_t624 * __this, ZipFile_t580 * ___file, const MethodInfo* method)
{
	{
		ZipFile_t580 * L_0 = ___file;
		DiskArchiveStorage__ctor_m3574(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::GetTemporaryOutput()
extern TypeInfo* Path_t657_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * DiskArchiveStorage_GetTemporaryOutput_m3576 (DiskArchiveStorage_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = (__this->___temporaryName__3);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_1 = (__this->___temporaryName__3);
		String_t* L_2 = DiskArchiveStorage_GetTempFileName_m3581(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->___temporaryName__3 = L_2;
		String_t* L_3 = (__this->___temporaryName__3);
		FileStream_t649 * L_4 = File_OpenWrite_m3807(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->___temporaryStream__1 = L_4;
		goto IL_0049;
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t657_il2cpp_TypeInfo_var);
		String_t* L_5 = Path_GetTempFileName_m3732(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___temporaryName__3 = L_5;
		String_t* L_6 = (__this->___temporaryName__3);
		FileStream_t649 * L_7 = File_OpenWrite_m3807(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->___temporaryStream__1 = L_7;
	}

IL_0049:
	{
		Stream_t506 * L_8 = (__this->___temporaryStream__1);
		return L_8;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::ConvertTemporaryToFinal()
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t159_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral489;
extern "C" Stream_t506 * DiskArchiveStorage_ConvertTemporaryToFinal_m3577 (DiskArchiveStorage_t624 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		Exception_t159_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(218);
		_stringLiteral489 = il2cpp_codegen_string_literal_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	String_t* V_1 = {0};
	bool V_2 = false;
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Stream_t506 * L_0 = (__this->___temporaryStream__1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZipException_t594 * L_1 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_1, _stringLiteral489, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		V_0 = (Stream_t506 *)NULL;
		String_t* L_2 = (__this->___fileName__2);
		String_t* L_3 = DiskArchiveStorage_GetTempFileName_m3581(NULL /*static, unused*/, L_2, 0, /*hidden argument*/NULL);
		V_1 = L_3;
		V_2 = 0;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		Stream_t506 * L_4 = (__this->___temporaryStream__1);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_4);
		String_t* L_5 = (__this->___fileName__2);
		String_t* L_6 = V_1;
		File_Move_m3808(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		String_t* L_7 = (__this->___temporaryName__3);
		String_t* L_8 = (__this->___fileName__2);
		File_Move_m3808(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = 1;
		String_t* L_9 = V_1;
		File_Delete_m3736(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		String_t* L_10 = (__this->___fileName__2);
		FileStream_t649 * L_11 = File_OpenRead_m3735(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		goto IL_0081;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t159_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0062;
		throw e;
	}

CATCH_0062:
	{ // begin catch(System.Exception)
		{
			V_0 = (Stream_t506 *)NULL;
			bool L_12 = V_2;
			if (L_12)
			{
				goto IL_007f;
			}
		}

IL_0068:
		{
			String_t* L_13 = V_1;
			String_t* L_14 = (__this->___fileName__2);
			File_Move_m3808(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
			String_t* L_15 = (__this->___temporaryName__3);
			File_Delete_m3736(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		}

IL_007f:
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)__exception_local);
		}
	} // end catch (depth: 1)

IL_0081:
	{
		Stream_t506 * L_16 = V_0;
		return L_16;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::MakeTemporaryCopy(System.IO.Stream)
extern TypeInfo* FileStream_t649_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * DiskArchiveStorage_MakeTemporaryCopy_m3578 (DiskArchiveStorage_t624 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FileStream_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t506 * L_0 = ___stream;
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_0);
		String_t* L_1 = (__this->___fileName__2);
		String_t* L_2 = DiskArchiveStorage_GetTempFileName_m3581(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->___temporaryName__3 = L_2;
		String_t* L_3 = (__this->___fileName__2);
		String_t* L_4 = (__this->___temporaryName__3);
		File_Copy_m3809(NULL /*static, unused*/, L_3, L_4, 1, /*hidden argument*/NULL);
		String_t* L_5 = (__this->___temporaryName__3);
		FileStream_t649 * L_6 = (FileStream_t649 *)il2cpp_codegen_object_new (FileStream_t649_il2cpp_TypeInfo_var);
		FileStream__ctor_m3810(L_6, L_5, 3, 3, /*hidden argument*/NULL);
		__this->___temporaryStream__1 = L_6;
		Stream_t506 * L_7 = (__this->___temporaryStream__1);
		return L_7;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::OpenForDirectUpdate(System.IO.Stream)
extern TypeInfo* FileStream_t649_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * DiskArchiveStorage_OpenForDirectUpdate_m3579 (DiskArchiveStorage_t624 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		FileStream_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	{
		Stream_t506 * L_0 = ___stream;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Stream_t506 * L_1 = ___stream;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		if (L_2)
		{
			goto IL_0024;
		}
	}

IL_000b:
	{
		Stream_t506 * L_3 = ___stream;
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		Stream_t506 * L_4 = ___stream;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_4);
	}

IL_0014:
	{
		String_t* L_5 = (__this->___fileName__2);
		FileStream_t649 * L_6 = (FileStream_t649 *)il2cpp_codegen_object_new (FileStream_t649_il2cpp_TypeInfo_var);
		FileStream__ctor_m3810(L_6, L_5, 3, 3, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0026;
	}

IL_0024:
	{
		Stream_t506 * L_7 = ___stream;
		V_0 = L_7;
	}

IL_0026:
	{
		Stream_t506 * L_8 = V_0;
		return L_8;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::Dispose()
extern "C" void DiskArchiveStorage_Dispose_m3580 (DiskArchiveStorage_t624 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___temporaryStream__1);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		Stream_t506 * L_1 = (__this->___temporaryStream__1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.DiskArchiveStorage::GetTempFileName(System.String,System.Boolean)
extern TypeInfo* Path_t657_il2cpp_TypeInfo_var;
extern TypeInfo* DateTime_t18_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral490;
extern "C" String_t* DiskArchiveStorage_GetTempFileName_m3581 (Object_t * __this /* static, unused */, String_t* ___original, bool ___makeTempFile, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		DateTime_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		_stringLiteral490 = il2cpp_codegen_string_literal_from_index(490);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	FileStream_t649 * V_4 = {0};
	DateTime_t18  V_5 = {0};
	DateTime_t18  V_6 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (String_t*)NULL;
		String_t* L_0 = ___original;
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t657_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_GetTempFileName_m3732(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_0078;
	}

IL_000d:
	{
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t18_il2cpp_TypeInfo_var);
		DateTime_t18  L_2 = DateTime_get_Now_m513(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_2;
		int32_t L_3 = DateTime_get_Second_m3755((&V_5), /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_0075;
	}

IL_0020:
	{
		int32_t L_4 = V_1;
		V_1 = ((int32_t)((int32_t)L_4+(int32_t)1));
		String_t* L_5 = ___original;
		int32_t L_6 = V_2;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = V_1;
		int32_t L_10 = L_9;
		Object_t * L_11 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m3740(NULL /*static, unused*/, _stringLiteral490, L_5, L_8, L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		String_t* L_13 = V_3;
		bool L_14 = File_Exists_m769(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0075;
		}
	}
	{
		bool L_15 = ___makeTempFile;
		if (!L_15)
		{
			goto IL_0073;
		}
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			String_t* L_16 = V_3;
			FileStream_t649 * L_17 = File_Create_m3729(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
		}

IL_004f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x5D, FINALLY_0051);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t159 *)e.ex;
			goto FINALLY_0051;
		}

FINALLY_0051:
		{ // begin finally (depth: 2)
			{
				FileStream_t649 * L_18 = V_4;
				if (!L_18)
				{
					goto IL_005c;
				}
			}

IL_0055:
			{
				FileStream_t649 * L_19 = V_4;
				NullCheck(L_19);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_19);
			}

IL_005c:
			{
				IL2CPP_END_FINALLY(81)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(81)
		{
			IL2CPP_JUMP_TBL(0x5D, IL_005d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
		}

IL_005d:
		{
			String_t* L_20 = V_3;
			V_0 = L_20;
			goto IL_0075;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t159 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0061;
		throw e;
	}

CATCH_0061:
	{ // begin catch(System.Object)
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t18_il2cpp_TypeInfo_var);
		DateTime_t18  L_21 = DateTime_get_Now_m513(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_6 = L_21;
		int32_t L_22 = DateTime_get_Second_m3755((&V_6), /*hidden argument*/NULL);
		V_2 = L_22;
		goto IL_0075;
	} // end catch (depth: 1)

IL_0073:
	{
		String_t* L_23 = V_3;
		V_0 = L_23;
	}

IL_0075:
	{
		String_t* L_24 = V_0;
		if (!L_24)
		{
			goto IL_0020;
		}
	}

IL_0078:
	{
		String_t* L_25 = V_0;
		return L_25;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::.ctor()
extern "C" void MemoryArchiveStorage__ctor_m3582 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method)
{
	{
		BaseArchiveStorage__ctor_m3572(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::.ctor(ICSharpCode.SharpZipLib.Zip.FileUpdateMode)
extern "C" void MemoryArchiveStorage__ctor_m3583 (MemoryArchiveStorage_t625 * __this, int32_t ___updateMode, const MethodInfo* method)
{
	{
		int32_t L_0 = ___updateMode;
		BaseArchiveStorage__ctor_m3572(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.IO.MemoryStream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::get_FinalStream()
extern "C" MemoryStream_t600 * MemoryArchiveStorage_get_FinalStream_m3584 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t600 * L_0 = (__this->___finalStream__2);
		return L_0;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::GetTemporaryOutput()
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * MemoryArchiveStorage_GetTemporaryOutput_m3585 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		s_Il2CppMethodIntialized = true;
	}
	{
		MemoryStream_t600 * L_0 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3794(L_0, /*hidden argument*/NULL);
		__this->___temporaryStream__1 = L_0;
		MemoryStream_t600 * L_1 = (__this->___temporaryStream__1);
		return L_1;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::ConvertTemporaryToFinal()
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral489;
extern "C" Stream_t506 * MemoryArchiveStorage_ConvertTemporaryToFinal_m3586 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		_stringLiteral489 = il2cpp_codegen_string_literal_from_index(489);
		s_Il2CppMethodIntialized = true;
	}
	{
		MemoryStream_t600 * L_0 = (__this->___temporaryStream__1);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ZipException_t594 * L_1 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_1, _stringLiteral489, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		MemoryStream_t600 * L_2 = (__this->___temporaryStream__1);
		NullCheck(L_2);
		ByteU5BU5D_t129* L_3 = (ByteU5BU5D_t129*)VirtFuncInvoker0< ByteU5BU5D_t129* >::Invoke(26 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_2);
		MemoryStream_t600 * L_4 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3811(L_4, L_3, /*hidden argument*/NULL);
		__this->___finalStream__2 = L_4;
		MemoryStream_t600 * L_5 = (__this->___finalStream__2);
		return L_5;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::MakeTemporaryCopy(System.IO.Stream)
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * MemoryArchiveStorage_MakeTemporaryCopy_m3587 (MemoryArchiveStorage_t625 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	{
		MemoryStream_t600 * L_0 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3794(L_0, /*hidden argument*/NULL);
		__this->___temporaryStream__1 = L_0;
		Stream_t506 * L_1 = ___stream;
		NullCheck(L_1);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_1, (((int64_t)((int64_t)0))));
		Stream_t506 * L_2 = ___stream;
		MemoryStream_t600 * L_3 = (__this->___temporaryStream__1);
		StreamUtils_Copy_m2707(NULL /*static, unused*/, L_2, L_3, ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)4096))), /*hidden argument*/NULL);
		MemoryStream_t600 * L_4 = (__this->___temporaryStream__1);
		return L_4;
	}
}
// System.IO.Stream ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::OpenForDirectUpdate(System.IO.Stream)
extern TypeInfo* MemoryStream_t600_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern "C" Stream_t506 * MemoryArchiveStorage_OpenForDirectUpdate_m3588 (MemoryArchiveStorage_t625 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MemoryStream_t600_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(436);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	Stream_t506 * V_0 = {0};
	{
		Stream_t506 * L_0 = ___stream;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		Stream_t506 * L_1 = ___stream;
		NullCheck(L_1);
		bool L_2 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_1);
		if (L_2)
		{
			goto IL_0035;
		}
	}

IL_000b:
	{
		MemoryStream_t600 * L_3 = (MemoryStream_t600 *)il2cpp_codegen_object_new (MemoryStream_t600_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m3794(L_3, /*hidden argument*/NULL);
		V_0 = L_3;
		Stream_t506 * L_4 = ___stream;
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		Stream_t506 * L_5 = ___stream;
		NullCheck(L_5);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_5, (((int64_t)((int64_t)0))));
		Stream_t506 * L_6 = ___stream;
		Stream_t506 * L_7 = V_0;
		StreamUtils_Copy_m2707(NULL /*static, unused*/, L_6, L_7, ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)4096))), /*hidden argument*/NULL);
		Stream_t506 * L_8 = ___stream;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_8);
		goto IL_0037;
	}

IL_0035:
	{
		Stream_t506 * L_9 = ___stream;
		V_0 = L_9;
	}

IL_0037:
	{
		Stream_t506 * L_10 = V_0;
		return L_10;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.MemoryArchiveStorage::Dispose()
extern "C" void MemoryArchiveStorage_Dispose_m3589 (MemoryArchiveStorage_t625 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t600 * L_0 = (__this->___temporaryStream__1);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		MemoryStream_t600 * L_1 = (__this->___temporaryStream__1);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_1);
	}

IL_0013:
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.DescriptorData::get_CompressedSize()
extern "C" int64_t DescriptorData_get_CompressedSize_m3590 (DescriptorData_t626 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___compressedSize_1);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DescriptorData::set_CompressedSize(System.Int64)
extern "C" void DescriptorData_set_CompressedSize_m3591 (DescriptorData_t626 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___compressedSize_1 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.DescriptorData::get_Size()
extern "C" int64_t DescriptorData_get_Size_m3592 (DescriptorData_t626 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___size_0);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DescriptorData::set_Size(System.Int64)
extern "C" void DescriptorData_set_Size_m3593 (DescriptorData_t626 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___size_0 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.DescriptorData::get_Crc()
extern "C" int64_t DescriptorData_get_Crc_m3594 (DescriptorData_t626 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___crc_2);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DescriptorData::set_Crc(System.Int64)
extern "C" void DescriptorData_set_Crc_m3595 (DescriptorData_t626 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___crc_2 = ((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.DescriptorData::.ctor()
extern "C" void DescriptorData__ctor_m3596 (DescriptorData_t626 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.EntryPatchData::get_SizePatchOffset()
extern "C" int64_t EntryPatchData_get_SizePatchOffset_m3597 (EntryPatchData_t627 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___sizePatchOffset__0);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.EntryPatchData::set_SizePatchOffset(System.Int64)
extern "C" void EntryPatchData_set_SizePatchOffset_m3598 (EntryPatchData_t627 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___sizePatchOffset__0 = L_0;
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.EntryPatchData::get_CrcPatchOffset()
extern "C" int64_t EntryPatchData_get_CrcPatchOffset_m3599 (EntryPatchData_t627 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (__this->___crcPatchOffset__1);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.EntryPatchData::set_CrcPatchOffset(System.Int64)
extern "C" void EntryPatchData_set_CrcPatchOffset_m3600 (EntryPatchData_t627 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		__this->___crcPatchOffset__1 = L_0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.EntryPatchData::.ctor()
extern "C" void EntryPatchData__ctor_m3601 (EntryPatchData_t627 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.String)
extern TypeInfo* Stream_t506_il2cpp_TypeInfo_var;
extern TypeInfo* FileStream_t649_il2cpp_TypeInfo_var;
extern "C" void ZipHelperStream__ctor_m3602 (ZipHelperStream_t628 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		FileStream_t649_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(466);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t506_il2cpp_TypeInfo_var);
		Stream__ctor_m3687(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name;
		FileStream_t649 * L_1 = (FileStream_t649 *)il2cpp_codegen_object_new (FileStream_t649_il2cpp_TypeInfo_var);
		FileStream__ctor_m3810(L_1, L_0, 3, 3, /*hidden argument*/NULL);
		__this->___stream__2 = L_1;
		__this->___isOwner__1 = 1;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::.ctor(System.IO.Stream)
extern TypeInfo* Stream_t506_il2cpp_TypeInfo_var;
extern "C" void ZipHelperStream__ctor_m3603 (ZipHelperStream_t628 * __this, Stream_t506 * ___stream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t506_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(353);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t506_il2cpp_TypeInfo_var);
		Stream__ctor_m3687(__this, /*hidden argument*/NULL);
		Stream_t506 * L_0 = ___stream;
		__this->___stream__2 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_IsStreamOwner()
extern "C" bool ZipHelperStream_get_IsStreamOwner_m3604 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___isOwner__1);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_IsStreamOwner(System.Boolean)
extern "C" void ZipHelperStream_set_IsStreamOwner_m3605 (ZipHelperStream_t628 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___isOwner__1 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanRead()
extern "C" bool ZipHelperStream_get_CanRead_m3606 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanSeek()
extern "C" bool ZipHelperStream_get_CanSeek_m3607 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanTimeout()
extern "C" bool ZipHelperStream_get_CanTimeout_m3608 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanTimeout() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Length()
extern "C" int64_t ZipHelperStream_get_Length_m3609 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.Stream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_Position()
extern "C" int64_t ZipHelperStream_get_Position_m3610 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::set_Position(System.Int64)
extern "C" void ZipHelperStream_set_Position_m3611 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipHelperStream::get_CanWrite()
extern "C" bool ZipHelperStream_get_CanWrite_m3612 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Flush()
extern "C" void ZipHelperStream_Flush_m3613 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(14 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t ZipHelperStream_Seek_m3614 (ZipHelperStream_t628 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		int64_t L_1 = ___offset;
		int32_t L_2 = ___origin;
		NullCheck(L_0);
		int64_t L_3 = (int64_t)VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::SetLength(System.Int64)
extern "C" void ZipHelperStream_SetLength_m3615 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(18 /* System.Void System.IO.Stream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ZipHelperStream_Read_m3616 (ZipHelperStream_t628 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		ByteU5BU5D_t129* L_1 = ___buffer;
		int32_t L_2 = ___offset;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		int32_t L_4 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void ZipHelperStream_Write_m3617 (ZipHelperStream_t628 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		ByteU5BU5D_t129* L_1 = ___buffer;
		int32_t L_2 = ___offset;
		int32_t L_3 = ___count;
		NullCheck(L_0);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_0, L_1, L_2, L_3);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::Close()
extern "C" void ZipHelperStream_Close_m3618 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	Stream_t506 * V_0 = {0};
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		V_0 = L_0;
		__this->___stream__2 = (Stream_t506 *)NULL;
		bool L_1 = (__this->___isOwner__1);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		Stream_t506 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		__this->___isOwner__1 = 0;
		Stream_t506 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_3);
	}

IL_0026:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLocalHeader(ICSharpCode.SharpZipLib.Zip.ZipEntry,ICSharpCode.SharpZipLib.Zip.EntryPatchData)
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral491;
extern "C" void ZipHelperStream_WriteLocalHeader_m3619 (ZipHelperStream_t628 * __this, ZipEntry_t591 * ___entry, EntryPatchData_t627 * ___patchData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral491 = il2cpp_codegen_string_literal_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	bool V_1 = false;
	bool V_2 = false;
	ByteU5BU5D_t129* V_3 = {0};
	ZipExtraData_t599 * V_4 = {0};
	ByteU5BU5D_t129* V_5 = {0};
	ZipHelperStream_t628 * G_B5_0 = {0};
	ZipHelperStream_t628 * G_B4_0 = {0};
	int32_t G_B6_0 = 0;
	ZipHelperStream_t628 * G_B6_1 = {0};
	{
		ZipEntry_t591 * L_0 = ___entry;
		NullCheck(L_0);
		int32_t L_1 = ZipEntry_get_CompressionMethod_m3286(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 1;
		V_2 = 0;
		ZipHelperStream_WriteLEInt_m3628(__this, ((int32_t)67324752), /*hidden argument*/NULL);
		ZipEntry_t591 * L_2 = ___entry;
		NullCheck(L_2);
		int32_t L_3 = ZipEntry_get_Version_m3269(L_2, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, L_3, /*hidden argument*/NULL);
		ZipEntry_t591 * L_4 = ___entry;
		NullCheck(L_4);
		int32_t L_5 = ZipEntry_get_Flags_m3256(L_4, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		ZipHelperStream_WriteLEShort_m3626(__this, (((int32_t)((uint8_t)L_6))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_7 = ___entry;
		NullCheck(L_7);
		int64_t L_8 = ZipEntry_get_DosTime_m3275(L_7, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_8))), /*hidden argument*/NULL);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		ZipEntry_t591 * L_10 = ___entry;
		NullCheck(L_10);
		int64_t L_11 = ZipEntry_get_Crc_m3284(L_10, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_11))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_12 = ___entry;
		NullCheck(L_12);
		bool L_13 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006e;
		}
	}
	{
		ZipHelperStream_WriteLEInt_m3628(__this, (-1), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (-1), /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_006e:
	{
		ZipEntry_t591 * L_14 = ___entry;
		NullCheck(L_14);
		bool L_15 = ZipEntry_get_IsCrypted_m3250(L_14, /*hidden argument*/NULL);
		G_B4_0 = __this;
		if (L_15)
		{
			G_B5_0 = __this;
			goto IL_0080;
		}
	}
	{
		ZipEntry_t591 * L_16 = ___entry;
		NullCheck(L_16);
		int64_t L_17 = ZipEntry_get_CompressedSize_m3282(L_16, /*hidden argument*/NULL);
		G_B6_0 = (((int32_t)((int32_t)L_17)));
		G_B6_1 = G_B4_0;
		goto IL_008a;
	}

IL_0080:
	{
		ZipEntry_t591 * L_18 = ___entry;
		NullCheck(L_18);
		int64_t L_19 = ZipEntry_get_CompressedSize_m3282(L_18, /*hidden argument*/NULL);
		G_B6_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_19)))+(int32_t)((int32_t)12)));
		G_B6_1 = G_B5_0;
	}

IL_008a:
	{
		NullCheck(G_B6_1);
		ZipHelperStream_WriteLEInt_m3628(G_B6_1, G_B6_0, /*hidden argument*/NULL);
		ZipEntry_t591 * L_20 = ___entry;
		NullCheck(L_20);
		int64_t L_21 = ZipEntry_get_Size_m3280(L_20, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_21))), /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_009e:
	{
		EntryPatchData_t627 * L_22 = ___patchData;
		if (!L_22)
		{
			goto IL_00b2;
		}
	}
	{
		EntryPatchData_t627 * L_23 = ___patchData;
		Stream_t506 * L_24 = (__this->___stream__2);
		NullCheck(L_24);
		int64_t L_25 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_24);
		NullCheck(L_23);
		EntryPatchData_set_CrcPatchOffset_m3600(L_23, L_25, /*hidden argument*/NULL);
	}

IL_00b2:
	{
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
		EntryPatchData_t627 * L_26 = ___patchData;
		if (!L_26)
		{
			goto IL_00cd;
		}
	}
	{
		EntryPatchData_t627 * L_27 = ___patchData;
		Stream_t506 * L_28 = (__this->___stream__2);
		NullCheck(L_28);
		int64_t L_29 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_28);
		NullCheck(L_27);
		EntryPatchData_set_SizePatchOffset_m3598(L_27, L_29, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		ZipEntry_t591 * L_30 = ___entry;
		NullCheck(L_30);
		bool L_31 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00e8;
		}
	}
	{
		bool L_32 = V_2;
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		ZipHelperStream_WriteLEInt_m3628(__this, (-1), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (-1), /*hidden argument*/NULL);
		goto IL_00f6;
	}

IL_00e8:
	{
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
	}

IL_00f6:
	{
		ZipEntry_t591 * L_33 = ___entry;
		NullCheck(L_33);
		int32_t L_34 = ZipEntry_get_Flags_m3256(L_33, /*hidden argument*/NULL);
		ZipEntry_t591 * L_35 = ___entry;
		NullCheck(L_35);
		String_t* L_36 = ZipEntry_get_Name_m3279(L_35, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_37 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_34, L_36, /*hidden argument*/NULL);
		V_3 = L_37;
		ByteU5BU5D_t129* L_38 = V_3;
		NullCheck(L_38);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_38)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_011d;
		}
	}
	{
		ZipException_t594 * L_39 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_39, _stringLiteral464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_39);
	}

IL_011d:
	{
		ZipEntry_t591 * L_40 = ___entry;
		NullCheck(L_40);
		ByteU5BU5D_t129* L_41 = ZipEntry_get_ExtraData_m3288(L_40, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_42 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m3355(L_42, L_41, /*hidden argument*/NULL);
		V_4 = L_42;
		ZipEntry_t591 * L_43 = ___entry;
		NullCheck(L_43);
		bool L_44 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_01a0;
		}
	}
	{
		bool L_45 = V_1;
		if (L_45)
		{
			goto IL_0138;
		}
	}
	{
		bool L_46 = V_2;
		if (!L_46)
		{
			goto IL_01a0;
		}
	}

IL_0138:
	{
		ZipExtraData_t599 * L_47 = V_4;
		NullCheck(L_47);
		ZipExtraData_StartNewEntry_m3368(L_47, /*hidden argument*/NULL);
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_015e;
		}
	}
	{
		ZipExtraData_t599 * L_49 = V_4;
		ZipEntry_t591 * L_50 = ___entry;
		NullCheck(L_50);
		int64_t L_51 = ZipEntry_get_Size_m3280(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		ZipExtraData_AddLeLong_m3374(L_49, L_51, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_52 = V_4;
		ZipEntry_t591 * L_53 = ___entry;
		NullCheck(L_53);
		int64_t L_54 = ZipEntry_get_CompressedSize_m3282(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		ZipExtraData_AddLeLong_m3374(L_52, L_54, /*hidden argument*/NULL);
		goto IL_0170;
	}

IL_015e:
	{
		ZipExtraData_t599 * L_55 = V_4;
		NullCheck(L_55);
		ZipExtraData_AddLeLong_m3374(L_55, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
		ZipExtraData_t599 * L_56 = V_4;
		NullCheck(L_56);
		ZipExtraData_AddLeLong_m3374(L_56, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
	}

IL_0170:
	{
		ZipExtraData_t599 * L_57 = V_4;
		NullCheck(L_57);
		ZipExtraData_AddNewEntry_m3369(L_57, 1, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_58 = V_4;
		NullCheck(L_58);
		bool L_59 = ZipExtraData_Find_m3365(L_58, 1, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_018d;
		}
	}
	{
		ZipException_t594 * L_60 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_60, _stringLiteral491, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_60);
	}

IL_018d:
	{
		EntryPatchData_t627 * L_61 = ___patchData;
		if (!L_61)
		{
			goto IL_01a9;
		}
	}
	{
		EntryPatchData_t627 * L_62 = ___patchData;
		ZipExtraData_t599 * L_63 = V_4;
		NullCheck(L_63);
		int32_t L_64 = ZipExtraData_get_CurrentReadIndex_m3363(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		EntryPatchData_set_SizePatchOffset_m3598(L_62, (((int64_t)((int64_t)L_64))), /*hidden argument*/NULL);
		goto IL_01a9;
	}

IL_01a0:
	{
		ZipExtraData_t599 * L_65 = V_4;
		NullCheck(L_65);
		ZipExtraData_Delete_m3375(L_65, 1, /*hidden argument*/NULL);
	}

IL_01a9:
	{
		ZipExtraData_t599 * L_66 = V_4;
		NullCheck(L_66);
		ByteU5BU5D_t129* L_67 = ZipExtraData_GetEntryData_m3356(L_66, /*hidden argument*/NULL);
		V_5 = L_67;
		ByteU5BU5D_t129* L_68 = V_3;
		NullCheck(L_68);
		ZipHelperStream_WriteLEShort_m3626(__this, (((int32_t)((int32_t)(((Array_t *)L_68)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_69 = V_5;
		NullCheck(L_69);
		ZipHelperStream_WriteLEShort_m3626(__this, (((int32_t)((int32_t)(((Array_t *)L_69)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_70 = V_3;
		NullCheck(L_70);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_70)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_01db;
		}
	}
	{
		Stream_t506 * L_71 = (__this->___stream__2);
		ByteU5BU5D_t129* L_72 = V_3;
		ByteU5BU5D_t129* L_73 = V_3;
		NullCheck(L_73);
		NullCheck(L_71);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_71, L_72, 0, (((int32_t)((int32_t)(((Array_t *)L_73)->max_length)))));
	}

IL_01db:
	{
		ZipEntry_t591 * L_74 = ___entry;
		NullCheck(L_74);
		bool L_75 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_01fe;
		}
	}
	{
		bool L_76 = V_2;
		if (!L_76)
		{
			goto IL_01fe;
		}
	}
	{
		EntryPatchData_t627 * L_77 = ___patchData;
		EntryPatchData_t627 * L_78 = L_77;
		NullCheck(L_78);
		int64_t L_79 = EntryPatchData_get_SizePatchOffset_m3597(L_78, /*hidden argument*/NULL);
		Stream_t506 * L_80 = (__this->___stream__2);
		NullCheck(L_80);
		int64_t L_81 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_80);
		NullCheck(L_78);
		EntryPatchData_set_SizePatchOffset_m3598(L_78, ((int64_t)((int64_t)L_79+(int64_t)L_81)), /*hidden argument*/NULL);
	}

IL_01fe:
	{
		ByteU5BU5D_t129* L_82 = V_5;
		NullCheck(L_82);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_82)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_0217;
		}
	}
	{
		Stream_t506 * L_83 = (__this->___stream__2);
		ByteU5BU5D_t129* L_84 = V_5;
		ByteU5BU5D_t129* L_85 = V_5;
		NullCheck(L_85);
		NullCheck(L_83);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_83, L_84, 0, (((int32_t)((int32_t)(((Array_t *)L_85)->max_length)))));
	}

IL_0217:
	{
		return;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::LocateBlockWithSignature(System.Int32,System.Int64,System.Int32,System.Int32)
extern "C" int64_t ZipHelperStream_LocateBlockWithSignature_m3620 (ZipHelperStream_t628 * __this, int32_t ___signature, int64_t ___endLocation, int32_t ___minimumBlockSize, int32_t ___maximumVariableData, const MethodInfo* method)
{
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	{
		int64_t L_0 = ___endLocation;
		int32_t L_1 = ___minimumBlockSize;
		V_0 = ((int64_t)((int64_t)L_0-(int64_t)(((int64_t)((int64_t)L_1)))));
		int64_t L_2 = V_0;
		if ((((int64_t)L_2) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_000d;
		}
	}
	{
		return (((int64_t)((int64_t)(-1))));
	}

IL_000d:
	{
		int64_t L_3 = V_0;
		int32_t L_4 = ___maximumVariableData;
		int64_t L_5 = Math_Max_m3812(NULL /*static, unused*/, ((int64_t)((int64_t)L_3-(int64_t)(((int64_t)((int64_t)L_4))))), (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_1 = L_5;
	}

IL_001a:
	{
		int64_t L_6 = V_0;
		int64_t L_7 = V_1;
		if ((((int64_t)L_6) >= ((int64_t)L_7)))
		{
			goto IL_0021;
		}
	}
	{
		return (((int64_t)((int64_t)(-1))));
	}

IL_0021:
	{
		int64_t L_8 = V_0;
		int64_t L_9 = L_8;
		V_0 = ((int64_t)((int64_t)L_9-(int64_t)(((int64_t)((int64_t)1)))));
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, __this, L_9, 0);
		int32_t L_10 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		int32_t L_11 = ___signature;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_001a;
		}
	}
	{
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, __this);
		return L_12;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteZip64EndOfCentralDirectory(System.Int64,System.Int64,System.Int64)
extern "C" void ZipHelperStream_WriteZip64EndOfCentralDirectory_m3621 (ZipHelperStream_t628 * __this, int64_t ___noOfEntries, int64_t ___sizeEntries, int64_t ___centralDirOffset, const MethodInfo* method)
{
	int64_t V_0 = 0;
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_0);
		V_0 = L_1;
		ZipHelperStream_WriteLEInt_m3628(__this, ((int32_t)101075792), /*hidden argument*/NULL);
		ZipHelperStream_WriteLELong_m3630(__this, (((int64_t)((int64_t)((int32_t)44)))), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, ((int32_t)45), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, ((int32_t)45), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
		int64_t L_2 = ___noOfEntries;
		ZipHelperStream_WriteLELong_m3630(__this, L_2, /*hidden argument*/NULL);
		int64_t L_3 = ___noOfEntries;
		ZipHelperStream_WriteLELong_m3630(__this, L_3, /*hidden argument*/NULL);
		int64_t L_4 = ___sizeEntries;
		ZipHelperStream_WriteLELong_m3630(__this, L_4, /*hidden argument*/NULL);
		int64_t L_5 = ___centralDirOffset;
		ZipHelperStream_WriteLELong_m3630(__this, L_5, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, ((int32_t)117853008), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, 0, /*hidden argument*/NULL);
		int64_t L_6 = V_0;
		ZipHelperStream_WriteLELong_m3630(__this, L_6, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteEndOfCentralDirectory(System.Int64,System.Int64,System.Int64,System.Byte[])
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral492;
extern "C" void ZipHelperStream_WriteEndOfCentralDirectory_m3622 (ZipHelperStream_t628 * __this, int64_t ___noOfEntries, int64_t ___sizeEntries, int64_t ___startOfCentralDirectory, ByteU5BU5D_t129* ___comment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral492 = il2cpp_codegen_string_literal_from_index(492);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B16_0 = 0;
	{
		int64_t L_0 = ___noOfEntries;
		if ((((int64_t)L_0) >= ((int64_t)(((int64_t)((int64_t)((int32_t)65535)))))))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_1 = ___startOfCentralDirectory;
		if ((((int64_t)L_1) >= ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0013;
		}
	}
	{
		int64_t L_2 = ___sizeEntries;
		if ((((int64_t)L_2) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_001c;
		}
	}

IL_0013:
	{
		int64_t L_3 = ___noOfEntries;
		int64_t L_4 = ___sizeEntries;
		int64_t L_5 = ___startOfCentralDirectory;
		ZipHelperStream_WriteZip64EndOfCentralDirectory_m3621(__this, L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_001c:
	{
		ZipHelperStream_WriteLEInt_m3628(__this, ((int32_t)101010256), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, 0, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEShort_m3626(__this, 0, /*hidden argument*/NULL);
		int64_t L_6 = ___noOfEntries;
		if ((((int64_t)L_6) < ((int64_t)(((int64_t)((int64_t)((int32_t)65535)))))))
		{
			goto IL_0056;
		}
	}
	{
		ZipHelperStream_WriteLEUshort_m3627(__this, ((int32_t)65535), /*hidden argument*/NULL);
		ZipHelperStream_WriteLEUshort_m3627(__this, ((int32_t)65535), /*hidden argument*/NULL);
		goto IL_0066;
	}

IL_0056:
	{
		int64_t L_7 = ___noOfEntries;
		ZipHelperStream_WriteLEShort_m3626(__this, (((int16_t)((int16_t)L_7))), /*hidden argument*/NULL);
		int64_t L_8 = ___noOfEntries;
		ZipHelperStream_WriteLEShort_m3626(__this, (((int16_t)((int16_t)L_8))), /*hidden argument*/NULL);
	}

IL_0066:
	{
		int64_t L_9 = ___sizeEntries;
		if ((((int64_t)L_9) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_0074;
		}
	}
	{
		ZipHelperStream_WriteLEUint_m3629(__this, (-1), /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0074:
	{
		int64_t L_10 = ___sizeEntries;
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_10))), /*hidden argument*/NULL);
	}

IL_007c:
	{
		int64_t L_11 = ___startOfCentralDirectory;
		if ((((int64_t)L_11) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
		{
			goto IL_008a;
		}
	}
	{
		ZipHelperStream_WriteLEUint_m3629(__this, (-1), /*hidden argument*/NULL);
		goto IL_0092;
	}

IL_008a:
	{
		int64_t L_12 = ___startOfCentralDirectory;
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_12))), /*hidden argument*/NULL);
	}

IL_0092:
	{
		ByteU5BU5D_t129* L_13 = ___comment;
		if (L_13)
		{
			goto IL_0099;
		}
	}
	{
		G_B16_0 = 0;
		goto IL_009d;
	}

IL_0099:
	{
		ByteU5BU5D_t129* L_14 = ___comment;
		NullCheck(L_14);
		G_B16_0 = (((int32_t)((int32_t)(((Array_t *)L_14)->max_length))));
	}

IL_009d:
	{
		V_0 = G_B16_0;
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_00bc;
		}
	}
	{
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m770(NULL /*static, unused*/, _stringLiteral492, L_18, /*hidden argument*/NULL);
		ZipException_t594 * L_20 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_00bc:
	{
		int32_t L_21 = V_0;
		ZipHelperStream_WriteLEShort_m3626(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00d4;
		}
	}
	{
		ByteU5BU5D_t129* L_23 = ___comment;
		ByteU5BU5D_t129* L_24 = ___comment;
		NullCheck(L_24);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_23, 0, (((int32_t)((int32_t)(((Array_t *)L_24)->max_length)))));
	}

IL_00d4:
	{
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEShort()
extern TypeInfo* EndOfStreamException_t653_il2cpp_TypeInfo_var;
extern "C" int32_t ZipHelperStream_ReadLEShort_m3623 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		EndOfStreamException_t653_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(357);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::ReadByte() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		EndOfStreamException_t653 * L_3 = (EndOfStreamException_t653 *)il2cpp_codegen_object_new (EndOfStreamException_t653_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m3714(L_3, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0016:
	{
		Stream_t506 * L_4 = (__this->___stream__2);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(16 /* System.Int32 System.IO.Stream::ReadByte() */, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		EndOfStreamException_t653 * L_7 = (EndOfStreamException_t653 *)il2cpp_codegen_object_new (EndOfStreamException_t653_il2cpp_TypeInfo_var);
		EndOfStreamException__ctor_m3714(L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		return ((int32_t)((int32_t)L_8|(int32_t)((int32_t)((int32_t)L_9<<(int32_t)8))));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLEInt()
extern "C" int32_t ZipHelperStream_ReadLEInt_m3624 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ZipHelperStream_ReadLEShort_m3623(__this, /*hidden argument*/NULL);
		int32_t L_1 = ZipHelperStream_ReadLEShort_m3623(__this, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_0|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))));
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadLELong()
extern "C" int64_t ZipHelperStream_ReadLELong_m3625 (ZipHelperStream_t628 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		int32_t L_1 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		return ((int64_t)((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)L_0))))))|(int64_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_1)))<<(int32_t)((int32_t)32)))));
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEShort(System.Int32)
extern "C" void ZipHelperStream_WriteLEShort_m3626 (ZipHelperStream_t628 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		int32_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		Stream_t506 * L_2 = (__this->___stream__2);
		int32_t L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUshort(System.UInt16)
extern "C" void ZipHelperStream_WriteLEUshort_m3627 (ZipHelperStream_t628 * __this, uint16_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (__this->___stream__2);
		uint16_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		Stream_t506 * L_2 = (__this->___stream__2);
		uint16_t L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (((int32_t)((uint8_t)((int32_t)((int32_t)L_3>>(int32_t)8))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEInt(System.Int32)
extern "C" void ZipHelperStream_WriteLEInt_m3628 (ZipHelperStream_t628 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		ZipHelperStream_WriteLEShort_m3626(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		ZipHelperStream_WriteLEShort_m3626(__this, ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUint(System.UInt32)
extern "C" void ZipHelperStream_WriteLEUint_m3629 (ZipHelperStream_t628 * __this, uint32_t ___value, const MethodInfo* method)
{
	{
		uint32_t L_0 = ___value;
		ZipHelperStream_WriteLEUshort_m3627(__this, (((int32_t)((uint16_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)65535)))))), /*hidden argument*/NULL);
		uint32_t L_1 = ___value;
		ZipHelperStream_WriteLEUshort_m3627(__this, (((int32_t)((uint16_t)((int32_t)((uint32_t)L_1>>((int32_t)16)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLELong(System.Int64)
extern "C" void ZipHelperStream_WriteLELong_m3630 (ZipHelperStream_t628 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		int64_t L_1 = ___value;
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_1>>(int32_t)((int32_t)32)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteLEUlong(System.UInt64)
extern "C" void ZipHelperStream_WriteLEUlong_m3631 (ZipHelperStream_t628 * __this, uint64_t ___value, const MethodInfo* method)
{
	{
		uint64_t L_0 = ___value;
		ZipHelperStream_WriteLEUint_m3629(__this, (((int32_t)((uint32_t)((int64_t)((int64_t)L_0&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))), /*hidden argument*/NULL);
		uint64_t L_1 = ___value;
		ZipHelperStream_WriteLEUint_m3629(__this, (((int32_t)((uint32_t)((int64_t)((uint64_t)L_1>>((int32_t)32)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipHelperStream::WriteDataDescriptor(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern "C" int32_t ZipHelperStream_WriteDataDescriptor_m3632 (ZipHelperStream_t628 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		ZipEntry_t591 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		V_0 = 0;
		ZipEntry_t591 * L_2 = ___entry;
		NullCheck(L_2);
		int32_t L_3 = ZipEntry_get_Flags_m3256(L_2, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_3&(int32_t)8)))
		{
			goto IL_007b;
		}
	}
	{
		ZipHelperStream_WriteLEInt_m3628(__this, ((int32_t)134695760), /*hidden argument*/NULL);
		ZipEntry_t591 * L_4 = ___entry;
		NullCheck(L_4);
		int64_t L_5 = ZipEntry_get_Crc_m3284(L_4, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_5))), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)((int32_t)L_6+(int32_t)8));
		ZipEntry_t591 * L_7 = ___entry;
		NullCheck(L_7);
		bool L_8 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_005d;
		}
	}
	{
		ZipEntry_t591 * L_9 = ___entry;
		NullCheck(L_9);
		int64_t L_10 = ZipEntry_get_CompressedSize_m3282(L_9, /*hidden argument*/NULL);
		ZipHelperStream_WriteLELong_m3630(__this, L_10, /*hidden argument*/NULL);
		ZipEntry_t591 * L_11 = ___entry;
		NullCheck(L_11);
		int64_t L_12 = ZipEntry_get_Size_m3280(L_11, /*hidden argument*/NULL);
		ZipHelperStream_WriteLELong_m3630(__this, L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		V_0 = ((int32_t)((int32_t)L_13+(int32_t)((int32_t)16)));
		goto IL_007b;
	}

IL_005d:
	{
		ZipEntry_t591 * L_14 = ___entry;
		NullCheck(L_14);
		int64_t L_15 = ZipEntry_get_CompressedSize_m3282(L_14, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_15))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_16 = ___entry;
		NullCheck(L_16);
		int64_t L_17 = ZipEntry_get_Size_m3280(L_16, /*hidden argument*/NULL);
		ZipHelperStream_WriteLEInt_m3628(__this, (((int32_t)((int32_t)L_17))), /*hidden argument*/NULL);
		int32_t L_18 = V_0;
		V_0 = ((int32_t)((int32_t)L_18+(int32_t)8));
	}

IL_007b:
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipHelperStream::ReadDataDescriptor(System.Boolean,ICSharpCode.SharpZipLib.Zip.DescriptorData)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral493;
extern "C" void ZipHelperStream_ReadDataDescriptor_m3633 (ZipHelperStream_t628 * __this, bool ___zip64, DescriptorData_t626 * ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral493 = il2cpp_codegen_string_literal_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)134695760))))
		{
			goto IL_001a;
		}
	}
	{
		ZipException_t594 * L_2 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_2, _stringLiteral493, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001a:
	{
		DescriptorData_t626 * L_3 = ___data;
		int32_t L_4 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		DescriptorData_set_Crc_m3595(L_3, (((int64_t)((int64_t)L_4))), /*hidden argument*/NULL);
		bool L_5 = ___zip64;
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		DescriptorData_t626 * L_6 = ___data;
		int64_t L_7 = ZipHelperStream_ReadLELong_m3625(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		DescriptorData_set_CompressedSize_m3591(L_6, L_7, /*hidden argument*/NULL);
		DescriptorData_t626 * L_8 = ___data;
		int64_t L_9 = ZipHelperStream_ReadLELong_m3625(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		DescriptorData_set_Size_m3593(L_8, L_9, /*hidden argument*/NULL);
		return;
	}

IL_0043:
	{
		DescriptorData_t626 * L_10 = ___data;
		int32_t L_11 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		DescriptorData_set_CompressedSize_m3591(L_10, (((int64_t)((int64_t)L_11))), /*hidden argument*/NULL);
		DescriptorData_t626 * L_12 = ___data;
		int32_t L_13 = ZipHelperStream_ReadLEInt_m3624(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		DescriptorData_set_Size_m3593(L_12, (((int64_t)((int64_t)L_13))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ReadDataHandler__ctor_m3634 (ReadDataHandler_t629 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::Invoke(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ReadDataHandler_Invoke_m3635 (ReadDataHandler_t629 * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		ReadDataHandler_Invoke_m3635((ReadDataHandler_t629 *)__this->___prev_9,___b, ___offset, ___length, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t *, Object_t * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___b, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___b, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef int32_t (*FunctionPointerType) (Object_t * __this, int32_t ___offset, int32_t ___length, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___b, ___offset, ___length,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" int32_t pinvoke_delegate_wrapper_ReadDataHandler_t629(Il2CppObject* delegate, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length)
{
	typedef int32_t (STDCALL *native_function_ptr_type)(uint8_t*, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___b' to native representation
	uint8_t* ____b_marshaled = { 0 };
	____b_marshaled = il2cpp_codegen_marshal_array<uint8_t>((Il2CppCodeGenArray*)___b);

	// Marshaling of parameter '___offset' to native representation

	// Marshaling of parameter '___length' to native representation

	// Native function invocation and marshaling of return value back from native representation
	int32_t _return_value = _il2cpp_pinvoke_func(____b_marshaled, ___offset, ___length);

	// Marshaling cleanup of parameter '___b' native representation

	// Marshaling cleanup of parameter '___offset' native representation

	// Marshaling cleanup of parameter '___length' native representation

	return _return_value;
}
// System.IAsyncResult ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::BeginInvoke(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern "C" Object_t * ReadDataHandler_BeginInvoke_m3636 (ReadDataHandler_t629 * __this, ByteU5BU5D_t129* ___b, int32_t ___offset, int32_t ___length, AsyncCallback_t330 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___b;
	__d_args[1] = Box(Int32_t447_il2cpp_TypeInfo_var, &___offset);
	__d_args[2] = Box(Int32_t447_il2cpp_TypeInfo_var, &___length);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream/ReadDataHandler::EndInvoke(System.IAsyncResult)
extern "C" int32_t ReadDataHandler_EndInvoke_m3637 (ReadDataHandler_t629 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(int32_t*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::.ctor(System.IO.Stream)
extern TypeInfo* Crc32_t513_il2cpp_TypeInfo_var;
extern TypeInfo* Inflater_t545_il2cpp_TypeInfo_var;
extern TypeInfo* ReadDataHandler_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var;
extern "C" void ZipInputStream__ctor_m3638 (ZipInputStream_t630 * __this, Stream_t506 * ___baseInputStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Crc32_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		Inflater_t545_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(385);
		ReadDataHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var = il2cpp_codegen_method_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	{
		Crc32_t513 * L_0 = (Crc32_t513 *)il2cpp_codegen_object_new (Crc32_t513_il2cpp_TypeInfo_var);
		Crc32__ctor_m2614(L_0, /*hidden argument*/NULL);
		__this->___crc_8 = L_0;
		Stream_t506 * L_1 = ___baseInputStream;
		Inflater_t545 * L_2 = (Inflater_t545 *)il2cpp_codegen_object_new (Inflater_t545_il2cpp_TypeInfo_var);
		Inflater__ctor_m3152(L_2, 1, /*hidden argument*/NULL);
		InflaterInputStream__ctor_m2753(__this, L_1, L_2, /*hidden argument*/NULL);
		IntPtr_t L_3 = { (void*)ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var };
		ReadDataHandler_t629 * L_4 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_4, __this, L_3, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_4;
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Password()
extern "C" String_t* ZipInputStream_get_Password_m3639 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___password_13);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::set_Password(System.String)
extern "C" void ZipInputStream_set_Password_m3640 (ZipInputStream_t630 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___password_13 = L_0;
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_CanDecompressEntry()
extern "C" bool ZipInputStream_get_CanDecompressEntry_m3641 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	{
		ZipEntry_t591 * L_0 = (__this->___entry_9);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		ZipEntry_t591 * L_1 = (__this->___entry_9);
		NullCheck(L_1);
		bool L_2 = ZipEntry_get_CanDecompress_m3270(L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0014:
	{
		return 0;
	}
}
// ICSharpCode.SharpZipLib.Zip.ZipEntry ICSharpCode.SharpZipLib.Zip.ZipInputStream::GetNextEntry()
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t447_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t591_il2cpp_TypeInfo_var;
extern TypeInfo* ReadDataHandler_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* ZipInputStream_InitialRead_m3651_MethodInfo_var;
extern const MethodInfo* ZipInputStream_ReadingNotSupported_m3650_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral494;
extern Il2CppCodeGenString* _stringLiteral495;
extern Il2CppCodeGenString* _stringLiteral496;
extern Il2CppCodeGenString* _stringLiteral497;
extern "C" ZipEntry_t591 * ZipInputStream_GetNextEntry_m3642 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		Int32_t447_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(39);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipEntry_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		ReadDataHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		ZipInputStream_InitialRead_m3651_MethodInfo_var = il2cpp_codegen_method_info_from_index(322);
		ZipInputStream_ReadingNotSupported_m3650_MethodInfo_var = il2cpp_codegen_method_info_from_index(323);
		_stringLiteral494 = il2cpp_codegen_string_literal_from_index(494);
		_stringLiteral495 = il2cpp_codegen_string_literal_from_index(495);
		_stringLiteral496 = il2cpp_codegen_string_literal_from_index(496);
		_stringLiteral497 = il2cpp_codegen_string_literal_from_index(497);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	uint32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	ByteU5BU5D_t129* V_7 = {0};
	String_t* V_8 = {0};
	ByteU5BU5D_t129* V_9 = {0};
	{
		Crc32_t513 * L_0 = (__this->___crc_8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral494, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipEntry_t591 * L_2 = (__this->___entry_9);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		ZipInputStream_CloseEntry_m3645(__this, /*hidden argument*/NULL);
	}

IL_0021:
	{
		InflaterInputBuffer_t546 * L_3 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_3);
		int32_t L_4 = InflaterInputBuffer_ReadLeInt_m3046(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)33639248))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)101010256))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)84233040))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)117853008))))
		{
			goto IL_0055;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)101075792)))))
		{
			goto IL_005d;
		}
	}

IL_0055:
	{
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, __this);
		return (ZipEntry_t591 *)NULL;
	}

IL_005d:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)808471376))))
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)134695760)))))
		{
			goto IL_0079;
		}
	}

IL_006d:
	{
		InflaterInputBuffer_t546 * L_12 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_12);
		int32_t L_13 = InflaterInputBuffer_ReadLeInt_m3046(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
	}

IL_0079:
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)67324752))))
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		Object_t * L_17 = Box(Int32_t447_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Format_m770(NULL /*static, unused*/, _stringLiteral496, L_17, /*hidden argument*/NULL);
		String_t* L_19 = String_Concat_m584(NULL /*static, unused*/, _stringLiteral495, L_18, /*hidden argument*/NULL);
		ZipException_t594 * L_20 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_00a1:
	{
		InflaterInputBuffer_t546 * L_21 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_21);
		int32_t L_22 = InflaterInputBuffer_ReadLeShort_m3045(L_21, /*hidden argument*/NULL);
		V_1 = (((int16_t)((int16_t)L_22)));
		InflaterInputBuffer_t546 * L_23 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_23);
		int32_t L_24 = InflaterInputBuffer_ReadLeShort_m3045(L_23, /*hidden argument*/NULL);
		__this->___flags_12 = L_24;
		InflaterInputBuffer_t546 * L_25 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_25);
		int32_t L_26 = InflaterInputBuffer_ReadLeShort_m3045(L_25, /*hidden argument*/NULL);
		__this->___method_11 = L_26;
		InflaterInputBuffer_t546 * L_27 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_27);
		int32_t L_28 = InflaterInputBuffer_ReadLeInt_m3046(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		InflaterInputBuffer_t546 * L_29 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_29);
		int32_t L_30 = InflaterInputBuffer_ReadLeInt_m3046(L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		InflaterInputBuffer_t546 * L_31 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_31);
		int32_t L_32 = InflaterInputBuffer_ReadLeInt_m3046(L_31, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = (((int64_t)((int64_t)L_32)));
		InflaterInputBuffer_t546 * L_33 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_33);
		int32_t L_34 = InflaterInputBuffer_ReadLeInt_m3046(L_33, /*hidden argument*/NULL);
		__this->___size_10 = (((int64_t)((int64_t)L_34)));
		InflaterInputBuffer_t546 * L_35 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_35);
		int32_t L_36 = InflaterInputBuffer_ReadLeShort_m3045(L_35, /*hidden argument*/NULL);
		V_4 = L_36;
		InflaterInputBuffer_t546 * L_37 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_37);
		int32_t L_38 = InflaterInputBuffer_ReadLeShort_m3045(L_37, /*hidden argument*/NULL);
		V_5 = L_38;
		int32_t L_39 = (__this->___flags_12);
		V_6 = ((((int32_t)((int32_t)((int32_t)L_39&(int32_t)1))) == ((int32_t)1))? 1 : 0);
		int32_t L_40 = V_4;
		V_7 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_40));
		InflaterInputBuffer_t546 * L_41 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		ByteU5BU5D_t129* L_42 = V_7;
		NullCheck(L_41);
		InflaterInputBuffer_ReadRawBuffer_m3041(L_41, L_42, /*hidden argument*/NULL);
		int32_t L_43 = (__this->___flags_12);
		ByteU5BU5D_t129* L_44 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		String_t* L_45 = ZipConstants_ConvertToStringExt_m3240(NULL /*static, unused*/, L_43, L_44, /*hidden argument*/NULL);
		V_8 = L_45;
		String_t* L_46 = V_8;
		int16_t L_47 = V_1;
		ZipEntry_t591 * L_48 = (ZipEntry_t591 *)il2cpp_codegen_object_new (ZipEntry_t591_il2cpp_TypeInfo_var);
		ZipEntry__ctor_m3246(L_48, L_46, L_47, /*hidden argument*/NULL);
		__this->___entry_9 = L_48;
		ZipEntry_t591 * L_49 = (__this->___entry_9);
		int32_t L_50 = (__this->___flags_12);
		NullCheck(L_49);
		ZipEntry_set_Flags_m3257(L_49, L_50, /*hidden argument*/NULL);
		ZipEntry_t591 * L_51 = (__this->___entry_9);
		int32_t L_52 = (__this->___method_11);
		NullCheck(L_51);
		ZipEntry_set_CompressionMethod_m3287(L_51, L_52, /*hidden argument*/NULL);
		int32_t L_53 = (__this->___flags_12);
		if (((int32_t)((int32_t)L_53&(int32_t)8)))
		{
			goto IL_01e3;
		}
	}
	{
		ZipEntry_t591 * L_54 = (__this->___entry_9);
		int32_t L_55 = V_3;
		NullCheck(L_54);
		ZipEntry_set_Crc_m3285(L_54, ((int64_t)((int64_t)(((int64_t)((int64_t)L_55)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_56 = (__this->___entry_9);
		int64_t L_57 = (__this->___size_10);
		NullCheck(L_56);
		ZipEntry_set_Size_m3281(L_56, ((int64_t)((int64_t)L_57&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_58 = (__this->___entry_9);
		int64_t L_59 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		NullCheck(L_58);
		ZipEntry_set_CompressedSize_m3283(L_58, ((int64_t)((int64_t)L_59&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_60 = (__this->___entry_9);
		int32_t L_61 = V_3;
		NullCheck(L_60);
		ZipEntry_set_CryptoCheckValue_m3255(L_60, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_61>>(int32_t)((int32_t)24)))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
		goto IL_0247;
	}

IL_01e3:
	{
		int32_t L_62 = V_3;
		if (!L_62)
		{
			goto IL_01f6;
		}
	}
	{
		ZipEntry_t591 * L_63 = (__this->___entry_9);
		int32_t L_64 = V_3;
		NullCheck(L_63);
		ZipEntry_set_Crc_m3285(L_63, ((int64_t)((int64_t)(((int64_t)((int64_t)L_64)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
	}

IL_01f6:
	{
		int64_t L_65 = (__this->___size_10);
		if ((((int64_t)L_65) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0214;
		}
	}
	{
		ZipEntry_t591 * L_66 = (__this->___entry_9);
		int64_t L_67 = (__this->___size_10);
		NullCheck(L_66);
		ZipEntry_set_Size_m3281(L_66, ((int64_t)((int64_t)L_67&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
	}

IL_0214:
	{
		int64_t L_68 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)L_68) == ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0232;
		}
	}
	{
		ZipEntry_t591 * L_69 = (__this->___entry_9);
		int64_t L_70 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		NullCheck(L_69);
		ZipEntry_set_CompressedSize_m3283(L_69, ((int64_t)((int64_t)L_70&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
	}

IL_0232:
	{
		ZipEntry_t591 * L_71 = (__this->___entry_9);
		uint32_t L_72 = V_2;
		NullCheck(L_71);
		ZipEntry_set_CryptoCheckValue_m3255(L_71, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((uint32_t)L_72>>8))&(int32_t)((int32_t)255)))))), /*hidden argument*/NULL);
	}

IL_0247:
	{
		ZipEntry_t591 * L_73 = (__this->___entry_9);
		uint32_t L_74 = V_2;
		NullCheck(L_73);
		ZipEntry_set_DosTime_m3276(L_73, (((int64_t)((uint64_t)L_74))), /*hidden argument*/NULL);
		int32_t L_75 = V_5;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_76 = V_5;
		V_9 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, L_76));
		InflaterInputBuffer_t546 * L_77 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		ByteU5BU5D_t129* L_78 = V_9;
		NullCheck(L_77);
		InflaterInputBuffer_ReadRawBuffer_m3041(L_77, L_78, /*hidden argument*/NULL);
		ZipEntry_t591 * L_79 = (__this->___entry_9);
		ByteU5BU5D_t129* L_80 = V_9;
		NullCheck(L_79);
		ZipEntry_set_ExtraData_m3289(L_79, L_80, /*hidden argument*/NULL);
	}

IL_027d:
	{
		ZipEntry_t591 * L_81 = (__this->___entry_9);
		NullCheck(L_81);
		ZipEntry_ProcessExtraData_m3290(L_81, 1, /*hidden argument*/NULL);
		ZipEntry_t591 * L_82 = (__this->___entry_9);
		NullCheck(L_82);
		int64_t L_83 = ZipEntry_get_CompressedSize_m3282(L_82, /*hidden argument*/NULL);
		if ((((int64_t)L_83) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_02a9;
		}
	}
	{
		ZipEntry_t591 * L_84 = (__this->___entry_9);
		NullCheck(L_84);
		int64_t L_85 = ZipEntry_get_CompressedSize_m3282(L_84, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = L_85;
	}

IL_02a9:
	{
		ZipEntry_t591 * L_86 = (__this->___entry_9);
		NullCheck(L_86);
		int64_t L_87 = ZipEntry_get_Size_m3280(L_86, /*hidden argument*/NULL);
		if ((((int64_t)L_87) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_02c9;
		}
	}
	{
		ZipEntry_t591 * L_88 = (__this->___entry_9);
		NullCheck(L_88);
		int64_t L_89 = ZipEntry_get_Size_m3280(L_88, /*hidden argument*/NULL);
		__this->___size_10 = L_89;
	}

IL_02c9:
	{
		int32_t L_90 = (__this->___method_11);
		if (L_90)
		{
			goto IL_0304;
		}
	}
	{
		bool L_91 = V_6;
		if (L_91)
		{
			goto IL_02e3;
		}
	}
	{
		int64_t L_92 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_93 = (__this->___size_10);
		if ((!(((uint64_t)L_92) == ((uint64_t)L_93))))
		{
			goto IL_02f9;
		}
	}

IL_02e3:
	{
		bool L_94 = V_6;
		if (!L_94)
		{
			goto IL_0304;
		}
	}
	{
		int64_t L_95 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_96 = (__this->___size_10);
		if ((((int64_t)((int64_t)((int64_t)L_95-(int64_t)(((int64_t)((int64_t)((int32_t)12))))))) == ((int64_t)L_96)))
		{
			goto IL_0304;
		}
	}

IL_02f9:
	{
		ZipException_t594 * L_97 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_97, _stringLiteral497, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_97);
	}

IL_0304:
	{
		ZipEntry_t591 * L_98 = (__this->___entry_9);
		NullCheck(L_98);
		bool L_99 = ZipEntry_IsCompressionMethodSupported_m3295(L_98, /*hidden argument*/NULL);
		if (!L_99)
		{
			goto IL_0325;
		}
	}
	{
		IntPtr_t L_100 = { (void*)ZipInputStream_InitialRead_m3651_MethodInfo_var };
		ReadDataHandler_t629 * L_101 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_101, __this, L_100, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_101;
		goto IL_0337;
	}

IL_0325:
	{
		IntPtr_t L_102 = { (void*)ZipInputStream_ReadingNotSupported_m3650_MethodInfo_var };
		ReadDataHandler_t629 * L_103 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_103, __this, L_102, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_103;
	}

IL_0337:
	{
		ZipEntry_t591 * L_104 = (__this->___entry_9);
		return L_104;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadDataDescriptor()
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral493;
extern "C" void ZipInputStream_ReadDataDescriptor_m3643 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral493 = il2cpp_codegen_string_literal_from_index(493);
		s_Il2CppMethodIntialized = true;
	}
	{
		InflaterInputBuffer_t546 * L_0 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_0);
		int32_t L_1 = InflaterInputBuffer_ReadLeInt_m3046(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) == ((int32_t)((int32_t)134695760))))
		{
			goto IL_001d;
		}
	}
	{
		ZipException_t594 * L_2 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_2, _stringLiteral493, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001d:
	{
		ZipEntry_t591 * L_3 = (__this->___entry_9);
		InflaterInputBuffer_t546 * L_4 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_4);
		int32_t L_5 = InflaterInputBuffer_ReadLeInt_m3046(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ZipEntry_set_Crc_m3285(L_3, ((int64_t)((int64_t)(((int64_t)((int64_t)L_5)))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_6 = (__this->___entry_9);
		NullCheck(L_6);
		bool L_7 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0068;
		}
	}
	{
		InflaterInputBuffer_t546 * L_8 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_8);
		int64_t L_9 = InflaterInputBuffer_ReadLeLong_m3047(L_8, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = L_9;
		InflaterInputBuffer_t546 * L_10 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_10);
		int64_t L_11 = InflaterInputBuffer_ReadLeLong_m3047(L_10, /*hidden argument*/NULL);
		__this->___size_10 = L_11;
		goto IL_008c;
	}

IL_0068:
	{
		InflaterInputBuffer_t546 * L_12 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_12);
		int32_t L_13 = InflaterInputBuffer_ReadLeInt_m3046(L_12, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = (((int64_t)((int64_t)L_13)));
		InflaterInputBuffer_t546 * L_14 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_14);
		int32_t L_15 = InflaterInputBuffer_ReadLeInt_m3046(L_14, /*hidden argument*/NULL);
		__this->___size_10 = (((int64_t)((int64_t)L_15)));
	}

IL_008c:
	{
		ZipEntry_t591 * L_16 = (__this->___entry_9);
		int64_t L_17 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		NullCheck(L_16);
		ZipEntry_set_CompressedSize_m3283(L_16, L_17, /*hidden argument*/NULL);
		ZipEntry_t591 * L_18 = (__this->___entry_9);
		int64_t L_19 = (__this->___size_10);
		NullCheck(L_18);
		ZipEntry_set_Size_m3281(L_18, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::CompleteCloseEntry(System.Boolean)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral426;
extern "C" void ZipInputStream_CompleteCloseEntry_m3644 (ZipInputStream_t630 * __this, bool ___testCrc, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral426 = il2cpp_codegen_string_literal_from_index(426);
		s_Il2CppMethodIntialized = true;
	}
	{
		InflaterInputStream_StopDecrypting_m2758(__this, /*hidden argument*/NULL);
		int32_t L_0 = (__this->___flags_12);
		if (!((int32_t)((int32_t)L_0&(int32_t)8)))
		{
			goto IL_0016;
		}
	}
	{
		ZipInputStream_ReadDataDescriptor_m3643(__this, /*hidden argument*/NULL);
	}

IL_0016:
	{
		__this->___size_10 = (((int64_t)((int64_t)0)));
		bool L_1 = ___testCrc;
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		Crc32_t513 * L_2 = (__this->___crc_8);
		NullCheck(L_2);
		int64_t L_3 = Crc32_get_Value_m2608(L_2, /*hidden argument*/NULL);
		ZipEntry_t591 * L_4 = (__this->___entry_9);
		NullCheck(L_4);
		int64_t L_5 = ZipEntry_get_Crc_m3284(L_4, /*hidden argument*/NULL);
		if ((((int64_t)((int64_t)((int64_t)L_3&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))) == ((int64_t)L_5)))
		{
			goto IL_0056;
		}
	}
	{
		ZipEntry_t591 * L_6 = (__this->___entry_9);
		NullCheck(L_6);
		int64_t L_7 = ZipEntry_get_Crc_m3284(L_6, /*hidden argument*/NULL);
		if ((((int64_t)L_7) == ((int64_t)(((int64_t)((int64_t)(-1)))))))
		{
			goto IL_0056;
		}
	}
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral426, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0056:
	{
		Crc32_t513 * L_9 = (__this->___crc_8);
		NullCheck(L_9);
		Crc32_Reset_m2610(L_9, /*hidden argument*/NULL);
		int32_t L_10 = (__this->___method_11);
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_0075;
		}
	}
	{
		Inflater_t545 * L_11 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_11);
		Inflater_Reset_m3153(L_11, /*hidden argument*/NULL);
	}

IL_0075:
	{
		__this->___entry_9 = (ZipEntry_t591 *)NULL;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::CloseEntry()
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral498;
extern Il2CppCodeGenString* _stringLiteral499;
extern "C" void ZipInputStream_CloseEntry_m3645 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral498 = il2cpp_codegen_string_literal_from_index(498);
		_stringLiteral499 = il2cpp_codegen_string_literal_from_index(499);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	int64_t V_1 = 0;
	{
		Crc32_t513 * L_0 = (__this->___crc_8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral498, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipEntry_t591 * L_2 = (__this->___entry_9);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_3 = (__this->___method_11);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_4 = (__this->___flags_12);
		if (!((int32_t)((int32_t)L_4&(int32_t)8)))
		{
			goto IL_0049;
		}
	}
	{
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)4096)));
	}

IL_003a:
	{
		ByteU5BU5D_t129* L_5 = V_0;
		ByteU5BU5D_t129* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_5, 0, (((int32_t)((int32_t)(((Array_t *)L_6)->max_length)))));
		if ((((int32_t)L_7) > ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		return;
	}

IL_0049:
	{
		int64_t L_8 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		Inflater_t545 * L_9 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_9);
		int64_t L_10 = Inflater_get_TotalIn_m3170(L_9, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = ((int64_t)((int64_t)L_8-(int64_t)L_10));
		InflaterInputBuffer_t546 * L_11 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		InflaterInputBuffer_t546 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = InflaterInputBuffer_get_Available_m3037(L_12, /*hidden argument*/NULL);
		Inflater_t545 * L_14 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_14);
		int32_t L_15 = Inflater_get_RemainingInput_m3171(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		InflaterInputBuffer_set_Available_m3038(L_12, ((int32_t)((int32_t)L_13+(int32_t)L_15)), /*hidden argument*/NULL);
	}

IL_007e:
	{
		InflaterInputBuffer_t546 * L_16 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_16);
		int32_t L_17 = InflaterInputBuffer_get_Available_m3037(L_16, /*hidden argument*/NULL);
		int64_t L_18 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)(((int64_t)((int64_t)L_17)))) <= ((int64_t)L_18)))
		{
			goto IL_00bd;
		}
	}
	{
		int64_t L_19 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)L_19) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00bd;
		}
	}
	{
		InflaterInputBuffer_t546 * L_20 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		InflaterInputBuffer_t546 * L_21 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_21);
		int32_t L_22 = InflaterInputBuffer_get_Available_m3037(L_21, /*hidden argument*/NULL);
		int64_t L_23 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		NullCheck(L_20);
		InflaterInputBuffer_set_Available_m3038(L_20, (((int32_t)((int32_t)((int64_t)((int64_t)(((int64_t)((int64_t)L_22)))-(int64_t)L_23))))), /*hidden argument*/NULL);
		goto IL_0119;
	}

IL_00bd:
	{
		int64_t L_24 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		InflaterInputBuffer_t546 * L_25 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_25);
		int32_t L_26 = InflaterInputBuffer_get_Available_m3037(L_25, /*hidden argument*/NULL);
		((InflaterInputStream_t544 *)__this)->___csize_4 = ((int64_t)((int64_t)L_24-(int64_t)(((int64_t)((int64_t)L_26)))));
		InflaterInputBuffer_t546 * L_27 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_27);
		InflaterInputBuffer_set_Available_m3038(L_27, 0, /*hidden argument*/NULL);
		goto IL_010f;
	}

IL_00e4:
	{
		int64_t L_28 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_29 = InflaterInputStream_Skip_m2757(__this, L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		int64_t L_30 = V_1;
		if ((((int64_t)L_30) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0101;
		}
	}
	{
		ZipException_t594 * L_31 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_31, _stringLiteral499, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
	}

IL_0101:
	{
		int64_t L_32 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_33 = V_1;
		((InflaterInputStream_t544 *)__this)->___csize_4 = ((int64_t)((int64_t)L_32-(int64_t)L_33));
	}

IL_010f:
	{
		int64_t L_34 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((!(((uint64_t)L_34) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_00e4;
		}
	}

IL_0119:
	{
		ZipInputStream_CompleteCloseEntry_m3644(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Available()
extern "C" int32_t ZipInputStream_get_Available_m3646 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	{
		ZipEntry_t591 * L_0 = (__this->___entry_9);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Int64 ICSharpCode.SharpZipLib.Zip.ZipInputStream::get_Length()
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral500;
extern Il2CppCodeGenString* _stringLiteral501;
extern "C" int64_t ZipInputStream_get_Length_m3647 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		_stringLiteral500 = il2cpp_codegen_string_literal_from_index(500);
		_stringLiteral501 = il2cpp_codegen_string_literal_from_index(501);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipEntry_t591 * L_0 = (__this->___entry_9);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		ZipEntry_t591 * L_1 = (__this->___entry_9);
		NullCheck(L_1);
		int64_t L_2 = ZipEntry_get_Size_m3280(L_1, /*hidden argument*/NULL);
		if ((((int64_t)L_2) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0023;
		}
	}
	{
		ZipEntry_t591 * L_3 = (__this->___entry_9);
		NullCheck(L_3);
		int64_t L_4 = ZipEntry_get_Size_m3280(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0023:
	{
		ZipException_t594 * L_5 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_5, _stringLiteral500, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_002e:
	{
		InvalidOperationException_t658 * L_6 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_6, _stringLiteral501, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadByte()
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern "C" int32_t ZipInputStream_ReadByte_m3648 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	{
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, 1));
		ByteU5BU5D_t129* L_0 = V_0;
		int32_t L_1 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(15 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, 1);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		return (-1);
	}

IL_0015:
	{
		ByteU5BU5D_t129* L_2 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		int32_t L_3 = 0;
		return ((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3, sizeof(uint8_t)))&(int32_t)((int32_t)255)));
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadingNotAvailable(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral502;
extern "C" int32_t ZipInputStream_ReadingNotAvailable_m3649 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		_stringLiteral502 = il2cpp_codegen_string_literal_from_index(502);
		s_Il2CppMethodIntialized = true;
	}
	{
		InvalidOperationException_t658 * L_0 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_0, _stringLiteral502, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::ReadingNotSupported(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral503;
extern "C" int32_t ZipInputStream_ReadingNotSupported_m3650 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral503 = il2cpp_codegen_string_literal_from_index(503);
		s_Il2CppMethodIntialized = true;
	}
	{
		ZipException_t594 * L_0 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_0, _stringLiteral503, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::InitialRead(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* PkzipClassicManaged_t541_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* ReadDataHandler_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* ZipInputStream_BodyRead_m3653_MethodInfo_var;
extern const MethodInfo* ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral504;
extern Il2CppCodeGenString* _stringLiteral221;
extern Il2CppCodeGenString* _stringLiteral505;
extern Il2CppCodeGenString* _stringLiteral487;
extern Il2CppCodeGenString* _stringLiteral506;
extern "C" int32_t ZipInputStream_InitialRead_m3651 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___destination, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		PkzipClassicManaged_t541_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(392);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		ReadDataHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		ZipInputStream_BodyRead_m3653_MethodInfo_var = il2cpp_codegen_method_info_from_index(324);
		ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var = il2cpp_codegen_method_info_from_index(321);
		_stringLiteral504 = il2cpp_codegen_string_literal_from_index(504);
		_stringLiteral221 = il2cpp_codegen_string_literal_from_index(221);
		_stringLiteral505 = il2cpp_codegen_string_literal_from_index(505);
		_stringLiteral487 = il2cpp_codegen_string_literal_from_index(487);
		_stringLiteral506 = il2cpp_codegen_string_literal_from_index(506);
		s_Il2CppMethodIntialized = true;
	}
	PkzipClassicManaged_t541 * V_0 = {0};
	ByteU5BU5D_t129* V_1 = {0};
	ByteU5BU5D_t129* V_2 = {0};
	int32_t V_3 = 0;
	{
		bool L_0 = ZipInputStream_get_CanDecompressEntry_m3641(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		ZipEntry_t591 * L_1 = (__this->___entry_9);
		NullCheck(L_1);
		int32_t L_2 = ZipEntry_get_Version_m3269(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		String_t* L_3 = Int32_ToString_m3813((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m607(NULL /*static, unused*/, _stringLiteral504, L_3, _stringLiteral221, /*hidden argument*/NULL);
		ZipException_t594 * L_5 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_5, L_4, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0030:
	{
		ZipEntry_t591 * L_6 = (__this->___entry_9);
		NullCheck(L_6);
		bool L_7 = ZipEntry_get_IsCrypted_m3250(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00f8;
		}
	}
	{
		String_t* L_8 = (__this->___password_13);
		if (L_8)
		{
			goto IL_0053;
		}
	}
	{
		ZipException_t594 * L_9 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_9, _stringLiteral505, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0053:
	{
		PkzipClassicManaged_t541 * L_10 = (PkzipClassicManaged_t541 *)il2cpp_codegen_object_new (PkzipClassicManaged_t541_il2cpp_TypeInfo_var);
		PkzipClassicManaged__ctor_m2746(L_10, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = (__this->___password_13);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_12 = ZipConstants_ConvertToArray_m3241(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_13 = PkzipClassic_GenerateKeys_m2713(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		InflaterInputBuffer_t546 * L_14 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		PkzipClassicManaged_t541 * L_15 = V_0;
		ByteU5BU5D_t129* L_16 = V_1;
		NullCheck(L_15);
		Object_t * L_17 = (Object_t *)VirtFuncInvoker2< Object_t *, ByteU5BU5D_t129*, ByteU5BU5D_t129* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor(System.Byte[],System.Byte[]) */, L_15, L_16, (ByteU5BU5D_t129*)(ByteU5BU5D_t129*)NULL);
		NullCheck(L_14);
		InflaterInputBuffer_set_CryptoTransform_m3048(L_14, L_17, /*hidden argument*/NULL);
		V_2 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)12)));
		InflaterInputBuffer_t546 * L_18 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		ByteU5BU5D_t129* L_19 = V_2;
		NullCheck(L_18);
		InflaterInputBuffer_ReadClearTextBuffer_m3043(L_18, L_19, 0, ((int32_t)12), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_20 = V_2;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, ((int32_t)11));
		int32_t L_21 = ((int32_t)11);
		ZipEntry_t591 * L_22 = (__this->___entry_9);
		NullCheck(L_22);
		uint8_t L_23 = ZipEntry_get_CryptoCheckValue_m3254(L_22, /*hidden argument*/NULL);
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_20, L_21, sizeof(uint8_t)))) == ((int32_t)L_23)))
		{
			goto IL_00b1;
		}
	}
	{
		ZipException_t594 * L_24 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_24, _stringLiteral487, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_24);
	}

IL_00b1:
	{
		int64_t L_25 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)L_25) < ((int64_t)(((int64_t)((int64_t)((int32_t)12)))))))
		{
			goto IL_00ce;
		}
	}
	{
		int64_t L_26 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		((InflaterInputStream_t544 *)__this)->___csize_4 = ((int64_t)((int64_t)L_26-(int64_t)(((int64_t)((int64_t)((int32_t)12))))));
		goto IL_0104;
	}

IL_00ce:
	{
		ZipEntry_t591 * L_27 = (__this->___entry_9);
		NullCheck(L_27);
		int32_t L_28 = ZipEntry_get_Flags_m3256(L_27, /*hidden argument*/NULL);
		if (((int32_t)((int32_t)L_28&(int32_t)8)))
		{
			goto IL_0104;
		}
	}
	{
		int64_t L_29 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_30 = L_29;
		Object_t * L_31 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_30);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_32 = String_Format_m770(NULL /*static, unused*/, _stringLiteral506, L_31, /*hidden argument*/NULL);
		ZipException_t594 * L_33 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_33, L_32, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_33);
	}

IL_00f8:
	{
		InflaterInputBuffer_t546 * L_34 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_34);
		InflaterInputBuffer_set_CryptoTransform_m3048(L_34, (Object_t *)NULL, /*hidden argument*/NULL);
	}

IL_0104:
	{
		int64_t L_35 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)L_35) > ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_36 = (__this->___flags_12);
		if (!((int32_t)((int32_t)L_36&(int32_t)8)))
		{
			goto IL_015c;
		}
	}

IL_0118:
	{
		int32_t L_37 = (__this->___method_11);
		if ((!(((uint32_t)L_37) == ((uint32_t)8))))
		{
			goto IL_0140;
		}
	}
	{
		InflaterInputBuffer_t546 * L_38 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		NullCheck(L_38);
		int32_t L_39 = InflaterInputBuffer_get_Available_m3037(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0140;
		}
	}
	{
		InflaterInputBuffer_t546 * L_40 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		Inflater_t545 * L_41 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_40);
		InflaterInputBuffer_SetInflaterInput_m3039(L_40, L_41, /*hidden argument*/NULL);
	}

IL_0140:
	{
		IntPtr_t L_42 = { (void*)ZipInputStream_BodyRead_m3653_MethodInfo_var };
		ReadDataHandler_t629 * L_43 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_43, __this, L_42, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_43;
		ByteU5BU5D_t129* L_44 = ___destination;
		int32_t L_45 = ___offset;
		int32_t L_46 = ___count;
		int32_t L_47 = ZipInputStream_BodyRead_m3653(__this, L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}

IL_015c:
	{
		IntPtr_t L_48 = { (void*)ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var };
		ReadDataHandler_t629 * L_49 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_49, __this, L_48, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_49;
		return 0;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::Read(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral235;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral357;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral507;
extern "C" int32_t ZipInputStream_Read_m3652 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral357 = il2cpp_codegen_string_literal_from_index(357);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral507 = il2cpp_codegen_string_literal_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t129* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral235, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_3 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3697(L_3, _stringLiteral247, _stringLiteral357, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0022:
	{
		int32_t L_4 = ___count;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0036;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_5 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3697(L_5, _stringLiteral248, _stringLiteral357, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0036:
	{
		ByteU5BU5D_t129* L_6 = ___buffer;
		NullCheck(L_6);
		int32_t L_7 = ___offset;
		int32_t L_8 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_6)->max_length))))-(int32_t)L_7))) >= ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentException_t488 * L_9 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2433(L_9, _stringLiteral507, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_9);
	}

IL_0049:
	{
		ReadDataHandler_t629 * L_10 = (__this->___internalReader_7);
		ByteU5BU5D_t129* L_11 = ___buffer;
		int32_t L_12 = ___offset;
		int32_t L_13 = ___count;
		NullCheck(L_10);
		int32_t L_14 = ReadDataHandler_Invoke_m3635(L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipInputStream::BodyRead(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral498;
extern Il2CppCodeGenString* _stringLiteral508;
extern Il2CppCodeGenString* _stringLiteral509;
extern Il2CppCodeGenString* _stringLiteral510;
extern Il2CppCodeGenString* _stringLiteral511;
extern Il2CppCodeGenString* _stringLiteral512;
extern Il2CppCodeGenString* _stringLiteral513;
extern "C" int32_t ZipInputStream_BodyRead_m3653 (ZipInputStream_t630 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ObjectU5BU5D_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral498 = il2cpp_codegen_string_literal_from_index(498);
		_stringLiteral508 = il2cpp_codegen_string_literal_from_index(508);
		_stringLiteral509 = il2cpp_codegen_string_literal_from_index(509);
		_stringLiteral510 = il2cpp_codegen_string_literal_from_index(510);
		_stringLiteral511 = il2cpp_codegen_string_literal_from_index(511);
		_stringLiteral512 = il2cpp_codegen_string_literal_from_index(512);
		_stringLiteral513 = il2cpp_codegen_string_literal_from_index(513);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ObjectU5BU5D_t166* V_2 = {0};
	{
		Crc32_t513 * L_0 = (__this->___crc_8);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral498, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ZipEntry_t591 * L_2 = (__this->___entry_9);
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_3 = ___count;
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0021;
		}
	}

IL_001f:
	{
		return 0;
	}

IL_0021:
	{
		int32_t L_4 = ___offset;
		int32_t L_5 = ___count;
		ByteU5BU5D_t129* L_6 = ___buffer;
		NullCheck(L_6);
		if ((((int32_t)((int32_t)((int32_t)L_4+(int32_t)L_5))) <= ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_6)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		ArgumentException_t488 * L_7 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2433(L_7, _stringLiteral508, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0034:
	{
		V_0 = 0;
		int32_t L_8 = (__this->___method_11);
		V_1 = L_8;
		int32_t L_9 = V_1;
		if ((((int32_t)L_9) == ((int32_t)0)))
		{
			goto IL_0142;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) == ((uint32_t)8))))
		{
			goto IL_01b2;
		}
	}
	{
		ByteU5BU5D_t129* L_11 = ___buffer;
		int32_t L_12 = ___offset;
		int32_t L_13 = ___count;
		int32_t L_14 = InflaterInputStream_Read_m2774(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		___count = L_14;
		int32_t L_15 = ___count;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_01b2;
		}
	}
	{
		Inflater_t545 * L_16 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_16);
		bool L_17 = Inflater_get_IsFinished_m3167(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		ZipException_t594 * L_18 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_18, _stringLiteral509, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0075:
	{
		InflaterInputBuffer_t546 * L_19 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		Inflater_t545 * L_20 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_20);
		int32_t L_21 = Inflater_get_RemainingInput_m3171(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		InflaterInputBuffer_set_Available_m3038(L_19, L_21, /*hidden argument*/NULL);
		int32_t L_22 = (__this->___flags_12);
		if (((int32_t)((int32_t)L_22&(int32_t)8)))
		{
			goto IL_0133;
		}
	}
	{
		Inflater_t545 * L_23 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_23);
		int64_t L_24 = Inflater_get_TotalIn_m3170(L_23, /*hidden argument*/NULL);
		int64_t L_25 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((!(((uint64_t)L_24) == ((uint64_t)L_25))))
		{
			goto IL_00be;
		}
	}
	{
		Inflater_t545 * L_26 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_26);
		int64_t L_27 = Inflater_get_TotalOut_m3169(L_26, /*hidden argument*/NULL);
		int64_t L_28 = (__this->___size_10);
		if ((((int64_t)L_27) == ((int64_t)L_28)))
		{
			goto IL_0133;
		}
	}

IL_00be:
	{
		V_2 = ((ObjectU5BU5D_t166*)SZArrayNew(ObjectU5BU5D_t166_il2cpp_TypeInfo_var, 8));
		ObjectU5BU5D_t166* L_29 = V_2;
		NullCheck(L_29);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_29, 0);
		ArrayElementTypeCheck (L_29, _stringLiteral510);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_29, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral510;
		ObjectU5BU5D_t166* L_30 = V_2;
		int64_t L_31 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int64_t L_32 = L_31;
		Object_t * L_33 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_30, 1);
		ArrayElementTypeCheck (L_30, L_33);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_30, 1, sizeof(Object_t *))) = (Object_t *)L_33;
		ObjectU5BU5D_t166* L_34 = V_2;
		NullCheck(L_34);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_34, 2);
		ArrayElementTypeCheck (L_34, _stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_34, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral511;
		ObjectU5BU5D_t166* L_35 = V_2;
		int64_t L_36 = (__this->___size_10);
		int64_t L_37 = L_36;
		Object_t * L_38 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 3);
		ArrayElementTypeCheck (L_35, L_38);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 3, sizeof(Object_t *))) = (Object_t *)L_38;
		ObjectU5BU5D_t166* L_39 = V_2;
		NullCheck(L_39);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_39, 4);
		ArrayElementTypeCheck (L_39, _stringLiteral512);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_39, 4, sizeof(Object_t *))) = (Object_t *)_stringLiteral512;
		ObjectU5BU5D_t166* L_40 = V_2;
		Inflater_t545 * L_41 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_41);
		int64_t L_42 = Inflater_get_TotalIn_m3170(L_41, /*hidden argument*/NULL);
		int64_t L_43 = L_42;
		Object_t * L_44 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_43);
		NullCheck(L_40);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 5);
		ArrayElementTypeCheck (L_40, L_44);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_40, 5, sizeof(Object_t *))) = (Object_t *)L_44;
		ObjectU5BU5D_t166* L_45 = V_2;
		NullCheck(L_45);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_45, 6);
		ArrayElementTypeCheck (L_45, _stringLiteral511);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_45, 6, sizeof(Object_t *))) = (Object_t *)_stringLiteral511;
		ObjectU5BU5D_t166* L_46 = V_2;
		Inflater_t545 * L_47 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_47);
		int64_t L_48 = Inflater_get_TotalOut_m3169(L_47, /*hidden argument*/NULL);
		int64_t L_49 = L_48;
		Object_t * L_50 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_49);
		NullCheck(L_46);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_46, 7);
		ArrayElementTypeCheck (L_46, L_50);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_46, 7, sizeof(Object_t *))) = (Object_t *)L_50;
		ObjectU5BU5D_t166* L_51 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_52 = String_Concat_m569(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		ZipException_t594 * L_53 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_53, L_52, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_53);
	}

IL_0133:
	{
		Inflater_t545 * L_54 = (((InflaterInputStream_t544 *)__this)->___inf_1);
		NullCheck(L_54);
		Inflater_Reset_m3153(L_54, /*hidden argument*/NULL);
		V_0 = 1;
		goto IL_01b2;
	}

IL_0142:
	{
		int32_t L_55 = ___count;
		int64_t L_56 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)(((int64_t)((int64_t)L_55)))) <= ((int64_t)L_56)))
		{
			goto IL_015f;
		}
	}
	{
		int64_t L_57 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((((int64_t)L_57) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_015f;
		}
	}
	{
		int64_t L_58 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		___count = (((int32_t)((int32_t)L_58)));
	}

IL_015f:
	{
		int32_t L_59 = ___count;
		if ((((int32_t)L_59) <= ((int32_t)0)))
		{
			goto IL_0195;
		}
	}
	{
		InflaterInputBuffer_t546 * L_60 = (((InflaterInputStream_t544 *)__this)->___inputBuffer_2);
		ByteU5BU5D_t129* L_61 = ___buffer;
		int32_t L_62 = ___offset;
		int32_t L_63 = ___count;
		NullCheck(L_60);
		int32_t L_64 = InflaterInputBuffer_ReadClearTextBuffer_m3043(L_60, L_61, L_62, L_63, /*hidden argument*/NULL);
		___count = L_64;
		int32_t L_65 = ___count;
		if ((((int32_t)L_65) <= ((int32_t)0)))
		{
			goto IL_0195;
		}
	}
	{
		int64_t L_66 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		int32_t L_67 = ___count;
		((InflaterInputStream_t544 *)__this)->___csize_4 = ((int64_t)((int64_t)L_66-(int64_t)(((int64_t)((int64_t)L_67)))));
		int64_t L_68 = (__this->___size_10);
		int32_t L_69 = ___count;
		__this->___size_10 = ((int64_t)((int64_t)L_68-(int64_t)(((int64_t)((int64_t)L_69)))));
	}

IL_0195:
	{
		int64_t L_70 = (((InflaterInputStream_t544 *)__this)->___csize_4);
		if ((!(((uint64_t)L_70) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_01a3;
		}
	}
	{
		V_0 = 1;
		goto IL_01b2;
	}

IL_01a3:
	{
		int32_t L_71 = ___count;
		if ((((int32_t)L_71) >= ((int32_t)0)))
		{
			goto IL_01b2;
		}
	}
	{
		ZipException_t594 * L_72 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_72, _stringLiteral513, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_72);
	}

IL_01b2:
	{
		int32_t L_73 = ___count;
		if ((((int32_t)L_73) <= ((int32_t)0)))
		{
			goto IL_01c4;
		}
	}
	{
		Crc32_t513 * L_74 = (__this->___crc_8);
		ByteU5BU5D_t129* L_75 = ___buffer;
		int32_t L_76 = ___offset;
		int32_t L_77 = ___count;
		NullCheck(L_74);
		Crc32_Update_m2613(L_74, L_75, L_76, L_77, /*hidden argument*/NULL);
	}

IL_01c4:
	{
		bool L_78 = V_0;
		if (!L_78)
		{
			goto IL_01ce;
		}
	}
	{
		ZipInputStream_CompleteCloseEntry_m3644(__this, 1, /*hidden argument*/NULL);
	}

IL_01ce:
	{
		int32_t L_79 = ___count;
		return L_79;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipInputStream::Close()
extern TypeInfo* ReadDataHandler_t629_il2cpp_TypeInfo_var;
extern const MethodInfo* ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var;
extern "C" void ZipInputStream_Close_m3654 (ZipInputStream_t630 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ReadDataHandler_t629_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(467);
		ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var = il2cpp_codegen_method_info_from_index(321);
		s_Il2CppMethodIntialized = true;
	}
	{
		IntPtr_t L_0 = { (void*)ZipInputStream_ReadingNotAvailable_m3649_MethodInfo_var };
		ReadDataHandler_t629 * L_1 = (ReadDataHandler_t629 *)il2cpp_codegen_object_new (ReadDataHandler_t629_il2cpp_TypeInfo_var);
		ReadDataHandler__ctor_m3634(L_1, __this, L_0, /*hidden argument*/NULL);
		__this->___internalReader_7 = L_1;
		__this->___crc_8 = (Crc32_t513 *)NULL;
		__this->___entry_9 = (ZipEntry_t591 *)NULL;
		InflaterInputStream_Close_m2773(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor()
extern "C" void ZipNameTransform__ctor_m3655 (ZipNameTransform_t631 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.ctor(System.String)
extern "C" void ZipNameTransform__ctor_m3656 (ZipNameTransform_t631 * __this, String_t* ___trimPrefix, const MethodInfo* method)
{
	{
		Object__ctor_m472(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___trimPrefix;
		ZipNameTransform_set_TrimPrefix_m3661(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::.cctor()
extern TypeInfo* Path_t657_il2cpp_TypeInfo_var;
extern TypeInfo* CharU5BU5D_t341_il2cpp_TypeInfo_var;
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern "C" void ZipNameTransform__cctor_m3657 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Path_t657_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(375);
		CharU5BU5D_t341_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(267);
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	CharU5BU5D_t341* V_0 = {0};
	int32_t V_1 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Path_t657_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_0 = Path_GetInvalidPathChars_m3768(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		CharU5BU5D_t341* L_1 = V_0;
		NullCheck(L_1);
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_1)->max_length))))+(int32_t)2));
		int32_t L_2 = V_1;
		((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_2 = ((CharU5BU5D_t341*)SZArrayNew(CharU5BU5D_t341_il2cpp_TypeInfo_var, L_2));
		CharU5BU5D_t341* L_3 = V_0;
		CharU5BU5D_t341* L_4 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_2;
		CharU5BU5D_t341* L_5 = V_0;
		NullCheck(L_5);
		Array_Copy_m3691(NULL /*static, unused*/, (Array_t *)(Array_t *)L_3, 0, (Array_t *)(Array_t *)L_4, 0, (((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))), /*hidden argument*/NULL);
		CharU5BU5D_t341* L_6 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_2;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_6, ((int32_t)((int32_t)L_7-(int32_t)1)), sizeof(uint16_t))) = (uint16_t)((int32_t)42);
		CharU5BU5D_t341* L_8 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_2;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, ((int32_t)((int32_t)L_9-(int32_t)2)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_8, ((int32_t)((int32_t)L_9-(int32_t)2)), sizeof(uint16_t))) = (uint16_t)((int32_t)63);
		CharU5BU5D_t341* L_10 = V_0;
		NullCheck(L_10);
		V_1 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length))))+(int32_t)4));
		int32_t L_11 = V_1;
		((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1 = ((CharU5BU5D_t341*)SZArrayNew(CharU5BU5D_t341_il2cpp_TypeInfo_var, L_11));
		CharU5BU5D_t341* L_12 = V_0;
		CharU5BU5D_t341* L_13 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		CharU5BU5D_t341* L_14 = V_0;
		NullCheck(L_14);
		Array_Copy_m3691(NULL /*static, unused*/, (Array_t *)(Array_t *)L_12, 0, (Array_t *)(Array_t *)L_13, 0, (((int32_t)((int32_t)(((Array_t *)L_14)->max_length)))), /*hidden argument*/NULL);
		CharU5BU5D_t341* L_15 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_15, ((int32_t)((int32_t)L_16-(int32_t)1)), sizeof(uint16_t))) = (uint16_t)((int32_t)58);
		CharU5BU5D_t341* L_17 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, ((int32_t)((int32_t)L_18-(int32_t)2)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_17, ((int32_t)((int32_t)L_18-(int32_t)2)), sizeof(uint16_t))) = (uint16_t)((int32_t)92);
		CharU5BU5D_t341* L_19 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, ((int32_t)((int32_t)L_20-(int32_t)3)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_19, ((int32_t)((int32_t)L_20-(int32_t)3)), sizeof(uint16_t))) = (uint16_t)((int32_t)42);
		CharU5BU5D_t341* L_21 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, ((int32_t)((int32_t)L_22-(int32_t)4)));
		*((uint16_t*)(uint16_t*)SZArrayLdElema(L_21, ((int32_t)((int32_t)L_22-(int32_t)4)), sizeof(uint16_t))) = (uint16_t)((int32_t)63);
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformDirectory(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral392;
extern "C" String_t* ZipNameTransform_TransformDirectory_m3658 (ZipNameTransform_t631 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral392 = il2cpp_codegen_string_literal_from_index(392);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name;
		String_t* L_1 = ZipNameTransform_TransformFile_m3659(__this, L_0, /*hidden argument*/NULL);
		___name = L_1;
		String_t* L_2 = ___name;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m564(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		String_t* L_4 = ___name;
		NullCheck(L_4);
		bool L_5 = String_EndsWith_m3742(L_4, _stringLiteral118, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0039;
		}
	}
	{
		String_t* L_6 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m584(NULL /*static, unused*/, L_6, _stringLiteral118, /*hidden argument*/NULL);
		___name = L_7;
		goto IL_0039;
	}

IL_002e:
	{
		ZipException_t594 * L_8 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_8, _stringLiteral392, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0039:
	{
		String_t* L_9 = ___name;
		return L_9;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::TransformFile(System.String)
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral391;
extern Il2CppCodeGenString* _stringLiteral118;
extern Il2CppCodeGenString* _stringLiteral514;
extern "C" String_t* ZipNameTransform_TransformFile_m3659 (ZipNameTransform_t631 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		_stringLiteral391 = il2cpp_codegen_string_literal_from_index(391);
		_stringLiteral118 = il2cpp_codegen_string_literal_from_index(118);
		_stringLiteral514 = il2cpp_codegen_string_literal_from_index(514);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_00d2;
		}
	}
	{
		String_t* L_1 = ___name;
		NullCheck(L_1);
		String_t* L_2 = String_ToLower_m3814(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = (__this->___trimPrefix__0);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_4 = V_0;
		String_t* L_5 = (__this->___trimPrefix__0);
		NullCheck(L_4);
		int32_t L_6 = String_IndexOf_m3744(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_7 = ___name;
		String_t* L_8 = (__this->___trimPrefix__0);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m564(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_10 = String_Substring_m2313(L_7, L_9, /*hidden argument*/NULL);
		___name = L_10;
	}

IL_0036:
	{
		String_t* L_11 = ___name;
		NullCheck(L_11);
		String_t* L_12 = String_Replace_m3773(L_11, _stringLiteral391, _stringLiteral118, /*hidden argument*/NULL);
		___name = L_12;
		String_t* L_13 = ___name;
		String_t* L_14 = WindowsPathUtils_DropPathRoot_m2712(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		___name = L_14;
		goto IL_005c;
	}

IL_0052:
	{
		String_t* L_15 = ___name;
		NullCheck(L_15);
		String_t* L_16 = String_Remove_m2309(L_15, 0, 1, /*hidden argument*/NULL);
		___name = L_16;
	}

IL_005c:
	{
		String_t* L_17 = ___name;
		NullCheck(L_17);
		int32_t L_18 = String_get_Length_m564(L_17, /*hidden argument*/NULL);
		if ((((int32_t)L_18) <= ((int32_t)0)))
		{
			goto IL_0083;
		}
	}
	{
		String_t* L_19 = ___name;
		NullCheck(L_19);
		uint16_t L_20 = String_get_Chars_m2286(L_19, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_20) == ((int32_t)((int32_t)47))))
		{
			goto IL_0052;
		}
	}
	{
		goto IL_0083;
	}

IL_0072:
	{
		String_t* L_21 = ___name;
		String_t* L_22 = ___name;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m564(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_24 = String_Remove_m2309(L_21, ((int32_t)((int32_t)L_23-(int32_t)1)), 1, /*hidden argument*/NULL);
		___name = L_24;
	}

IL_0083:
	{
		String_t* L_25 = ___name;
		NullCheck(L_25);
		int32_t L_26 = String_get_Length_m564(L_25, /*hidden argument*/NULL);
		if ((((int32_t)L_26) <= ((int32_t)0)))
		{
			goto IL_009e;
		}
	}
	{
		String_t* L_27 = ___name;
		String_t* L_28 = ___name;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m564(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		uint16_t L_30 = String_get_Chars_m2286(L_27, ((int32_t)((int32_t)L_29-(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_30) == ((int32_t)((int32_t)47))))
		{
			goto IL_0072;
		}
	}

IL_009e:
	{
		String_t* L_31 = ___name;
		NullCheck(L_31);
		int32_t L_32 = String_IndexOf_m3744(L_31, _stringLiteral514, /*hidden argument*/NULL);
		V_1 = L_32;
		goto IL_00c2;
	}

IL_00ac:
	{
		String_t* L_33 = ___name;
		int32_t L_34 = V_1;
		NullCheck(L_33);
		String_t* L_35 = String_Remove_m2309(L_33, L_34, 1, /*hidden argument*/NULL);
		___name = L_35;
		String_t* L_36 = ___name;
		NullCheck(L_36);
		int32_t L_37 = String_IndexOf_m3744(L_36, _stringLiteral514, /*hidden argument*/NULL);
		V_1 = L_37;
	}

IL_00c2:
	{
		int32_t L_38 = V_1;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00ac;
		}
	}
	{
		String_t* L_39 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		String_t* L_40 = ZipNameTransform_MakeValidName_m3662(NULL /*static, unused*/, L_39, ((int32_t)95), /*hidden argument*/NULL);
		___name = L_40;
		goto IL_00d9;
	}

IL_00d2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_41 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		___name = L_41;
	}

IL_00d9:
	{
		String_t* L_42 = ___name;
		return L_42;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::get_TrimPrefix()
extern "C" String_t* ZipNameTransform_get_TrimPrefix_m3660 (ZipNameTransform_t631 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___trimPrefix__0);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipNameTransform::set_TrimPrefix(System.String)
extern "C" void ZipNameTransform_set_TrimPrefix_m3661 (ZipNameTransform_t631 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___trimPrefix__0 = L_0;
		String_t* L_1 = (__this->___trimPrefix__0);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = (__this->___trimPrefix__0);
		NullCheck(L_2);
		String_t* L_3 = String_ToLower_m3814(L_2, /*hidden argument*/NULL);
		__this->___trimPrefix__0 = L_3;
	}

IL_0020:
	{
		return;
	}
}
// System.String ICSharpCode.SharpZipLib.Zip.ZipNameTransform::MakeValidName(System.String,System.Char)
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern TypeInfo* StringBuilder_t445_il2cpp_TypeInfo_var;
extern TypeInfo* PathTooLongException_t667_il2cpp_TypeInfo_var;
extern "C" String_t* ZipNameTransform_MakeValidName_m3662 (Object_t * __this /* static, unused */, String_t* ___name, uint16_t ___replacement, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		StringBuilder_t445_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(147);
		PathTooLongException_t667_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(432);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	StringBuilder_t445 * V_1 = {0};
	{
		String_t* L_0 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_1 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		NullCheck(L_0);
		int32_t L_2 = String_IndexOfAny_m3769(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_4 = ___name;
		StringBuilder_t445 * L_5 = (StringBuilder_t445 *)il2cpp_codegen_object_new (StringBuilder_t445_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m2076(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_003d;
	}

IL_0019:
	{
		StringBuilder_t445 * L_6 = V_1;
		int32_t L_7 = V_0;
		uint16_t L_8 = ___replacement;
		NullCheck(L_6);
		StringBuilder_set_Chars_m3774(L_6, L_7, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		String_t* L_10 = ___name;
		NullCheck(L_10);
		int32_t L_11 = String_get_Length_m564(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_002e;
		}
	}
	{
		V_0 = (-1);
		goto IL_003d;
	}

IL_002e:
	{
		String_t* L_12 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_13 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		int32_t L_14 = V_0;
		NullCheck(L_12);
		int32_t L_15 = String_IndexOfAny_m2305(L_12, L_13, ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_003d:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t445 * L_17 = V_1;
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		___name = L_18;
	}

IL_0049:
	{
		String_t* L_19 = ___name;
		NullCheck(L_19);
		int32_t L_20 = String_get_Length_m564(L_19, /*hidden argument*/NULL);
		if ((((int32_t)L_20) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_005c;
		}
	}
	{
		PathTooLongException_t667 * L_21 = (PathTooLongException_t667 *)il2cpp_codegen_object_new (PathTooLongException_t667_il2cpp_TypeInfo_var);
		PathTooLongException__ctor_m3775(L_21, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_005c:
	{
		String_t* L_22 = ___name;
		return L_22;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String,System.Boolean)
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern "C" bool ZipNameTransform_IsValidName_m3663 (Object_t * __this /* static, unused */, String_t* ___name, bool ___relaxed, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B6_0 = 0;
	{
		String_t* L_0 = ___name;
		V_0 = ((((int32_t)((((Object_t*)(String_t*)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_003f;
		}
	}
	{
		bool L_2 = ___relaxed;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_4 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryCharsRelaxed_2;
		NullCheck(L_3);
		int32_t L_5 = String_IndexOfAny_m3769(L_3, L_4, /*hidden argument*/NULL);
		V_0 = ((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_001f:
	{
		String_t* L_6 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_7 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		NullCheck(L_6);
		int32_t L_8 = String_IndexOfAny_m3769(L_6, L_7, /*hidden argument*/NULL);
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_9 = ___name;
		NullCheck(L_9);
		int32_t L_10 = String_IndexOf_m2344(L_9, ((int32_t)47), /*hidden argument*/NULL);
		G_B6_0 = ((((int32_t)((((int32_t)L_10) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B6_0 = 0;
	}

IL_003e:
	{
		V_0 = G_B6_0;
	}

IL_003f:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipNameTransform::IsValidName(System.String)
extern TypeInfo* ZipNameTransform_t631_il2cpp_TypeInfo_var;
extern "C" bool ZipNameTransform_IsValidName_m3664 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipNameTransform_t631_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(421);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___name;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_1 = ___name;
		IL2CPP_RUNTIME_CLASS_INIT(ZipNameTransform_t631_il2cpp_TypeInfo_var);
		CharU5BU5D_t341* L_2 = ((ZipNameTransform_t631_StaticFields*)ZipNameTransform_t631_il2cpp_TypeInfo_var->static_fields)->___InvalidEntryChars_1;
		NullCheck(L_1);
		int32_t L_3 = String_IndexOfAny_m3769(L_1, L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___name;
		NullCheck(L_4);
		int32_t L_5 = String_IndexOf_m2344(L_4, ((int32_t)47), /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B4_0 = 0;
	}

IL_0022:
	{
		V_0 = G_B4_0;
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::.ctor(System.IO.Stream)
extern TypeInfo* ArrayList_t530_il2cpp_TypeInfo_var;
extern TypeInfo* Crc32_t513_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* Deflater_t549_il2cpp_TypeInfo_var;
extern "C" void ZipOutputStream__ctor_m3665 (ZipOutputStream_t579 * __this, Stream_t506 * ___baseOutputStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArrayList_t530_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(372);
		Crc32_t513_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(363);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		Deflater_t549_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(390);
		s_Il2CppMethodIntialized = true;
	}
	{
		ArrayList_t530 * L_0 = (ArrayList_t530 *)il2cpp_codegen_object_new (ArrayList_t530_il2cpp_TypeInfo_var);
		ArrayList__ctor_m3701(L_0, /*hidden argument*/NULL);
		__this->___entries_8 = L_0;
		Crc32_t513 * L_1 = (Crc32_t513 *)il2cpp_codegen_object_new (Crc32_t513_il2cpp_TypeInfo_var);
		Crc32__ctor_m2614(L_1, /*hidden argument*/NULL);
		__this->___crc_9 = L_1;
		__this->___defaultCompressionLevel_11 = (-1);
		__this->___curMethod_12 = 8;
		__this->___zipComment_15 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, 0));
		__this->___crcPatchPos_17 = (((int64_t)((int64_t)(-1))));
		__this->___sizePatchPos_18 = (((int64_t)((int64_t)(-1))));
		__this->___useZip64__19 = 2;
		Stream_t506 * L_2 = ___baseOutputStream;
		Deflater_t549 * L_3 = (Deflater_t549 *)il2cpp_codegen_object_new (Deflater_t549_il2cpp_TypeInfo_var);
		Deflater__ctor_m3072(L_3, (-1), 1, /*hidden argument*/NULL);
		DeflaterOutputStream__ctor_m2781(__this, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_IsFinished()
extern "C" bool ZipOutputStream_get_IsFinished_m3666 (ZipOutputStream_t579 * __this, const MethodInfo* method)
{
	{
		ArrayList_t530 * L_0 = (__this->___entries_8);
		return ((((Object_t*)(ArrayList_t530 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetComment(System.String)
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral515;
extern "C" void ZipOutputStream_SetComment_m3667 (ZipOutputStream_t579 * __this, String_t* ___comment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		_stringLiteral515 = il2cpp_codegen_string_literal_from_index(515);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	{
		String_t* L_0 = ___comment;
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_1 = ZipConstants_ConvertToArray_m3241(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t129* L_2 = V_0;
		NullCheck(L_2);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_001c;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_3 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3694(L_3, _stringLiteral515, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_001c:
	{
		ByteU5BU5D_t129* L_4 = V_0;
		__this->___zipComment_15 = L_4;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::SetLevel(System.Int32)
extern "C" void ZipOutputStream_SetLevel_m3668 (ZipOutputStream_t579 * __this, int32_t ___level, const MethodInfo* method)
{
	{
		Deflater_t549 * L_0 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		int32_t L_1 = ___level;
		NullCheck(L_0);
		Deflater_SetLevel_m3083(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___level;
		__this->___defaultCompressionLevel_11 = L_2;
		return;
	}
}
// System.Int32 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::GetLevel()
extern "C" int32_t ZipOutputStream_GetLevel_m3669 (ZipOutputStream_t579 * __this, const MethodInfo* method)
{
	{
		Deflater_t549 * L_0 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		NullCheck(L_0);
		int32_t L_1 = Deflater_GetLevel_m3084(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// ICSharpCode.SharpZipLib.Zip.UseZip64 ICSharpCode.SharpZipLib.Zip.ZipOutputStream::get_UseZip64()
extern "C" int32_t ZipOutputStream_get_UseZip64_m3670 (ZipOutputStream_t579 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___useZip64__19);
		return L_0;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::set_UseZip64(ICSharpCode.SharpZipLib.Zip.UseZip64)
extern "C" void ZipOutputStream_set_UseZip64_m3671 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___useZip64__19 = L_0;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeShort(System.Int32)
extern "C" void ZipOutputStream_WriteLeShort_m3672 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		Stream_t506 * L_0 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		int32_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_0, (((int32_t)((uint8_t)((int32_t)((int32_t)L_1&(int32_t)((int32_t)255)))))));
		Stream_t506 * L_2 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		int32_t L_3 = ___value;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(20 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, (((int32_t)((uint8_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)8))&(int32_t)((int32_t)255)))))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeInt(System.Int32)
extern "C" void ZipOutputStream_WriteLeInt_m3673 (ZipOutputStream_t579 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		ZipOutputStream_WriteLeShort_m3672(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___value;
		ZipOutputStream_WriteLeShort_m3672(__this, ((int32_t)((int32_t)L_1>>(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteLeLong(System.Int64)
extern "C" void ZipOutputStream_WriteLeLong_m3674 (ZipOutputStream_t579 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		int64_t L_0 = ___value;
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		int64_t L_1 = ___value;
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)((int64_t)((int64_t)L_1>>(int32_t)((int32_t)32)))))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::PutNextEntry(ICSharpCode.SharpZipLib.Zip.ZipEntry)
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral354;
extern Il2CppCodeGenString* _stringLiteral516;
extern Il2CppCodeGenString* _stringLiteral517;
extern Il2CppCodeGenString* _stringLiteral464;
extern Il2CppCodeGenString* _stringLiteral491;
extern "C" void ZipOutputStream_PutNextEntry_m3675 (ZipOutputStream_t579 * __this, ZipEntry_t591 * ___entry, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		_stringLiteral354 = il2cpp_codegen_string_literal_from_index(354);
		_stringLiteral516 = il2cpp_codegen_string_literal_from_index(516);
		_stringLiteral517 = il2cpp_codegen_string_literal_from_index(517);
		_stringLiteral464 = il2cpp_codegen_string_literal_from_index(464);
		_stringLiteral491 = il2cpp_codegen_string_literal_from_index(491);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_t129* V_3 = {0};
	ZipExtraData_t599 * V_4 = {0};
	ByteU5BU5D_t129* V_5 = {0};
	int32_t G_B13_0 = 0;
	ZipOutputStream_t579 * G_B34_0 = {0};
	ZipOutputStream_t579 * G_B33_0 = {0};
	int32_t G_B35_0 = 0;
	ZipOutputStream_t579 * G_B35_1 = {0};
	{
		ZipEntry_t591 * L_0 = ___entry;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t651 * L_1 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_1, _stringLiteral354, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_000e:
	{
		ArrayList_t530 * L_2 = (__this->___entries_8);
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		InvalidOperationException_t658 * L_3 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_3, _stringLiteral516, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0021:
	{
		ZipEntry_t591 * L_4 = (__this->___curEntry_10);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		ZipOutputStream_CloseEntry_m3676(__this, /*hidden argument*/NULL);
	}

IL_002f:
	{
		ArrayList_t530 * L_5 = (__this->___entries_8);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)2147483647)))))
		{
			goto IL_004c;
		}
	}
	{
		ZipException_t594 * L_7 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_7, _stringLiteral517, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_004c:
	{
		ZipEntry_t591 * L_8 = ___entry;
		NullCheck(L_8);
		int32_t L_9 = ZipEntry_get_CompressionMethod_m3286(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = (__this->___defaultCompressionLevel_11);
		V_1 = L_10;
		ZipEntry_t591 * L_11 = ___entry;
		ZipEntry_t591 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = ZipEntry_get_Flags_m3256(L_12, /*hidden argument*/NULL);
		NullCheck(L_12);
		ZipEntry_set_Flags_m3257(L_12, ((int32_t)((int32_t)L_13&(int32_t)((int32_t)2048))), /*hidden argument*/NULL);
		__this->___patchEntryHeader_16 = 0;
		ZipEntry_t591 * L_14 = ___entry;
		NullCheck(L_14);
		int64_t L_15 = ZipEntry_get_Size_m3280(L_14, /*hidden argument*/NULL);
		if ((!(((uint64_t)L_15) == ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_0097;
		}
	}
	{
		ZipEntry_t591 * L_16 = ___entry;
		ZipEntry_t591 * L_17 = ___entry;
		NullCheck(L_17);
		int64_t L_18 = ZipEntry_get_Size_m3280(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		ZipEntry_set_CompressedSize_m3283(L_16, L_18, /*hidden argument*/NULL);
		ZipEntry_t591 * L_19 = ___entry;
		NullCheck(L_19);
		ZipEntry_set_Crc_m3285(L_19, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		V_0 = 0;
		V_2 = 1;
		goto IL_00d2;
	}

IL_0097:
	{
		ZipEntry_t591 * L_20 = ___entry;
		NullCheck(L_20);
		int64_t L_21 = ZipEntry_get_Size_m3280(L_20, /*hidden argument*/NULL);
		if ((((int64_t)L_21) < ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00a9;
		}
	}
	{
		ZipEntry_t591 * L_22 = ___entry;
		NullCheck(L_22);
		bool L_23 = ZipEntry_get_HasCrc_m3249(L_22, /*hidden argument*/NULL);
		G_B13_0 = ((int32_t)(L_23));
		goto IL_00aa;
	}

IL_00a9:
	{
		G_B13_0 = 0;
	}

IL_00aa:
	{
		V_2 = G_B13_0;
		int32_t L_24 = V_0;
		if (L_24)
		{
			goto IL_00d2;
		}
	}
	{
		bool L_25 = V_2;
		if (L_25)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_26 = DeflaterOutputStream_get_CanPatchEntries_m2786(__this, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00d2;
		}
	}
	{
		V_0 = 8;
		V_1 = 0;
		goto IL_00d2;
	}

IL_00bf:
	{
		ZipEntry_t591 * L_27 = ___entry;
		ZipEntry_t591 * L_28 = ___entry;
		NullCheck(L_28);
		int64_t L_29 = ZipEntry_get_Size_m3280(L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		ZipEntry_set_CompressedSize_m3283(L_27, L_29, /*hidden argument*/NULL);
		ZipEntry_t591 * L_30 = ___entry;
		NullCheck(L_30);
		bool L_31 = ZipEntry_get_HasCrc_m3249(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
	}

IL_00d2:
	{
		bool L_32 = V_2;
		if (L_32)
		{
			goto IL_00f4;
		}
	}
	{
		bool L_33 = DeflaterOutputStream_get_CanPatchEntries_m2786(__this, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00ed;
		}
	}
	{
		ZipEntry_t591 * L_34 = ___entry;
		ZipEntry_t591 * L_35 = L_34;
		NullCheck(L_35);
		int32_t L_36 = ZipEntry_get_Flags_m3256(L_35, /*hidden argument*/NULL);
		NullCheck(L_35);
		ZipEntry_set_Flags_m3257(L_35, ((int32_t)((int32_t)L_36|(int32_t)8)), /*hidden argument*/NULL);
		goto IL_00f4;
	}

IL_00ed:
	{
		__this->___patchEntryHeader_16 = 1;
	}

IL_00f4:
	{
		String_t* L_37 = DeflaterOutputStream_get_Password_m2787(__this, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_011b;
		}
	}
	{
		ZipEntry_t591 * L_38 = ___entry;
		NullCheck(L_38);
		ZipEntry_set_IsCrypted_m3251(L_38, 1, /*hidden argument*/NULL);
		ZipEntry_t591 * L_39 = ___entry;
		NullCheck(L_39);
		int64_t L_40 = ZipEntry_get_Crc_m3284(L_39, /*hidden argument*/NULL);
		if ((((int64_t)L_40) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_011b;
		}
	}
	{
		ZipEntry_t591 * L_41 = ___entry;
		ZipEntry_t591 * L_42 = L_41;
		NullCheck(L_42);
		int32_t L_43 = ZipEntry_get_Flags_m3256(L_42, /*hidden argument*/NULL);
		NullCheck(L_42);
		ZipEntry_set_Flags_m3257(L_42, ((int32_t)((int32_t)L_43|(int32_t)8)), /*hidden argument*/NULL);
	}

IL_011b:
	{
		ZipEntry_t591 * L_44 = ___entry;
		int64_t L_45 = (__this->___offset_14);
		NullCheck(L_44);
		ZipEntry_set_Offset_m3261(L_44, L_45, /*hidden argument*/NULL);
		ZipEntry_t591 * L_46 = ___entry;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		ZipEntry_set_CompressionMethod_m3287(L_46, L_47, /*hidden argument*/NULL);
		int32_t L_48 = V_0;
		__this->___curMethod_12 = L_48;
		__this->___sizePatchPos_18 = (((int64_t)((int64_t)(-1))));
		int32_t L_49 = (__this->___useZip64__19);
		if ((((int32_t)L_49) == ((int32_t)1)))
		{
			goto IL_0159;
		}
	}
	{
		ZipEntry_t591 * L_50 = ___entry;
		NullCheck(L_50);
		int64_t L_51 = ZipEntry_get_Size_m3280(L_50, /*hidden argument*/NULL);
		if ((((int64_t)L_51) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_52 = (__this->___useZip64__19);
		if ((!(((uint32_t)L_52) == ((uint32_t)2))))
		{
			goto IL_015f;
		}
	}

IL_0159:
	{
		ZipEntry_t591 * L_53 = ___entry;
		NullCheck(L_53);
		ZipEntry_ForceZip64_m3271(L_53, /*hidden argument*/NULL);
	}

IL_015f:
	{
		ZipOutputStream_WriteLeInt_m3673(__this, ((int32_t)67324752), /*hidden argument*/NULL);
		ZipEntry_t591 * L_54 = ___entry;
		NullCheck(L_54);
		int32_t L_55 = ZipEntry_get_Version_m3269(L_54, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeShort_m3672(__this, L_55, /*hidden argument*/NULL);
		ZipEntry_t591 * L_56 = ___entry;
		NullCheck(L_56);
		int32_t L_57 = ZipEntry_get_Flags_m3256(L_56, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeShort_m3672(__this, L_57, /*hidden argument*/NULL);
		int32_t L_58 = V_0;
		ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((uint8_t)L_58))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_59 = ___entry;
		NullCheck(L_59);
		int64_t L_60 = ZipEntry_get_DosTime_m3275(L_59, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_60))), /*hidden argument*/NULL);
		bool L_61 = V_2;
		if (!L_61)
		{
			goto IL_01f2;
		}
	}
	{
		ZipEntry_t591 * L_62 = ___entry;
		NullCheck(L_62);
		int64_t L_63 = ZipEntry_get_Crc_m3284(L_62, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_63))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_64 = ___entry;
		NullCheck(L_64);
		bool L_65 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_64, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_01c2;
		}
	}
	{
		ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
		goto IL_0259;
	}

IL_01c2:
	{
		ZipEntry_t591 * L_66 = ___entry;
		NullCheck(L_66);
		bool L_67 = ZipEntry_get_IsCrypted_m3250(L_66, /*hidden argument*/NULL);
		G_B33_0 = __this;
		if (L_67)
		{
			G_B34_0 = __this;
			goto IL_01d4;
		}
	}
	{
		ZipEntry_t591 * L_68 = ___entry;
		NullCheck(L_68);
		int64_t L_69 = ZipEntry_get_CompressedSize_m3282(L_68, /*hidden argument*/NULL);
		G_B35_0 = (((int32_t)((int32_t)L_69)));
		G_B35_1 = G_B33_0;
		goto IL_01de;
	}

IL_01d4:
	{
		ZipEntry_t591 * L_70 = ___entry;
		NullCheck(L_70);
		int64_t L_71 = ZipEntry_get_CompressedSize_m3282(L_70, /*hidden argument*/NULL);
		G_B35_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)L_71)))+(int32_t)((int32_t)12)));
		G_B35_1 = G_B34_0;
	}

IL_01de:
	{
		NullCheck(G_B35_1);
		ZipOutputStream_WriteLeInt_m3673(G_B35_1, G_B35_0, /*hidden argument*/NULL);
		ZipEntry_t591 * L_72 = ___entry;
		NullCheck(L_72);
		int64_t L_73 = ZipEntry_get_Size_m3280(L_72, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_73))), /*hidden argument*/NULL);
		goto IL_0259;
	}

IL_01f2:
	{
		bool L_74 = (__this->___patchEntryHeader_16);
		if (!L_74)
		{
			goto IL_020b;
		}
	}
	{
		Stream_t506 * L_75 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		NullCheck(L_75);
		int64_t L_76 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_75);
		__this->___crcPatchPos_17 = L_76;
	}

IL_020b:
	{
		ZipOutputStream_WriteLeInt_m3673(__this, 0, /*hidden argument*/NULL);
		bool L_77 = (__this->___patchEntryHeader_16);
		if (!L_77)
		{
			goto IL_022b;
		}
	}
	{
		Stream_t506 * L_78 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		NullCheck(L_78);
		int64_t L_79 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_78);
		__this->___sizePatchPos_18 = L_79;
	}

IL_022b:
	{
		ZipEntry_t591 * L_80 = ___entry;
		NullCheck(L_80);
		bool L_81 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_80, /*hidden argument*/NULL);
		if (L_81)
		{
			goto IL_023b;
		}
	}
	{
		bool L_82 = (__this->___patchEntryHeader_16);
		if (!L_82)
		{
			goto IL_024b;
		}
	}

IL_023b:
	{
		ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
		goto IL_0259;
	}

IL_024b:
	{
		ZipOutputStream_WriteLeInt_m3673(__this, 0, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, 0, /*hidden argument*/NULL);
	}

IL_0259:
	{
		ZipEntry_t591 * L_83 = ___entry;
		NullCheck(L_83);
		int32_t L_84 = ZipEntry_get_Flags_m3256(L_83, /*hidden argument*/NULL);
		ZipEntry_t591 * L_85 = ___entry;
		NullCheck(L_85);
		String_t* L_86 = ZipEntry_get_Name_m3279(L_85, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
		ByteU5BU5D_t129* L_87 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_84, L_86, /*hidden argument*/NULL);
		V_3 = L_87;
		ByteU5BU5D_t129* L_88 = V_3;
		NullCheck(L_88);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_88)->max_length))))) <= ((int32_t)((int32_t)65535))))
		{
			goto IL_0280;
		}
	}
	{
		ZipException_t594 * L_89 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_89, _stringLiteral464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_89);
	}

IL_0280:
	{
		ZipEntry_t591 * L_90 = ___entry;
		NullCheck(L_90);
		ByteU5BU5D_t129* L_91 = ZipEntry_get_ExtraData_m3288(L_90, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_92 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
		ZipExtraData__ctor_m3355(L_92, L_91, /*hidden argument*/NULL);
		V_4 = L_92;
		ZipEntry_t591 * L_93 = ___entry;
		NullCheck(L_93);
		bool L_94 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_93, /*hidden argument*/NULL);
		if (!L_94)
		{
			goto IL_0302;
		}
	}
	{
		ZipExtraData_t599 * L_95 = V_4;
		NullCheck(L_95);
		ZipExtraData_StartNewEntry_m3368(L_95, /*hidden argument*/NULL);
		bool L_96 = V_2;
		if (!L_96)
		{
			goto IL_02bb;
		}
	}
	{
		ZipExtraData_t599 * L_97 = V_4;
		ZipEntry_t591 * L_98 = ___entry;
		NullCheck(L_98);
		int64_t L_99 = ZipEntry_get_Size_m3280(L_98, /*hidden argument*/NULL);
		NullCheck(L_97);
		ZipExtraData_AddLeLong_m3374(L_97, L_99, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_100 = V_4;
		ZipEntry_t591 * L_101 = ___entry;
		NullCheck(L_101);
		int64_t L_102 = ZipEntry_get_CompressedSize_m3282(L_101, /*hidden argument*/NULL);
		NullCheck(L_100);
		ZipExtraData_AddLeLong_m3374(L_100, L_102, /*hidden argument*/NULL);
		goto IL_02cd;
	}

IL_02bb:
	{
		ZipExtraData_t599 * L_103 = V_4;
		NullCheck(L_103);
		ZipExtraData_AddLeLong_m3374(L_103, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
		ZipExtraData_t599 * L_104 = V_4;
		NullCheck(L_104);
		ZipExtraData_AddLeLong_m3374(L_104, (((int64_t)((int64_t)(-1)))), /*hidden argument*/NULL);
	}

IL_02cd:
	{
		ZipExtraData_t599 * L_105 = V_4;
		NullCheck(L_105);
		ZipExtraData_AddNewEntry_m3369(L_105, 1, /*hidden argument*/NULL);
		ZipExtraData_t599 * L_106 = V_4;
		NullCheck(L_106);
		bool L_107 = ZipExtraData_Find_m3365(L_106, 1, /*hidden argument*/NULL);
		if (L_107)
		{
			goto IL_02ea;
		}
	}
	{
		ZipException_t594 * L_108 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_108, _stringLiteral491, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_108);
	}

IL_02ea:
	{
		bool L_109 = (__this->___patchEntryHeader_16);
		if (!L_109)
		{
			goto IL_030b;
		}
	}
	{
		ZipExtraData_t599 * L_110 = V_4;
		NullCheck(L_110);
		int32_t L_111 = ZipExtraData_get_CurrentReadIndex_m3363(L_110, /*hidden argument*/NULL);
		__this->___sizePatchPos_18 = (((int64_t)((int64_t)L_111)));
		goto IL_030b;
	}

IL_0302:
	{
		ZipExtraData_t599 * L_112 = V_4;
		NullCheck(L_112);
		ZipExtraData_Delete_m3375(L_112, 1, /*hidden argument*/NULL);
	}

IL_030b:
	{
		ZipExtraData_t599 * L_113 = V_4;
		NullCheck(L_113);
		ByteU5BU5D_t129* L_114 = ZipExtraData_GetEntryData_m3356(L_113, /*hidden argument*/NULL);
		V_5 = L_114;
		ByteU5BU5D_t129* L_115 = V_3;
		NullCheck(L_115);
		ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((int32_t)(((Array_t *)L_115)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_116 = V_5;
		NullCheck(L_116);
		ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((int32_t)(((Array_t *)L_116)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_117 = V_3;
		NullCheck(L_117);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_117)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_033d;
		}
	}
	{
		Stream_t506 * L_118 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ByteU5BU5D_t129* L_119 = V_3;
		ByteU5BU5D_t129* L_120 = V_3;
		NullCheck(L_120);
		NullCheck(L_118);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_118, L_119, 0, (((int32_t)((int32_t)(((Array_t *)L_120)->max_length)))));
	}

IL_033d:
	{
		ZipEntry_t591 * L_121 = ___entry;
		NullCheck(L_121);
		bool L_122 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_0365;
		}
	}
	{
		bool L_123 = (__this->___patchEntryHeader_16);
		if (!L_123)
		{
			goto IL_0365;
		}
	}
	{
		int64_t L_124 = (__this->___sizePatchPos_18);
		Stream_t506 * L_125 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		NullCheck(L_125);
		int64_t L_126 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_125);
		__this->___sizePatchPos_18 = ((int64_t)((int64_t)L_124+(int64_t)L_126));
	}

IL_0365:
	{
		ByteU5BU5D_t129* L_127 = V_5;
		NullCheck(L_127);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_127)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_037e;
		}
	}
	{
		Stream_t506 * L_128 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ByteU5BU5D_t129* L_129 = V_5;
		ByteU5BU5D_t129* L_130 = V_5;
		NullCheck(L_130);
		NullCheck(L_128);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_128, L_129, 0, (((int32_t)((int32_t)(((Array_t *)L_130)->max_length)))));
	}

IL_037e:
	{
		int64_t L_131 = (__this->___offset_14);
		ByteU5BU5D_t129* L_132 = V_3;
		NullCheck(L_132);
		ByteU5BU5D_t129* L_133 = V_5;
		NullCheck(L_133);
		__this->___offset_14 = ((int64_t)((int64_t)L_131+(int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)30)+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_132)->max_length))))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_133)->max_length)))))))))));
		ZipEntry_t591 * L_134 = ___entry;
		__this->___curEntry_10 = L_134;
		Crc32_t513 * L_135 = (__this->___crc_9);
		NullCheck(L_135);
		Crc32_Reset_m2610(L_135, /*hidden argument*/NULL);
		int32_t L_136 = V_0;
		if ((!(((uint32_t)L_136) == ((uint32_t)8))))
		{
			goto IL_03c4;
		}
	}
	{
		Deflater_t549 * L_137 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		NullCheck(L_137);
		Deflater_Reset_m3073(L_137, /*hidden argument*/NULL);
		Deflater_t549 * L_138 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		int32_t L_139 = V_1;
		NullCheck(L_138);
		Deflater_SetLevel_m3083(L_138, L_139, /*hidden argument*/NULL);
	}

IL_03c4:
	{
		__this->___size_13 = (((int64_t)((int64_t)0)));
		ZipEntry_t591 * L_140 = ___entry;
		NullCheck(L_140);
		bool L_141 = ZipEntry_get_IsCrypted_m3250(L_140, /*hidden argument*/NULL);
		if (!L_141)
		{
			goto IL_03fa;
		}
	}
	{
		ZipEntry_t591 * L_142 = ___entry;
		NullCheck(L_142);
		int64_t L_143 = ZipEntry_get_Crc_m3284(L_142, /*hidden argument*/NULL);
		if ((((int64_t)L_143) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_03ee;
		}
	}
	{
		ZipEntry_t591 * L_144 = ___entry;
		NullCheck(L_144);
		int64_t L_145 = ZipEntry_get_DosTime_m3275(L_144, /*hidden argument*/NULL);
		ZipOutputStream_WriteEncryptionHeader_m3677(__this, ((int64_t)((int64_t)L_145<<(int32_t)((int32_t)16))), /*hidden argument*/NULL);
		return;
	}

IL_03ee:
	{
		ZipEntry_t591 * L_146 = ___entry;
		NullCheck(L_146);
		int64_t L_147 = ZipEntry_get_Crc_m3284(L_146, /*hidden argument*/NULL);
		ZipOutputStream_WriteEncryptionHeader_m3677(__this, L_147, /*hidden argument*/NULL);
	}

IL_03fa:
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CloseEntry()
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t166_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t666_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral518;
extern Il2CppCodeGenString* _stringLiteral519;
extern Il2CppCodeGenString* _stringLiteral520;
extern Il2CppCodeGenString* _stringLiteral521;
extern Il2CppCodeGenString* _stringLiteral522;
extern Il2CppCodeGenString* _stringLiteral523;
extern "C" void ZipOutputStream_CloseEntry_m3676 (ZipOutputStream_t579 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		ObjectU5BU5D_t166_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(51);
		Int64_t666_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(406);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		_stringLiteral518 = il2cpp_codegen_string_literal_from_index(518);
		_stringLiteral519 = il2cpp_codegen_string_literal_from_index(519);
		_stringLiteral520 = il2cpp_codegen_string_literal_from_index(520);
		_stringLiteral521 = il2cpp_codegen_string_literal_from_index(521);
		_stringLiteral522 = il2cpp_codegen_string_literal_from_index(522);
		_stringLiteral523 = il2cpp_codegen_string_literal_from_index(523);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ObjectU5BU5D_t166* V_2 = {0};
	ObjectU5BU5D_t166* V_3 = {0};
	ObjectU5BU5D_t166* V_4 = {0};
	{
		ZipEntry_t591 * L_0 = (__this->___curEntry_10);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral518, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		int64_t L_2 = (__this->___size_13);
		V_0 = L_2;
		int32_t L_3 = (__this->___curMethod_12);
		if ((!(((uint32_t)L_3) == ((uint32_t)8))))
		{
			goto IL_004c;
		}
	}
	{
		int64_t L_4 = (__this->___size_13);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0041;
		}
	}
	{
		DeflaterOutputStream_Finish_m2783(__this, /*hidden argument*/NULL);
		Deflater_t549 * L_5 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		NullCheck(L_5);
		int64_t L_6 = Deflater_get_TotalOut_m3076(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_004c;
	}

IL_0041:
	{
		Deflater_t549 * L_7 = (((DeflaterOutputStream_t548 *)__this)->___deflater__4);
		NullCheck(L_7);
		Deflater_Reset_m3073(L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
		ZipEntry_t591 * L_8 = (__this->___curEntry_10);
		NullCheck(L_8);
		int64_t L_9 = ZipEntry_get_Size_m3280(L_8, /*hidden argument*/NULL);
		if ((((int64_t)L_9) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_006e;
		}
	}
	{
		ZipEntry_t591 * L_10 = (__this->___curEntry_10);
		int64_t L_11 = (__this->___size_13);
		NullCheck(L_10);
		ZipEntry_set_Size_m3281(L_10, L_11, /*hidden argument*/NULL);
		goto IL_00c5;
	}

IL_006e:
	{
		ZipEntry_t591 * L_12 = (__this->___curEntry_10);
		NullCheck(L_12);
		int64_t L_13 = ZipEntry_get_Size_m3280(L_12, /*hidden argument*/NULL);
		int64_t L_14 = (__this->___size_13);
		if ((((int64_t)L_13) == ((int64_t)L_14)))
		{
			goto IL_00c5;
		}
	}
	{
		V_2 = ((ObjectU5BU5D_t166*)SZArrayNew(ObjectU5BU5D_t166_il2cpp_TypeInfo_var, 4));
		ObjectU5BU5D_t166* L_15 = V_2;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, 0);
		ArrayElementTypeCheck (L_15, _stringLiteral519);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_15, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral519;
		ObjectU5BU5D_t166* L_16 = V_2;
		int64_t L_17 = (__this->___size_13);
		int64_t L_18 = L_17;
		Object_t * L_19 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_16, 1);
		ArrayElementTypeCheck (L_16, L_19);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_16, 1, sizeof(Object_t *))) = (Object_t *)L_19;
		ObjectU5BU5D_t166* L_20 = V_2;
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 2);
		ArrayElementTypeCheck (L_20, _stringLiteral520);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral520;
		ObjectU5BU5D_t166* L_21 = V_2;
		ZipEntry_t591 * L_22 = (__this->___curEntry_10);
		NullCheck(L_22);
		int64_t L_23 = ZipEntry_get_Size_m3280(L_22, /*hidden argument*/NULL);
		int64_t L_24 = L_23;
		Object_t * L_25 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_24);
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 3);
		ArrayElementTypeCheck (L_21, L_25);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_21, 3, sizeof(Object_t *))) = (Object_t *)L_25;
		ObjectU5BU5D_t166* L_26 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_27 = String_Concat_m569(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		ZipException_t594 * L_28 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_28, L_27, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_28);
	}

IL_00c5:
	{
		ZipEntry_t591 * L_29 = (__this->___curEntry_10);
		NullCheck(L_29);
		int64_t L_30 = ZipEntry_get_CompressedSize_m3282(L_29, /*hidden argument*/NULL);
		if ((((int64_t)L_30) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_00e2;
		}
	}
	{
		ZipEntry_t591 * L_31 = (__this->___curEntry_10);
		int64_t L_32 = V_0;
		NullCheck(L_31);
		ZipEntry_set_CompressedSize_m3283(L_31, L_32, /*hidden argument*/NULL);
		goto IL_012f;
	}

IL_00e2:
	{
		ZipEntry_t591 * L_33 = (__this->___curEntry_10);
		NullCheck(L_33);
		int64_t L_34 = ZipEntry_get_CompressedSize_m3282(L_33, /*hidden argument*/NULL);
		int64_t L_35 = V_0;
		if ((((int64_t)L_34) == ((int64_t)L_35)))
		{
			goto IL_012f;
		}
	}
	{
		V_3 = ((ObjectU5BU5D_t166*)SZArrayNew(ObjectU5BU5D_t166_il2cpp_TypeInfo_var, 4));
		ObjectU5BU5D_t166* L_36 = V_3;
		NullCheck(L_36);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_36, 0);
		ArrayElementTypeCheck (L_36, _stringLiteral521);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_36, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral521;
		ObjectU5BU5D_t166* L_37 = V_3;
		int64_t L_38 = V_0;
		int64_t L_39 = L_38;
		Object_t * L_40 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_37);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_37, 1);
		ArrayElementTypeCheck (L_37, L_40);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_37, 1, sizeof(Object_t *))) = (Object_t *)L_40;
		ObjectU5BU5D_t166* L_41 = V_3;
		NullCheck(L_41);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_41, 2);
		ArrayElementTypeCheck (L_41, _stringLiteral520);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_41, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral520;
		ObjectU5BU5D_t166* L_42 = V_3;
		ZipEntry_t591 * L_43 = (__this->___curEntry_10);
		NullCheck(L_43);
		int64_t L_44 = ZipEntry_get_CompressedSize_m3282(L_43, /*hidden argument*/NULL);
		int64_t L_45 = L_44;
		Object_t * L_46 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_42);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_42, 3);
		ArrayElementTypeCheck (L_42, L_46);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_42, 3, sizeof(Object_t *))) = (Object_t *)L_46;
		ObjectU5BU5D_t166* L_47 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_48 = String_Concat_m569(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		ZipException_t594 * L_49 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_49, L_48, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_49);
	}

IL_012f:
	{
		ZipEntry_t591 * L_50 = (__this->___curEntry_10);
		NullCheck(L_50);
		int64_t L_51 = ZipEntry_get_Crc_m3284(L_50, /*hidden argument*/NULL);
		if ((((int64_t)L_51) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0156;
		}
	}
	{
		ZipEntry_t591 * L_52 = (__this->___curEntry_10);
		Crc32_t513 * L_53 = (__this->___crc_9);
		NullCheck(L_53);
		int64_t L_54 = Crc32_get_Value_m2608(L_53, /*hidden argument*/NULL);
		NullCheck(L_52);
		ZipEntry_set_Crc_m3285(L_52, L_54, /*hidden argument*/NULL);
		goto IL_01bd;
	}

IL_0156:
	{
		ZipEntry_t591 * L_55 = (__this->___curEntry_10);
		NullCheck(L_55);
		int64_t L_56 = ZipEntry_get_Crc_m3284(L_55, /*hidden argument*/NULL);
		Crc32_t513 * L_57 = (__this->___crc_9);
		NullCheck(L_57);
		int64_t L_58 = Crc32_get_Value_m2608(L_57, /*hidden argument*/NULL);
		if ((((int64_t)L_56) == ((int64_t)L_58)))
		{
			goto IL_01bd;
		}
	}
	{
		V_4 = ((ObjectU5BU5D_t166*)SZArrayNew(ObjectU5BU5D_t166_il2cpp_TypeInfo_var, 4));
		ObjectU5BU5D_t166* L_59 = V_4;
		NullCheck(L_59);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_59, 0);
		ArrayElementTypeCheck (L_59, _stringLiteral522);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_59, 0, sizeof(Object_t *))) = (Object_t *)_stringLiteral522;
		ObjectU5BU5D_t166* L_60 = V_4;
		Crc32_t513 * L_61 = (__this->___crc_9);
		NullCheck(L_61);
		int64_t L_62 = Crc32_get_Value_m2608(L_61, /*hidden argument*/NULL);
		int64_t L_63 = L_62;
		Object_t * L_64 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_63);
		NullCheck(L_60);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_60, 1);
		ArrayElementTypeCheck (L_60, L_64);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_60, 1, sizeof(Object_t *))) = (Object_t *)L_64;
		ObjectU5BU5D_t166* L_65 = V_4;
		NullCheck(L_65);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_65, 2);
		ArrayElementTypeCheck (L_65, _stringLiteral520);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_65, 2, sizeof(Object_t *))) = (Object_t *)_stringLiteral520;
		ObjectU5BU5D_t166* L_66 = V_4;
		ZipEntry_t591 * L_67 = (__this->___curEntry_10);
		NullCheck(L_67);
		int64_t L_68 = ZipEntry_get_Crc_m3284(L_67, /*hidden argument*/NULL);
		int64_t L_69 = L_68;
		Object_t * L_70 = Box(Int64_t666_il2cpp_TypeInfo_var, &L_69);
		NullCheck(L_66);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_66, 3);
		ArrayElementTypeCheck (L_66, L_70);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_66, 3, sizeof(Object_t *))) = (Object_t *)L_70;
		ObjectU5BU5D_t166* L_71 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_72 = String_Concat_m569(NULL /*static, unused*/, L_71, /*hidden argument*/NULL);
		ZipException_t594 * L_73 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_73, L_72, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_73);
	}

IL_01bd:
	{
		int64_t L_74 = (__this->___offset_14);
		int64_t L_75 = V_0;
		__this->___offset_14 = ((int64_t)((int64_t)L_74+(int64_t)L_75));
		ZipEntry_t591 * L_76 = (__this->___curEntry_10);
		NullCheck(L_76);
		bool L_77 = ZipEntry_get_IsCrypted_m3250(L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_01ed;
		}
	}
	{
		ZipEntry_t591 * L_78 = (__this->___curEntry_10);
		ZipEntry_t591 * L_79 = L_78;
		NullCheck(L_79);
		int64_t L_80 = ZipEntry_get_CompressedSize_m3282(L_79, /*hidden argument*/NULL);
		NullCheck(L_79);
		ZipEntry_set_CompressedSize_m3283(L_79, ((int64_t)((int64_t)L_80+(int64_t)(((int64_t)((int64_t)((int32_t)12)))))), /*hidden argument*/NULL);
	}

IL_01ed:
	{
		bool L_81 = (__this->___patchEntryHeader_16);
		if (!L_81)
		{
			goto IL_02bb;
		}
	}
	{
		__this->___patchEntryHeader_16 = 0;
		Stream_t506 * L_82 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		NullCheck(L_82);
		int64_t L_83 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Position() */, L_82);
		V_1 = L_83;
		Stream_t506 * L_84 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		int64_t L_85 = (__this->___crcPatchPos_17);
		NullCheck(L_84);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_84, L_85, 0);
		ZipEntry_t591 * L_86 = (__this->___curEntry_10);
		NullCheck(L_86);
		int64_t L_87 = ZipEntry_get_Crc_m3284(L_86, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_87))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_88 = (__this->___curEntry_10);
		NullCheck(L_88);
		bool L_89 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_88, /*hidden argument*/NULL);
		if (!L_89)
		{
			goto IL_0289;
		}
	}
	{
		int64_t L_90 = (__this->___sizePatchPos_18);
		if ((!(((uint64_t)L_90) == ((uint64_t)(((int64_t)((int64_t)(-1))))))))
		{
			goto IL_0252;
		}
	}
	{
		ZipException_t594 * L_91 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
		ZipException__ctor_m3321(L_91, _stringLiteral523, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_91);
	}

IL_0252:
	{
		Stream_t506 * L_92 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		int64_t L_93 = (__this->___sizePatchPos_18);
		NullCheck(L_92);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_92, L_93, 0);
		ZipEntry_t591 * L_94 = (__this->___curEntry_10);
		NullCheck(L_94);
		int64_t L_95 = ZipEntry_get_Size_m3280(L_94, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_m3674(__this, L_95, /*hidden argument*/NULL);
		ZipEntry_t591 * L_96 = (__this->___curEntry_10);
		NullCheck(L_96);
		int64_t L_97 = ZipEntry_get_CompressedSize_m3282(L_96, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_m3674(__this, L_97, /*hidden argument*/NULL);
		goto IL_02ad;
	}

IL_0289:
	{
		ZipEntry_t591 * L_98 = (__this->___curEntry_10);
		NullCheck(L_98);
		int64_t L_99 = ZipEntry_get_CompressedSize_m3282(L_98, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_99))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_100 = (__this->___curEntry_10);
		NullCheck(L_100);
		int64_t L_101 = ZipEntry_get_Size_m3280(L_100, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_101))), /*hidden argument*/NULL);
	}

IL_02ad:
	{
		Stream_t506 * L_102 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		int64_t L_103 = V_1;
		NullCheck(L_102);
		VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(17 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_102, L_103, 0);
	}

IL_02bb:
	{
		ZipEntry_t591 * L_104 = (__this->___curEntry_10);
		NullCheck(L_104);
		int32_t L_105 = ZipEntry_get_Flags_m3256(L_104, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_105&(int32_t)8)))
		{
			goto IL_035f;
		}
	}
	{
		ZipOutputStream_WriteLeInt_m3673(__this, ((int32_t)134695760), /*hidden argument*/NULL);
		ZipEntry_t591 * L_106 = (__this->___curEntry_10);
		NullCheck(L_106);
		int64_t L_107 = ZipEntry_get_Crc_m3284(L_106, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_107))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_108 = (__this->___curEntry_10);
		NullCheck(L_108);
		bool L_109 = ZipEntry_get_LocalHeaderRequiresZip64_m3273(L_108, /*hidden argument*/NULL);
		if (!L_109)
		{
			goto IL_032b;
		}
	}
	{
		ZipEntry_t591 * L_110 = (__this->___curEntry_10);
		NullCheck(L_110);
		int64_t L_111 = ZipEntry_get_CompressedSize_m3282(L_110, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_m3674(__this, L_111, /*hidden argument*/NULL);
		ZipEntry_t591 * L_112 = (__this->___curEntry_10);
		NullCheck(L_112);
		int64_t L_113 = ZipEntry_get_Size_m3280(L_112, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeLong_m3674(__this, L_113, /*hidden argument*/NULL);
		int64_t L_114 = (__this->___offset_14);
		__this->___offset_14 = ((int64_t)((int64_t)L_114+(int64_t)(((int64_t)((int64_t)((int32_t)24))))));
		goto IL_035f;
	}

IL_032b:
	{
		ZipEntry_t591 * L_115 = (__this->___curEntry_10);
		NullCheck(L_115);
		int64_t L_116 = ZipEntry_get_CompressedSize_m3282(L_115, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_116))), /*hidden argument*/NULL);
		ZipEntry_t591 * L_117 = (__this->___curEntry_10);
		NullCheck(L_117);
		int64_t L_118 = ZipEntry_get_Size_m3280(L_117, /*hidden argument*/NULL);
		ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_118))), /*hidden argument*/NULL);
		int64_t L_119 = (__this->___offset_14);
		__this->___offset_14 = ((int64_t)((int64_t)L_119+(int64_t)(((int64_t)((int64_t)((int32_t)16))))));
	}

IL_035f:
	{
		ArrayList_t530 * L_120 = (__this->___entries_8);
		ZipEntry_t591 * L_121 = (__this->___curEntry_10);
		NullCheck(L_120);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_120, L_121);
		__this->___curEntry_10 = (ZipEntry_t591 *)NULL;
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::WriteEncryptionHeader(System.Int64)
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* Random_t661_il2cpp_TypeInfo_var;
extern "C" void ZipOutputStream_WriteEncryptionHeader_m3677 (ZipOutputStream_t579 * __this, int64_t ___crcValue, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		Random_t661_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(382);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	Random_t661 * V_1 = {0};
	{
		int64_t L_0 = (__this->___offset_14);
		__this->___offset_14 = ((int64_t)((int64_t)L_0+(int64_t)(((int64_t)((int64_t)((int32_t)12))))));
		String_t* L_1 = DeflaterOutputStream_get_Password_m2787(__this, /*hidden argument*/NULL);
		DeflaterOutputStream_InitializePassword_m2790(__this, L_1, /*hidden argument*/NULL);
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)12)));
		Random_t661 * L_2 = (Random_t661 *)il2cpp_codegen_object_new (Random_t661_il2cpp_TypeInfo_var);
		Random__ctor_m3719(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Random_t661 * L_3 = V_1;
		ByteU5BU5D_t129* L_4 = V_0;
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t129* >::Invoke(6 /* System.Void System.Random::NextBytes(System.Byte[]) */, L_3, L_4);
		ByteU5BU5D_t129* L_5 = V_0;
		int64_t L_6 = ___crcValue;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, ((int32_t)11));
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, ((int32_t)11), sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int64_t)((int64_t)L_6>>(int32_t)((int32_t)24))))));
		ByteU5BU5D_t129* L_7 = V_0;
		ByteU5BU5D_t129* L_8 = V_0;
		NullCheck(L_8);
		DeflaterOutputStream_EncryptBlock_m2789(__this, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), /*hidden argument*/NULL);
		Stream_t506 * L_9 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ByteU5BU5D_t129* L_10 = V_0;
		ByteU5BU5D_t129* L_11 = V_0;
		NullCheck(L_11);
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, (((int32_t)((int32_t)(((Array_t *)L_11)->max_length)))));
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t658_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t651_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentException_t488_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral524;
extern Il2CppCodeGenString* _stringLiteral235;
extern Il2CppCodeGenString* _stringLiteral247;
extern Il2CppCodeGenString* _stringLiteral357;
extern Il2CppCodeGenString* _stringLiteral248;
extern Il2CppCodeGenString* _stringLiteral507;
extern "C" void ZipOutputStream_Write_m3678 (ZipOutputStream_t579 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t658_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(378);
		ArgumentNullException_t651_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(344);
		ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(358);
		ArgumentException_t488_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(314);
		_stringLiteral524 = il2cpp_codegen_string_literal_from_index(524);
		_stringLiteral235 = il2cpp_codegen_string_literal_from_index(235);
		_stringLiteral247 = il2cpp_codegen_string_literal_from_index(247);
		_stringLiteral357 = il2cpp_codegen_string_literal_from_index(357);
		_stringLiteral248 = il2cpp_codegen_string_literal_from_index(248);
		_stringLiteral507 = il2cpp_codegen_string_literal_from_index(507);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		ZipEntry_t591 * L_0 = (__this->___curEntry_10);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t658 * L_1 = (InvalidOperationException_t658 *)il2cpp_codegen_object_new (InvalidOperationException_t658_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m3716(L_1, _stringLiteral524, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0013:
	{
		ByteU5BU5D_t129* L_2 = ___buffer;
		if (L_2)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t651 * L_3 = (ArgumentNullException_t651 *)il2cpp_codegen_object_new (ArgumentNullException_t651_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m3681(L_3, _stringLiteral235, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0021:
	{
		int32_t L_4 = ___offset;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_5 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3697(L_5, _stringLiteral247, _stringLiteral357, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0035:
	{
		int32_t L_6 = ___count;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		ArgumentOutOfRangeException_t654 * L_7 = (ArgumentOutOfRangeException_t654 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t654_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3697(L_7, _stringLiteral248, _stringLiteral357, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0049:
	{
		ByteU5BU5D_t129* L_8 = ___buffer;
		NullCheck(L_8);
		int32_t L_9 = ___offset;
		int32_t L_10 = ___count;
		if ((((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_8)->max_length))))-(int32_t)L_9))) >= ((int32_t)L_10)))
		{
			goto IL_005c;
		}
	}
	{
		ArgumentException_t488 * L_11 = (ArgumentException_t488 *)il2cpp_codegen_object_new (ArgumentException_t488_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2433(L_11, _stringLiteral507, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_005c:
	{
		Crc32_t513 * L_12 = (__this->___crc_9);
		ByteU5BU5D_t129* L_13 = ___buffer;
		int32_t L_14 = ___offset;
		int32_t L_15 = ___count;
		NullCheck(L_12);
		Crc32_Update_m2613(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		int64_t L_16 = (__this->___size_13);
		int32_t L_17 = ___count;
		__this->___size_13 = ((int64_t)((int64_t)L_16+(int64_t)(((int64_t)((int64_t)L_17)))));
		int32_t L_18 = (__this->___curMethod_12);
		V_0 = L_18;
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)0)))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)8)))
		{
			goto IL_0089;
		}
	}
	{
		return;
	}

IL_0089:
	{
		ByteU5BU5D_t129* L_21 = ___buffer;
		int32_t L_22 = ___offset;
		int32_t L_23 = ___count;
		DeflaterOutputStream_Write_m2807(__this, L_21, L_22, L_23, /*hidden argument*/NULL);
		return;
	}

IL_0093:
	{
		String_t* L_24 = DeflaterOutputStream_get_Password_m2787(__this, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00a5;
		}
	}
	{
		ByteU5BU5D_t129* L_25 = ___buffer;
		int32_t L_26 = ___offset;
		int32_t L_27 = ___count;
		ZipOutputStream_CopyAndEncrypt_m3679(__this, L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}

IL_00a5:
	{
		Stream_t506 * L_28 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ByteU5BU5D_t129* L_29 = ___buffer;
		int32_t L_30 = ___offset;
		int32_t L_31 = ___count;
		NullCheck(L_28);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, L_30, L_31);
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::CopyAndEncrypt(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern "C" void ZipOutputStream_CopyAndEncrypt_m3679 (ZipOutputStream_t579 * __this, ByteU5BU5D_t129* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t129* V_0 = {0};
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	{
		V_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, ((int32_t)4096)));
		goto IL_0049;
	}

IL_000d:
	{
		int32_t L_0 = ___count;
		if ((((int32_t)L_0) < ((int32_t)((int32_t)4096))))
		{
			goto IL_001c;
		}
	}
	{
		G_B4_0 = ((int32_t)4096);
		goto IL_001d;
	}

IL_001c:
	{
		int32_t L_1 = ___count;
		G_B4_0 = L_1;
	}

IL_001d:
	{
		V_1 = G_B4_0;
		ByteU5BU5D_t129* L_2 = ___buffer;
		int32_t L_3 = ___offset;
		ByteU5BU5D_t129* L_4 = V_0;
		int32_t L_5 = V_1;
		Array_Copy_m3691(NULL /*static, unused*/, (Array_t *)(Array_t *)L_2, L_3, (Array_t *)(Array_t *)L_4, 0, L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t129* L_6 = V_0;
		int32_t L_7 = V_1;
		DeflaterOutputStream_EncryptBlock_m2789(__this, L_6, 0, L_7, /*hidden argument*/NULL);
		Stream_t506 * L_8 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ByteU5BU5D_t129* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_8, L_9, 0, L_10);
		int32_t L_11 = ___count;
		int32_t L_12 = V_1;
		___count = ((int32_t)((int32_t)L_11-(int32_t)L_12));
		int32_t L_13 = ___offset;
		int32_t L_14 = V_1;
		___offset = ((int32_t)((int32_t)L_13+(int32_t)L_14));
	}

IL_0049:
	{
		int32_t L_15 = ___count;
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}
}
// System.Void ICSharpCode.SharpZipLib.Zip.ZipOutputStream::Finish()
extern TypeInfo* IEnumerator_t142_il2cpp_TypeInfo_var;
extern TypeInfo* ZipEntry_t591_il2cpp_TypeInfo_var;
extern TypeInfo* ZipConstants_t588_il2cpp_TypeInfo_var;
extern TypeInfo* ZipException_t594_il2cpp_TypeInfo_var;
extern TypeInfo* ZipExtraData_t599_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t129_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t160_il2cpp_TypeInfo_var;
extern TypeInfo* ZipHelperStream_t628_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral525;
extern Il2CppCodeGenString* _stringLiteral526;
extern "C" void ZipOutputStream_Finish_m3680 (ZipOutputStream_t579 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(122);
		ZipEntry_t591_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(430);
		ZipConstants_t588_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(393);
		ZipException_t594_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(388);
		ZipExtraData_t599_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(434);
		ByteU5BU5D_t129_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(351);
		IDisposable_t160_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(29);
		ZipHelperStream_t628_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(437);
		_stringLiteral525 = il2cpp_codegen_string_literal_from_index(525);
		_stringLiteral526 = il2cpp_codegen_string_literal_from_index(526);
		s_Il2CppMethodIntialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	ZipEntry_t591 * V_2 = {0};
	ByteU5BU5D_t129* V_3 = {0};
	ZipExtraData_t599 * V_4 = {0};
	ByteU5BU5D_t129* V_5 = {0};
	ByteU5BU5D_t129* V_6 = {0};
	ZipHelperStream_t628 * V_7 = {0};
	Object_t * V_8 = {0};
	Object_t * V_9 = {0};
	Exception_t159 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t159 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	ByteU5BU5D_t129* G_B30_0 = {0};
	{
		ArrayList_t530 * L_0 = (__this->___entries_8);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ZipEntry_t591 * L_1 = (__this->___curEntry_10);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		ZipOutputStream_CloseEntry_m3676(__this, /*hidden argument*/NULL);
	}

IL_0017:
	{
		ArrayList_t530 * L_2 = (__this->___entries_8);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		V_0 = (((int64_t)((int64_t)L_3)));
		V_1 = (((int64_t)((int64_t)0)));
		ArrayList_t530 * L_4 = (__this->___entries_8);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
		V_8 = L_5;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_02ac;
		}

IL_0039:
		{
			Object_t * L_6 = V_8;
			NullCheck(L_6);
			Object_t * L_7 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_6);
			V_2 = ((ZipEntry_t591 *)CastclassClass(L_7, ZipEntry_t591_il2cpp_TypeInfo_var));
			ZipOutputStream_WriteLeInt_m3673(__this, ((int32_t)33639248), /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, ((int32_t)45), /*hidden argument*/NULL);
			ZipEntry_t591 * L_8 = V_2;
			NullCheck(L_8);
			int32_t L_9 = ZipEntry_get_Version_m3269(L_8, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, L_9, /*hidden argument*/NULL);
			ZipEntry_t591 * L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ZipEntry_get_Flags_m3256(L_10, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, L_11, /*hidden argument*/NULL);
			ZipEntry_t591 * L_12 = V_2;
			NullCheck(L_12);
			int32_t L_13 = ZipEntry_get_CompressionMethod_m3286(L_12, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, (((int16_t)((int16_t)L_13))), /*hidden argument*/NULL);
			ZipEntry_t591 * L_14 = V_2;
			NullCheck(L_14);
			int64_t L_15 = ZipEntry_get_DosTime_m3275(L_14, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_15))), /*hidden argument*/NULL);
			ZipEntry_t591 * L_16 = V_2;
			NullCheck(L_16);
			int64_t L_17 = ZipEntry_get_Crc_m3284(L_16, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_17))), /*hidden argument*/NULL);
			ZipEntry_t591 * L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = ZipEntry_IsZip64Forced_m3272(L_18, /*hidden argument*/NULL);
			if (L_19)
			{
				goto IL_00aa;
			}
		}

IL_00a0:
		{
			ZipEntry_t591 * L_20 = V_2;
			NullCheck(L_20);
			int64_t L_21 = ZipEntry_get_CompressedSize_m3282(L_20, /*hidden argument*/NULL);
			if ((((int64_t)L_21) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_00b3;
			}
		}

IL_00aa:
		{
			ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
			goto IL_00c0;
		}

IL_00b3:
		{
			ZipEntry_t591 * L_22 = V_2;
			NullCheck(L_22);
			int64_t L_23 = ZipEntry_get_CompressedSize_m3282(L_22, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_23))), /*hidden argument*/NULL);
		}

IL_00c0:
		{
			ZipEntry_t591 * L_24 = V_2;
			NullCheck(L_24);
			bool L_25 = ZipEntry_IsZip64Forced_m3272(L_24, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_00d2;
			}
		}

IL_00c8:
		{
			ZipEntry_t591 * L_26 = V_2;
			NullCheck(L_26);
			int64_t L_27 = ZipEntry_get_Size_m3280(L_26, /*hidden argument*/NULL);
			if ((((int64_t)L_27) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_00db;
			}
		}

IL_00d2:
		{
			ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
			goto IL_00e8;
		}

IL_00db:
		{
			ZipEntry_t591 * L_28 = V_2;
			NullCheck(L_28);
			int64_t L_29 = ZipEntry_get_Size_m3280(L_28, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_29))), /*hidden argument*/NULL);
		}

IL_00e8:
		{
			ZipEntry_t591 * L_30 = V_2;
			NullCheck(L_30);
			int32_t L_31 = ZipEntry_get_Flags_m3256(L_30, /*hidden argument*/NULL);
			ZipEntry_t591 * L_32 = V_2;
			NullCheck(L_32);
			String_t* L_33 = ZipEntry_get_Name_m3279(L_32, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
			ByteU5BU5D_t129* L_34 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
			V_3 = L_34;
			ByteU5BU5D_t129* L_35 = V_3;
			NullCheck(L_35);
			if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_35)->max_length))))) <= ((int32_t)((int32_t)65535))))
			{
				goto IL_010f;
			}
		}

IL_0104:
		{
			ZipException_t594 * L_36 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_36, _stringLiteral525, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_36);
		}

IL_010f:
		{
			ZipEntry_t591 * L_37 = V_2;
			NullCheck(L_37);
			ByteU5BU5D_t129* L_38 = ZipEntry_get_ExtraData_m3288(L_37, /*hidden argument*/NULL);
			ZipExtraData_t599 * L_39 = (ZipExtraData_t599 *)il2cpp_codegen_object_new (ZipExtraData_t599_il2cpp_TypeInfo_var);
			ZipExtraData__ctor_m3355(L_39, L_38, /*hidden argument*/NULL);
			V_4 = L_39;
			ZipEntry_t591 * L_40 = V_2;
			NullCheck(L_40);
			bool L_41 = ZipEntry_get_CentralHeaderRequiresZip64_m3274(L_40, /*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_018a;
			}
		}

IL_0124:
		{
			ZipExtraData_t599 * L_42 = V_4;
			NullCheck(L_42);
			ZipExtraData_StartNewEntry_m3368(L_42, /*hidden argument*/NULL);
			ZipEntry_t591 * L_43 = V_2;
			NullCheck(L_43);
			bool L_44 = ZipEntry_IsZip64Forced_m3272(L_43, /*hidden argument*/NULL);
			if (L_44)
			{
				goto IL_013d;
			}
		}

IL_0133:
		{
			ZipEntry_t591 * L_45 = V_2;
			NullCheck(L_45);
			int64_t L_46 = ZipEntry_get_Size_m3280(L_45, /*hidden argument*/NULL);
			if ((((int64_t)L_46) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_014a;
			}
		}

IL_013d:
		{
			ZipExtraData_t599 * L_47 = V_4;
			ZipEntry_t591 * L_48 = V_2;
			NullCheck(L_48);
			int64_t L_49 = ZipEntry_get_Size_m3280(L_48, /*hidden argument*/NULL);
			NullCheck(L_47);
			ZipExtraData_AddLeLong_m3374(L_47, L_49, /*hidden argument*/NULL);
		}

IL_014a:
		{
			ZipEntry_t591 * L_50 = V_2;
			NullCheck(L_50);
			bool L_51 = ZipEntry_IsZip64Forced_m3272(L_50, /*hidden argument*/NULL);
			if (L_51)
			{
				goto IL_015c;
			}
		}

IL_0152:
		{
			ZipEntry_t591 * L_52 = V_2;
			NullCheck(L_52);
			int64_t L_53 = ZipEntry_get_CompressedSize_m3282(L_52, /*hidden argument*/NULL);
			if ((((int64_t)L_53) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0169;
			}
		}

IL_015c:
		{
			ZipExtraData_t599 * L_54 = V_4;
			ZipEntry_t591 * L_55 = V_2;
			NullCheck(L_55);
			int64_t L_56 = ZipEntry_get_CompressedSize_m3282(L_55, /*hidden argument*/NULL);
			NullCheck(L_54);
			ZipExtraData_AddLeLong_m3374(L_54, L_56, /*hidden argument*/NULL);
		}

IL_0169:
		{
			ZipEntry_t591 * L_57 = V_2;
			NullCheck(L_57);
			int64_t L_58 = ZipEntry_get_Offset_m3260(L_57, /*hidden argument*/NULL);
			if ((((int64_t)L_58) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0180;
			}
		}

IL_0173:
		{
			ZipExtraData_t599 * L_59 = V_4;
			ZipEntry_t591 * L_60 = V_2;
			NullCheck(L_60);
			int64_t L_61 = ZipEntry_get_Offset_m3260(L_60, /*hidden argument*/NULL);
			NullCheck(L_59);
			ZipExtraData_AddLeLong_m3374(L_59, L_61, /*hidden argument*/NULL);
		}

IL_0180:
		{
			ZipExtraData_t599 * L_62 = V_4;
			NullCheck(L_62);
			ZipExtraData_AddNewEntry_m3369(L_62, 1, /*hidden argument*/NULL);
			goto IL_0193;
		}

IL_018a:
		{
			ZipExtraData_t599 * L_63 = V_4;
			NullCheck(L_63);
			ZipExtraData_Delete_m3375(L_63, 1, /*hidden argument*/NULL);
		}

IL_0193:
		{
			ZipExtraData_t599 * L_64 = V_4;
			NullCheck(L_64);
			ByteU5BU5D_t129* L_65 = ZipExtraData_GetEntryData_m3356(L_64, /*hidden argument*/NULL);
			V_5 = L_65;
			ZipEntry_t591 * L_66 = V_2;
			NullCheck(L_66);
			String_t* L_67 = ZipEntry_get_Comment_m3291(L_66, /*hidden argument*/NULL);
			if (L_67)
			{
				goto IL_01ac;
			}
		}

IL_01a4:
		{
			G_B30_0 = ((ByteU5BU5D_t129*)SZArrayNew(ByteU5BU5D_t129_il2cpp_TypeInfo_var, 0));
			goto IL_01bd;
		}

IL_01ac:
		{
			ZipEntry_t591 * L_68 = V_2;
			NullCheck(L_68);
			int32_t L_69 = ZipEntry_get_Flags_m3256(L_68, /*hidden argument*/NULL);
			ZipEntry_t591 * L_70 = V_2;
			NullCheck(L_70);
			String_t* L_71 = ZipEntry_get_Comment_m3291(L_70, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(ZipConstants_t588_il2cpp_TypeInfo_var);
			ByteU5BU5D_t129* L_72 = ZipConstants_ConvertToArray_m3242(NULL /*static, unused*/, L_69, L_71, /*hidden argument*/NULL);
			G_B30_0 = L_72;
		}

IL_01bd:
		{
			V_6 = G_B30_0;
			ByteU5BU5D_t129* L_73 = V_6;
			NullCheck(L_73);
			if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_73)->max_length))))) <= ((int32_t)((int32_t)65535))))
			{
				goto IL_01d5;
			}
		}

IL_01ca:
		{
			ZipException_t594 * L_74 = (ZipException_t594 *)il2cpp_codegen_object_new (ZipException_t594_il2cpp_TypeInfo_var);
			ZipException__ctor_m3321(L_74, _stringLiteral526, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_74);
		}

IL_01d5:
		{
			ByteU5BU5D_t129* L_75 = V_3;
			NullCheck(L_75);
			ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((int32_t)(((Array_t *)L_75)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5D_t129* L_76 = V_5;
			NullCheck(L_76);
			ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((int32_t)(((Array_t *)L_76)->max_length)))), /*hidden argument*/NULL);
			ByteU5BU5D_t129* L_77 = V_6;
			NullCheck(L_77);
			ZipOutputStream_WriteLeShort_m3672(__this, (((int32_t)((int32_t)(((Array_t *)L_77)->max_length)))), /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, 0, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeShort_m3672(__this, 0, /*hidden argument*/NULL);
			ZipEntry_t591 * L_78 = V_2;
			NullCheck(L_78);
			int32_t L_79 = ZipEntry_get_ExternalFileAttributes_m3262(L_78, /*hidden argument*/NULL);
			if ((((int32_t)L_79) == ((int32_t)(-1))))
			{
				goto IL_0217;
			}
		}

IL_0209:
		{
			ZipEntry_t591 * L_80 = V_2;
			NullCheck(L_80);
			int32_t L_81 = ZipEntry_get_ExternalFileAttributes_m3262(L_80, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, L_81, /*hidden argument*/NULL);
			goto IL_0230;
		}

IL_0217:
		{
			ZipEntry_t591 * L_82 = V_2;
			NullCheck(L_82);
			bool L_83 = ZipEntry_get_IsDirectory_m3293(L_82, /*hidden argument*/NULL);
			if (!L_83)
			{
				goto IL_0229;
			}
		}

IL_021f:
		{
			ZipOutputStream_WriteLeInt_m3673(__this, ((int32_t)16), /*hidden argument*/NULL);
			goto IL_0230;
		}

IL_0229:
		{
			ZipOutputStream_WriteLeInt_m3673(__this, 0, /*hidden argument*/NULL);
		}

IL_0230:
		{
			ZipEntry_t591 * L_84 = V_2;
			NullCheck(L_84);
			int64_t L_85 = ZipEntry_get_Offset_m3260(L_84, /*hidden argument*/NULL);
			if ((((int64_t)L_85) < ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))
			{
				goto IL_0243;
			}
		}

IL_023a:
		{
			ZipOutputStream_WriteLeInt_m3673(__this, (-1), /*hidden argument*/NULL);
			goto IL_0250;
		}

IL_0243:
		{
			ZipEntry_t591 * L_86 = V_2;
			NullCheck(L_86);
			int64_t L_87 = ZipEntry_get_Offset_m3260(L_86, /*hidden argument*/NULL);
			ZipOutputStream_WriteLeInt_m3673(__this, (((int32_t)((int32_t)L_87))), /*hidden argument*/NULL);
		}

IL_0250:
		{
			ByteU5BU5D_t129* L_88 = V_3;
			NullCheck(L_88);
			if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_88)->max_length))))) <= ((int32_t)0)))
			{
				goto IL_0266;
			}
		}

IL_0256:
		{
			Stream_t506 * L_89 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
			ByteU5BU5D_t129* L_90 = V_3;
			ByteU5BU5D_t129* L_91 = V_3;
			NullCheck(L_91);
			NullCheck(L_89);
			VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_89, L_90, 0, (((int32_t)((int32_t)(((Array_t *)L_91)->max_length)))));
		}

IL_0266:
		{
			ByteU5BU5D_t129* L_92 = V_5;
			NullCheck(L_92);
			if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_92)->max_length))))) <= ((int32_t)0)))
			{
				goto IL_027f;
			}
		}

IL_026d:
		{
			Stream_t506 * L_93 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
			ByteU5BU5D_t129* L_94 = V_5;
			ByteU5BU5D_t129* L_95 = V_5;
			NullCheck(L_95);
			NullCheck(L_93);
			VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_93, L_94, 0, (((int32_t)((int32_t)(((Array_t *)L_95)->max_length)))));
		}

IL_027f:
		{
			ByteU5BU5D_t129* L_96 = V_6;
			NullCheck(L_96);
			if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_96)->max_length))))) <= ((int32_t)0)))
			{
				goto IL_0298;
			}
		}

IL_0286:
		{
			Stream_t506 * L_97 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
			ByteU5BU5D_t129* L_98 = V_6;
			ByteU5BU5D_t129* L_99 = V_6;
			NullCheck(L_99);
			NullCheck(L_97);
			VirtActionInvoker3< ByteU5BU5D_t129*, int32_t, int32_t >::Invoke(19 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_97, L_98, 0, (((int32_t)((int32_t)(((Array_t *)L_99)->max_length)))));
		}

IL_0298:
		{
			int64_t L_100 = V_1;
			ByteU5BU5D_t129* L_101 = V_3;
			NullCheck(L_101);
			ByteU5BU5D_t129* L_102 = V_5;
			NullCheck(L_102);
			ByteU5BU5D_t129* L_103 = V_6;
			NullCheck(L_103);
			V_1 = ((int64_t)((int64_t)L_100+(int64_t)(((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)46)+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_101)->max_length))))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_102)->max_length))))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_103)->max_length)))))))))));
		}

IL_02ac:
		{
			Object_t * L_104 = V_8;
			NullCheck(L_104);
			bool L_105 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t142_il2cpp_TypeInfo_var, L_104);
			if (L_105)
			{
				goto IL_0039;
			}
		}

IL_02b8:
		{
			IL2CPP_LEAVE(0x2CF, FINALLY_02ba);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_02ba;
	}

FINALLY_02ba:
	{ // begin finally (depth: 1)
		{
			Object_t * L_106 = V_8;
			V_9 = ((Object_t *)IsInst(L_106, IDisposable_t160_il2cpp_TypeInfo_var));
			Object_t * L_107 = V_9;
			if (!L_107)
			{
				goto IL_02ce;
			}
		}

IL_02c7:
		{
			Object_t * L_108 = V_9;
			NullCheck(L_108);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_108);
		}

IL_02ce:
		{
			IL2CPP_END_FINALLY(698)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(698)
	{
		IL2CPP_JUMP_TBL(0x2CF, IL_02cf)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_02cf:
	{
		Stream_t506 * L_109 = (((DeflaterOutputStream_t548 *)__this)->___baseOutputStream__5);
		ZipHelperStream_t628 * L_110 = (ZipHelperStream_t628 *)il2cpp_codegen_object_new (ZipHelperStream_t628_il2cpp_TypeInfo_var);
		ZipHelperStream__ctor_m3603(L_110, L_109, /*hidden argument*/NULL);
		V_7 = L_110;
	}

IL_02dc:
	try
	{ // begin try (depth: 1)
		ZipHelperStream_t628 * L_111 = V_7;
		int64_t L_112 = V_0;
		int64_t L_113 = V_1;
		int64_t L_114 = (__this->___offset_14);
		ByteU5BU5D_t129* L_115 = (__this->___zipComment_15);
		NullCheck(L_111);
		ZipHelperStream_WriteEndOfCentralDirectory_m3622(L_111, L_112, L_113, L_114, L_115, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2FF, FINALLY_02f3);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t159 *)e.ex;
		goto FINALLY_02f3;
	}

FINALLY_02f3:
	{ // begin finally (depth: 1)
		{
			ZipHelperStream_t628 * L_116 = V_7;
			if (!L_116)
			{
				goto IL_02fe;
			}
		}

IL_02f7:
		{
			ZipHelperStream_t628 * L_117 = V_7;
			NullCheck(L_117);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t160_il2cpp_TypeInfo_var, L_117);
		}

IL_02fe:
		{
			IL2CPP_END_FINALLY(755)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(755)
	{
		IL2CPP_JUMP_TBL(0x2FF, IL_02ff)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t159 *)
	}

IL_02ff:
	{
		__this->___entries_8 = (ArrayList_t530 *)NULL;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
