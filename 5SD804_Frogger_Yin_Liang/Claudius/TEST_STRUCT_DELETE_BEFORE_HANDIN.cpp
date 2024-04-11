#include "TEST_STRUCT_DELETE_BEFORE_HANDIN.h"
#include "RenderManager.h"

void TEST_STRUCT_DELETE_BEFORE_HANDIN::Update(float dt)
{

	//trans.ChangeRotation(5);
	collider.SetPosition((int)trans.GetPosition().x + 32, (int)trans.GetPosition().y + 32);
}

void TEST_STRUCT_DELETE_BEFORE_HANDIN::Render(RenderManager& renderManager)
{
	renderManager.Render(sprite, trans);
	renderManager.Render(collider.rect, color);
}
