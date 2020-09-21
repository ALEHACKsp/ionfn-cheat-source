#pragma once
#include "../Header Files/includes.h"
namespace Offsets {
	typedef struct {
		LPCWSTR Name;
		DWORD& Offset;
	} OFFSET;

	extern PVOID* uWorld;

	namespace Engine {
		namespace World {
			extern DWORD OwningGameInstance;
			extern DWORD Levels;
		}

		namespace Level {
			extern DWORD AActors;
		}

		namespace GameInstance {
			extern DWORD LocalPlayers;
		}

		namespace Player {
			extern DWORD PlayerController;
		}

		namespace Controller {
			extern DWORD ControlRotation;
			extern PVOID SetControlRotation;
			extern PVOID ClientSetRotation;
		}

		namespace PlayerController {
			extern DWORD AcknowledgedPawn;
			extern DWORD PlayerCameraManager;
		}

		namespace Pawn {
			extern DWORD PlayerState;
		}

		namespace PlayerState {
			extern PVOID GetPlayerName;
		}

		namespace Actor {
			extern DWORD RootComponent;
			extern DWORD CustomTimeDilation;
		}

		namespace Character {
			extern DWORD Mesh;
		}

		namespace SceneComponent {
			extern DWORD RelativeLocation;
			extern DWORD SceneComponent;
			extern DWORD ComponentVelocity;
		}

		namespace StaticMeshComponent {
			extern DWORD ComponentToWorld;
			extern DWORD StaticMesh;
		}

		namespace SkinnedMeshComponent {
			extern DWORD CachedWorldSpaceBounds;
		}
	}

	namespace FortniteGame {
		namespace FortPawn {
			extern DWORD bIsDBNO;
			extern DWORD bIsDying;
			extern DWORD CurrentWeapon;
		}

		namespace FortPickup {
			extern DWORD PrimaryPickupItemEntry;
		}

		namespace FortItemEntry {
			extern DWORD ItemDefinition;
		}

		namespace FortItemDefinition {
			extern DWORD DisplayName;
			extern DWORD Tier;
		}

		namespace FortPlayerStateAthena {
			extern DWORD TeamIndex;
		}

		namespace FortWeapon {
			extern DWORD WeaponData;
			extern DWORD AmmoCount;
			extern DWORD LastFireAbilityTime;
			extern DWORD LastFireTime;
			extern DWORD LastFireTimeVerified;
		}

		namespace FortWeaponItemDefinition {
			extern DWORD WeaponStatHandle;
		}

		namespace FortProjectileAthena {
			extern DWORD FireStartLoc;
		}

		namespace FortBaseWeaponStats {
			extern DWORD ReloadTime;
			extern DWORD ReloadScale;
			extern DWORD ChargeDownTime;
		}

		namespace BuildingContainer {
			extern DWORD bAlreadySearched;
		}
	}

	BOOLEAN Initialize();
}