#pragma once
#include "Sprite.h"
#include "Transform.h"
#include "Collider.h"
#include "Color.h"
#include "ResourceManager.h"
#include "Image.h"
#include "KeyCode.h"
struct RenderManager;
class Destination
{
public:
	Sprite sprite; // want it to render the sprite on the transform
	Transform trans;
	Collider collider;  // want it to render the collision rectangle also
	Image winImage;
	Color colliderColor;
	bool oncollision1=false;
	bool oncollision2=false;
	bool oncollision3=false;
	bool oncollision4=false;
	bool oncollision5=false;
	

	void Initialize(ResourceManager& resourseManager, Vector2 startPosition);
	void Update(float dt);
	void Render(RenderManager& renderManager);
};

