#include "Frog.h"
#include "RenderManager.h"
void Frog::Initialize(ResourceManager& resourseManager)
{
	resourseManager.LoadImageFromFile(frogImage, "../Assets/frog.png");
	sprite.SetImage(frogImage);
	sprite.SetSource(0, 0, 16, 16);
	trans.SetScale(3);
	trans.SetPosition(312, 672);

	collider.SetPosition((int)trans.position.x, (int)trans.position.y);
	collider.SetSize(40, 40);
	//colliderColor.SetColor(255, 255, 255,1);
}

void Frog::Update(float dt)
{
	collider.SetPosition((int)trans.position.x + 4, (int)trans.position.y + 4);
}

void Frog::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
	//renderManager.Render(collider.rect, colliderColor);
}

void Frog::OnKeyDown(KeyCode key)
{
	if (key == KeyCode::W) 
	{
		if (trans.position.y < 148)
		{
			if (trans.position.x > 22 && (trans.position.x < 75) ||
				(trans.position.x > 165) && (trans.position.x < 218) ||
				(trans.position.x > 310) && (trans.position.x < 363) ||
				(trans.position.x > 454) && (trans.position.x < 507) ||
				(trans.position.x > 598) && (trans.position.x < 651))
			{
				trans.position.y -= 48;
				trans.SetRotation(0);
			}
		}
		else
		{
			trans.position.y -= 48;
			trans.SetRotation(0);
		}
	}
	else if (key == KeyCode::S) 
	{
		if (trans.position.y == 672)
		{
			trans.SetRotation(180);
		}
		else {
			trans.position.y += 48;
			trans.SetRotation(180);
		}
	}
	else if (key == KeyCode::A) {
		if (trans.position.x == 24)
		{
			trans.SetRotation(270);
		}
		else {
			trans.position.x -= 48;
			trans.SetRotation(270);
		}
	}
	else if (key == KeyCode::D) {
		if (trans.position.x == 600)
		{
			trans.SetRotation(90);
		}
		else {
			trans.position.x += 48;
			trans.SetRotation(90);
		}
	}
}