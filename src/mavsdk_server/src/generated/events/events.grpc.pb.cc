// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: events/events.proto

#include "events/events.pb.h"
#include "events/events.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace mavsdk {
namespace rpc {
namespace events {

static const char* EventsService_method_names[] = {
  "/mavsdk.rpc.events.EventsService/SubscribeEvents",
  "/mavsdk.rpc.events.EventsService/SubscribeHealthAndArmingChecks",
  "/mavsdk.rpc.events.EventsService/GetHealthAndArmingChecksReport",
};

std::unique_ptr< EventsService::Stub> EventsService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EventsService::Stub> stub(new EventsService::Stub(channel, options));
  return stub;
}

EventsService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_SubscribeEvents_(EventsService_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_SubscribeHealthAndArmingChecks_(EventsService_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::SERVER_STREAMING, channel)
  , rpcmethod_GetHealthAndArmingChecksReport_(EventsService_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::ClientReader< ::mavsdk::rpc::events::EventsResponse>* EventsService::Stub::SubscribeEventsRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeEventsRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::events::EventsResponse>::Create(channel_.get(), rpcmethod_SubscribeEvents_, context, request);
}

void EventsService::Stub::async::SubscribeEvents(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeEventsRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::events::EventsResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::events::EventsResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeEvents_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::events::EventsResponse>* EventsService::Stub::AsyncSubscribeEventsRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeEventsRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::events::EventsResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeEvents_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::events::EventsResponse>* EventsService::Stub::PrepareAsyncSubscribeEventsRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeEventsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::events::EventsResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeEvents_, context, request, false, nullptr);
}

::grpc::ClientReader< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>* EventsService::Stub::SubscribeHealthAndArmingChecksRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest& request) {
  return ::grpc::internal::ClientReaderFactory< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>::Create(channel_.get(), rpcmethod_SubscribeHealthAndArmingChecks_, context, request);
}

void EventsService::Stub::async::SubscribeHealthAndArmingChecks(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest* request, ::grpc::ClientReadReactor< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>* reactor) {
  ::grpc::internal::ClientCallbackReaderFactory< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>::Create(stub_->channel_.get(), stub_->rpcmethod_SubscribeHealthAndArmingChecks_, context, request, reactor);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>* EventsService::Stub::AsyncSubscribeHealthAndArmingChecksRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeHealthAndArmingChecks_, context, request, true, tag);
}

::grpc::ClientAsyncReader< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>* EventsService::Stub::PrepareAsyncSubscribeHealthAndArmingChecksRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncReaderFactory< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>::Create(channel_.get(), cq, rpcmethod_SubscribeHealthAndArmingChecks_, context, request, false, nullptr);
}

::grpc::Status EventsService::Stub::GetHealthAndArmingChecksReport(::grpc::ClientContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest& request, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetHealthAndArmingChecksReport_, context, request, response);
}

void EventsService::Stub::async::GetHealthAndArmingChecksReport(::grpc::ClientContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest* request, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetHealthAndArmingChecksReport_, context, request, response, std::move(f));
}

void EventsService::Stub::async::GetHealthAndArmingChecksReport(::grpc::ClientContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest* request, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetHealthAndArmingChecksReport_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse>* EventsService::Stub::PrepareAsyncGetHealthAndArmingChecksReportRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetHealthAndArmingChecksReport_, context, request);
}

::grpc::ClientAsyncResponseReader< ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse>* EventsService::Stub::AsyncGetHealthAndArmingChecksReportRaw(::grpc::ClientContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncGetHealthAndArmingChecksReportRaw(context, request, cq);
  result->StartCall();
  return result;
}

EventsService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventsService_method_names[0],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< EventsService::Service, ::mavsdk::rpc::events::SubscribeEventsRequest, ::mavsdk::rpc::events::EventsResponse>(
          [](EventsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::events::SubscribeEventsRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::events::EventsResponse>* writer) {
               return service->SubscribeEvents(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventsService_method_names[1],
      ::grpc::internal::RpcMethod::SERVER_STREAMING,
      new ::grpc::internal::ServerStreamingHandler< EventsService::Service, ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest, ::mavsdk::rpc::events::HealthAndArmingChecksResponse>(
          [](EventsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest* req,
             ::grpc::ServerWriter<::mavsdk::rpc::events::HealthAndArmingChecksResponse>* writer) {
               return service->SubscribeHealthAndArmingChecks(ctx, req, writer);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EventsService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EventsService::Service, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EventsService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest* req,
             ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse* resp) {
               return service->GetHealthAndArmingChecksReport(ctx, req, resp);
             }, this)));
}

EventsService::Service::~Service() {
}

::grpc::Status EventsService::Service::SubscribeEvents(::grpc::ServerContext* context, const ::mavsdk::rpc::events::SubscribeEventsRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::events::EventsResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EventsService::Service::SubscribeHealthAndArmingChecks(::grpc::ServerContext* context, const ::mavsdk::rpc::events::SubscribeHealthAndArmingChecksRequest* request, ::grpc::ServerWriter< ::mavsdk::rpc::events::HealthAndArmingChecksResponse>* writer) {
  (void) context;
  (void) request;
  (void) writer;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EventsService::Service::GetHealthAndArmingChecksReport(::grpc::ServerContext* context, const ::mavsdk::rpc::events::GetHealthAndArmingChecksReportRequest* request, ::mavsdk::rpc::events::GetHealthAndArmingChecksReportResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace mavsdk
}  // namespace rpc
}  // namespace events

