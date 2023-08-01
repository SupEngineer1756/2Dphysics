#include <stdio.h>
#include<iostream>
#include <Windows.h>
#include<glad/glad.h>
#include "src/stdafx.h"
#include<GLFW/glfw3.h>
#include "shaderClass.h"
#include "VAO.h"
#include "VBO.h"
#include "EBO.h"
using namespace std;
class WindowHandler {
	public:
		WindowHandler();
		void initialize();
		void assertWindowNotNull(GLFWwindow* window);
		void introduction(GLFWwindow* window);
		void terminate(GLFWwindow* window);
		void configureVBOandEBO(GLFWwindow* window,VBO VBO1, EBO EBO1, VAO VAO1, Shader shaderProgram);
};