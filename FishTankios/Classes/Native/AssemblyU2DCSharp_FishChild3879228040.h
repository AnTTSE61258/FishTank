#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Diagnostics.Stopwatch
struct Stopwatch_t1380178105;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FishChild
struct  FishChild_t3879228040  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FishChild::mTransform
	Transform_t3275118058 * ___mTransform_2;
	// UnityEngine.Animator FishChild::mAnimator
	Animator_t69676727 * ___mAnimator_3;
	// UnityEngine.Rigidbody2D FishChild::mRigidBody2D
	Rigidbody2D_t502193897 * ___mRigidBody2D_4;
	// UnityEngine.Camera FishChild::mainCamera
	Camera_t189460977 * ___mainCamera_5;
	// UnityEngine.Vector3 FishChild::targetLocation
	Vector3_t2243707580  ___targetLocation_6;
	// UnityEngine.Vector3 FishChild::currentLocation
	Vector3_t2243707580  ___currentLocation_7;
	// System.Int32 FishChild::mH
	int32_t ___mH_8;
	// System.Int32 FishChild::mW
	int32_t ___mW_9;
	// System.Int32 FishChild::baseYRotation
	int32_t ___baseYRotation_10;
	// System.Diagnostics.Stopwatch FishChild::Stopwatch
	Stopwatch_t1380178105 * ___Stopwatch_12;
	// System.Int32 FishChild::animatorSpeedWhenHold
	int32_t ___animatorSpeedWhenHold_13;
	// System.Boolean FishChild::isHolding
	bool ___isHolding_14;
	// UnityEngine.GameObject FishChild::targetFood
	GameObject_t1756533147 * ___targetFood_15;
	// System.Boolean FishChild::isFindingFood
	bool ___isFindingFood_16;

