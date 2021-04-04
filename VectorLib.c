#include<math.h>
#include<stdio.h>
#include <conio.h>

//Vector struct. It contains 3 integers to denote the vector's magnitude in 3 different axes

typedef struct vector{
	float i,j,k;
}vector;

//Returns the dot product of 2 vectos

float dotProduct(vector Vec1,vector Vec2){
	float dotProd = Vec1.i * Vec2.i + Vec1.j * Vec2.j + Vec1.k * Vec2.k;
	return dotProd;
}

//Returns the magnitude of a vector

float vectorMagnitude(vector VEC){
	return sqrt(pow(VEC.i,2)+pow(VEC.j,2)+pow(VEC.k,2));
}

//Returns the cross product, which is a vector, of 2 input vectors

vector crossProcuct(vector VEC1,vector VEC2){
	vector VEC3;
	VEC3.i=VEC1.j*VEC2.k-VEC2.j*VEC1.k;
	VEC3.j=-(VEC1.i*VEC2.k-VEC2.i*VEC1.k);
	VEC3.k=VEC1.i*VEC2.j-VEC2.i*VEC1.j;
	return VEC3;
}

//Prints the vector in an easily readable form

void showVector(vector Vec) {
	if (Vec.i >= 0) {
		if (Vec.j >= 0) {
			if (Vec.k >= 0) {
				printf("Vector: %fi + %fj + %fk\n", Vec.i, Vec.j, Vec.k);
			}
			else {
				printf("Vector: %fi + %fj - %fk\n", Vec.i, Vec.j, -Vec.k);
			}
		}
		else {
			if (Vec.k >= 0) {
				printf("Vector: %fi - %fj + %fk\n", Vec.i, -Vec.j, Vec.k);
			}
			else {
				printf("Vector: %fi - %fj - %fk\n", Vec.i, -Vec.j, -Vec.k);
			}
		}
	}
	else {
		if (Vec.j >= 0) {
			if (Vec.k >= 0) {
				printf("Vector: -%fi + %fj + %fk\n", -Vec.i, Vec.j, Vec.k);
			}
			else {
				printf("Vector: -%fi + %fj - %fk\n", -Vec.i, Vec.j, -Vec.k);
			}
		}
		else {
			if (Vec.k >= 0) {
				printf("Vector: -%fi - %fj + %fk\n", -Vec.i, -Vec.j, Vec.k);
			}
			else {
				printf("Vector: -%fi - %fj - %fk\n", -Vec.i, -Vec.j, -Vec.k);

			}

		}
	}
}

//Returns the euclidean vector of an input vector. The euclidean vector of a vector is a vector with the same orientation, but with the magnitude of 1.

vector euclideanVector(vector Vec){
	float mag=vectorMagnitude(Vec);
	vector EuVec;
	EuVec.i=Vec.i/mag;
	EuVec.j=Vec.j/mag;
	EuVec.k=Vec.k/mag;
	return EuVec;
}

//Returns the summation of 2 input vectors

vector addVectors(vector Vec1, vector Vec2){
	vector Vec3;
	Vec3.i=Vec1.i+Vec2.i;
	Vec3.j=Vec1.j+Vec2.j;
	Vec3.k=Vec1.k+Vec2.k;
	return Vec3;
}

//Returns the difference of 2 input vectors. ReturnedVec=Vec1-Vec2.

vector subtractVectors(vector Vec1, vector Vec2){
	vector Vec3;
	Vec3.i=Vec1.i-Vec2.i;
	Vec3.j=Vec1.j-Vec2.j;
	Vec3.k=Vec1.k-Vec2.k;
	return Vec3;
}

//Returns a vector multiplied by a number

vector scalarMult(vector Vec, float num){
	vector ReVec;
	ReVec.i=Vec.i*num;
	ReVec.j=Vec.j*num;
	ReVec.k=Vec.k*num;
	return ReVec;
}





