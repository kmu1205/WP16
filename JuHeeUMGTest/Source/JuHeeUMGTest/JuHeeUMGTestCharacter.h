// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "JuHeeUMGTestCharacter.generated.h"

UCLASS(config=Game)
class AJuHeeUMGTestCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
public:
	AJuHeeUMGTestCharacter();


	// main character's Hp ( min 0.0 ~ max 1.0 )
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = MainCharacter)
		float Hp;


	// add Hp value ( min 0.0 ~ max 1.0 )
	void addHp(float value);

	// subtract Hp value ( min 0.0 ~ max 1.0 )
	void subtractHp(float value);


	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	//UFUNCTION(BlueprintImplementableEvent, Category = Hp)
	//	void SubtractHpTest();

	UFUNCTION(BlueprintImplementableEvent, Category = Hp)
		void SubtractHpTestTest();
protected:

	UFUNCTION(BlueprintCallable, Category=Hp)
	void AddHpTest();
	UFUNCTION(BlueprintCallable, Category = Hp)
	void SubtractHpTest();

	UFUNCTION(BlueprintCallable, Category = Hp)
		void setHpTest(float inputHp);

	void Number5TestCode();
	//UFUNCTION(BlueprintImplementableEvent, Category = Hp)
	//	void SubtractHpTestTest();






	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/** 
	 * Called via input to turn at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate. 
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

public:	
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }


};

