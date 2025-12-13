#include "SolidFileNewCommand.h"
#include "../../AliceOperationInterface/Public/AliceIOperation.h"

using namespace alice;
using namespace sdr;

SolidFileNewCommand::~SolidFileNewCommand()
{

}

SolidFileNewCommand::SolidFileNewCommand(alice::IMainWindow* mainWindow, alice::IDocumentManager* docManager) noexcept
{

}

const std::string& sdr::SolidFileNewCommand::Id() const noexcept
{
	static std::string id;
	return id;
}

std::unique_ptr<alice::IOperation> SolidFileNewCommand::Execute(const alice::CommandParameter& param)
{
	return nullptr;
}

std::string SolidFileNewCommand::DisabledReason() const
{
	return std::string();
}

bool SolidFileNewCommand::IsEnabled() const
{
	return true;
}

bool SolidFileNewCommand::IsVisible() const
{
	return true;
}

bool SolidFileNewCommand::IsSupported() const
{
	return true;
}