public:
	inline static int32_t get_offset_of_mTransform_2() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mTransform_2)); }
	inline Transform_t3275118058 * get_mTransform_2() const { return ___mTransform_2; }
	inline Transform_t3275118058 ** get_address_of_mTransform_2() { return &___mTransform_2; }
	inline void set_mTransform_2(Transform_t3275118058 * value)
	{
		___mTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___mTransform_2, value);
	}

	inline static int32_t get_offset_of_mAnimator_3() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mAnimator_3)); }
	inline Animator_t69676727 * get_mAnimator_3() const { return ___mAnimator_3; }
	inline Animator_t69676727 ** get_address_of_mAnimator_3() { return &___mAnimator_3; }
	inline void set_mAnimator_3(Animator_t69676727 * value)
	{
		___mAnimator_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAnimator_3, value);
	}

	inline static int32_t get_offset_of_mRigidBody2D_4() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mRigidBody2D_4)); }
	inline Rigidbody2D_t502193897 * get_mRigidBody2D_4() const { return ___mRigidBody2D_4; }
	inline Rigidbody2D_t502193897 ** get_address_of_mRigidBody2D_4() { return &___mRigidBody2D_4; }
	inline void set_mRigidBody2D_4(Rigidbody2D_t502193897 * value)
	{
		___mRigidBody2D_4 = value;
		Il2CppCodeGenWriteBarrier(&___mRigidBody2D_4, value);
	}

	inline static int32_t get_offset_of_mainCamera_5() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mainCamera_5)); }
	inline Camera_t189460977 * get_mainCamera_5() const { return ___mainCamera_5; }
	inline Camera_t189460977 ** get_address_of_mainCamera_5() { return &___mainCamera_5; }
	inline void set_mainCamera_5(Camera_t189460977 * value)
	{
		___mainCamera_5 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_5, value);
	}

	inline static int32_t get_offset_of_targetLocation_6() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___targetLocation_6)); }
	inline Vector3_t2243707580  get_targetLocation_6() const { return ___targetLocation_6; }
	inline Vector3_t2243707580 * get_address_of_targetLocation_6() { return &___targetLocation_6; }
	inline void set_targetLocation_6(Vector3_t2243707580  value)
	{
		___targetLocation_6 = value;
	}

	inline static int32_t get_offset_of_currentLocation_7() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___currentLocation_7)); }
	inline Vector3_t2243707580  get_currentLocation_7() const { return ___currentLocation_7; }
	inline Vector3_t2243707580 * get_address_of_currentLocation_7() { return &___currentLocation_7; }
	inline void set_currentLocation_7(Vector3_t2243707580  value)
	{
		___currentLocation_7 = value;
	}

	inline static int32_t get_offset_of_mH_8() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mH_8)); }
	inline int32_t get_mH_8() const { return ___mH_8; }
	inline int32_t* get_address_of_mH_8() { return &___mH_8; }
	inline void set_mH_8(int32_t value)
	{
		___mH_8 = value;
	}

	inline static int32_t get_offset_of_mW_9() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___mW_9)); }
	inline int32_t get_mW_9() const { return ___mW_9; }
	inline int32_t* get_address_of_mW_9() { return &___mW_9; }
	inline void set_mW_9(int32_t value)
	{
		___mW_9 = value;
	}

	inline static int32_t get_offset_of_baseYRotation_10() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___baseYRotation_10)); }
	inline int32_t get_baseYRotation_10() const { return ___baseYRotation_10; }
	inline int32_t* get_address_of_baseYRotation_10() { return &___baseYRotation_10; }
	inline void set_baseYRotation_10(int32_t value)
	{
		___baseYRotation_10 = value;
	}

	inline static int32_t get_offset_of_Stopwatch_12() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___Stopwatch_12)); }
	inline Stopwatch_t1380178105 * get_Stopwatch_12() const { return ___Stopwatch_12; }
	inline Stopwatch_t1380178105 ** get_address_of_Stopwatch_12() { return &___Stopwatch_12; }
	inline void set_Stopwatch_12(Stopwatch_t1380178105 * value)
	{
		___Stopwatch_12 = value;
		Il2CppCodeGenWriteBarrier(&___Stopwatch_12, value);
	}

	inline static int32_t get_offset_of_animatorSpeedWhenHold_13() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___animatorSpeedWhenHold_13)); }
	inline int32_t get_animatorSpeedWhenHold_13() const { return ___animatorSpeedWhenHold_13; }
	inline int32_t* get_address_of_animatorSpeedWhenHold_13() { return &___animatorSpeedWhenHold_13; }
	inline void set_animatorSpeedWhenHold_13(int32_t value)
	{
		___animatorSpeedWhenHold_13 = value;
	}

	inline static int32_t get_offset_of_isHolding_14() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___isHolding_14)); }
	inline bool get_isHolding_14() const { return ___isHolding_14; }
	inline bool* get_address_of_isHolding_14() { return &___isHolding_14; }
	inline void set_isHolding_14(bool value)
	{
		___isHolding_14 = value;
	}

	inline static int32_t get_offset_of_targetFood_15() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___targetFood_15)); }
	inline GameObject_t1756533147 * get_targetFood_15() const { return ___targetFood_15; }
	inline GameObject_t1756533147 ** get_address_of_targetFood_15() { return &___targetFood_15; }
	inline void set_targetFood_15(GameObject_t1756533147 * value)
	{
		___targetFood_15 = value;
		Il2CppCodeGenWriteBarrier(&___targetFood_15, value);
	}

	inline static int32_t get_offset_of_isFindingFood_16() { return static_cast<int32_t>(offsetof(FishChild_t3879228040, ___isFindingFood_16)); }
	inline bool get_isFindingFood_16() const { return ___isFindingFood_16; }
	inline bool* get_address_of_isFindingFood_16() { return &___isFindingFood_16; }
	inline void set_isFindingFood_16(bool value)
	{
		___isFindingFood_16 = value;
	}
};

struct FishChild_t3879228040_StaticFields
{
public:
	// System.Int32 FishChild::SPEED_RATE
	int32_t ___SPEED_RATE_11;

public:
	inline static int32_t get_offset_of_SPEED_RATE_11() { return static_cast<int32_t>(offsetof(FishChild_t3879228040_StaticFields, ___SPEED_RATE_11)); }
	inline int32_t get_SPEED_RATE_11() const { return ___SPEED_RATE_11; }
	inline int32_t* get_address_of_SPEED_RATE_11() { return &___SPEED_RATE_11; }
	inline void set_SPEED_RATE_11(int32_t value)
	{
		___SPEED_RATE_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
