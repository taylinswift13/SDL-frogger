#pragma once
#include "Sprite.h"
#include "Transform.h"
#include "Collider.h"
#include "Color.h"
#include "ResourceManager.h"
#include "Image.h"
struct RenderManager;
class background
{
public:
	Sprite sprite; // want it to render the sprite on the transform
	Transform trans;
	Collider collider;  // want it to render the collision rectangle also
	Image backgroundImage;

	void Initialize(ResourceManager& resourseManager);
	void Update(float dt);
	void Render(RenderManager& renderManager);
};

