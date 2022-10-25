
#include "FbxSkeletalMeshImporter.h"
#include "AssetImportTask.h"
#include "FileHelpers.h"
#include "Factories/FbxFactory.h"
#include "Factories/FbxImportUI.h"
#include "Factories/FbxSkeletalMeshImportData.h"
#include "UObject/Package.h"
#include "Misc/PackageName.h"

void UFbxSkeletalMeshImporter::ImportFromPath(const FString FilePath)
{
	//���ȼ��Ŀ¼�Ƿ����,��������ھʹ���һ��������Ŀ¼
	if (!FPaths::DirectoryExists(FPaths::ProjectContentDir() + BaseDirName))
	{
		IPlatformFile& R = FPlatformFileManager::Get().GetPlatformFile();
		if (!R.CreateDirectory(*(FPaths::ProjectContentDir() + BaseDirName)))
		{
			GEngine->AddOnScreenDebugMessage(0, 10.0f, FColor::Red, "Failed to create /Game/RuntimeAsset DIRECTORY!");
			//UE_LOG(LogTemp, Warning, TEXT("Failed to create /Game/RuntimeAsset DIRECTORY"));
		}
		else GEngine->AddOnScreenDebugMessage(0, 10.0f, FColor::Green, "Successfully Create /Game/RuntimeAsset Directory!");
	}

	//fbxFactory = NewObject<UFbxFactory>();//fbx����
	//UAssetImportTask* importTask = NewObject<UAssetImportTask>();//fbx��������

	//if (fbxFactory)
	//{
	//	if (fbxFactory->FactoryCanImport(FilePath))
	//		GEngine->AddOnScreenDebugMessage(0, 10.0f, FColor::Green, FilePath + "Can Be Imported!");
	//	else { GEngine->AddOnScreenDebugMessage(0, 10.0f, FColor::Red, FilePath + "Can't Be Imported!"); return; }
	//	
	//	fbxFactory->AssetImportTask = importTask;
	//	importTask->bAutomated = true;//�رܵ������õĶԻ���

	//	fbxFactory->SetDetectImportTypeOnImport(false);//����ʶ��skeletalMesh����
	//	fbxFactory->ImportUI->MeshTypeToImport = FBXIT_SkeletalMesh;//���õ���������SkeletalMesh
	//	fbxFactory->ImportUI->bImportMaterials = false;//���������
	//	fbxFactory->ImportUI->SkeletalMeshImportData->bImportMorphTargets = true;//�������Ŀ����

	//	const FString baseFileName = FPaths::GetBaseFilename(FilePath);
	//	const FString packageName = "/Game/" + BaseDirName + "/" + baseFileName;
	//	UE_LOG(LogTemp, Warning, TEXT("BaseFileName: %s"), *baseFileName);
	//	UE_LOG(LogTemp, Warning, TEXT("PackageNames: %s"), *packageName);

	//	UPackage* package = FindPackage(nullptr, *packageName);
	//	if (!package && FEditorFileUtils::IsMapPackageAsset(packageName)) ensure(false);
	//	if (!FPackageName::DoesPackageExist(packageName))
	//	{
	//		package = CreatePackage(*packageName);
	//		if (package) package->FullyLoad();
	//		else { UE_LOG(LogTemp, Warning, TEXT("Create Package: %s  Failed!"), *packageName); return; }
	//	}

	//	fbxFactory->ImportObject(fbxFactory->ResolveSupportedClass(), package, FName(*baseFileName), EObjectFlags::RF_Transactional | EObjectFlags::RF_Public | EObjectFlags::RF_Standalone, FilePath, nullptr, Canceled);
	//}

}
