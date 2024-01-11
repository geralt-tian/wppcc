// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ROP_APSU_NETWORK_FBS_H_
#define FLATBUFFERS_GENERATED_ROP_APSU_NETWORK_FBS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

#include "apsu/network/ciphertext_generated.h"

namespace apsu {
namespace network {
namespace fbs {

struct ParmsRequest;
struct ParmsRequestBuilder;

struct OPRFRequest;
struct OPRFRequestBuilder;

struct QueryRequestPart;
struct QueryRequestPartBuilder;

struct QueryRequest;
struct QueryRequestBuilder;

struct plainResponse;
struct plainResponseBuilder;

struct ReceiverOperation;
struct ReceiverOperationBuilder;

enum Request : uint8_t {
  Request_NONE = 0,
  Request_ParmsRequest = 1,
  Request_OPRFRequest = 2,
  Request_QueryRequest = 3,
  Request_plainResponse = 4,
  Request_MIN = Request_NONE,
  Request_MAX = Request_plainResponse
};

inline const Request (&EnumValuesRequest())[5] {
  static const Request values[] = {
    Request_NONE,
    Request_ParmsRequest,
    Request_OPRFRequest,
    Request_QueryRequest,
    Request_plainResponse
  };
  return values;
}

inline const char * const *EnumNamesRequest() {
  static const char * const names[6] = {
    "NONE",
    "ParmsRequest",
    "OPRFRequest",
    "QueryRequest",
    "plainResponse",
    nullptr
  };
  return names;
}

inline const char *EnumNameRequest(Request e) {
  if (::flatbuffers::IsOutRange(e, Request_NONE, Request_plainResponse)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesRequest()[index];
}

template<typename T> struct RequestTraits {
  static const Request enum_value = Request_NONE;
};

template<> struct RequestTraits<apsu::network::fbs::ParmsRequest> {
  static const Request enum_value = Request_ParmsRequest;
};

template<> struct RequestTraits<apsu::network::fbs::OPRFRequest> {
  static const Request enum_value = Request_OPRFRequest;
};

template<> struct RequestTraits<apsu::network::fbs::QueryRequest> {
  static const Request enum_value = Request_QueryRequest;
};

template<> struct RequestTraits<apsu::network::fbs::plainResponse> {
  static const Request enum_value = Request_plainResponse;
};

bool VerifyRequest(::flatbuffers::Verifier &verifier, const void *obj, Request type);
bool VerifyRequestVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types);

struct ParmsRequest FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ParmsRequestBuilder Builder;
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           verifier.EndTable();
  }
};

struct ParmsRequestBuilder {
  typedef ParmsRequest Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  explicit ParmsRequestBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ParmsRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ParmsRequest>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ParmsRequest> CreateParmsRequest(
    ::flatbuffers::FlatBufferBuilder &_fbb) {
  ParmsRequestBuilder builder_(_fbb);
  return builder_.Finish();
}

struct OPRFRequest FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef OPRFRequestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DATA = 4
  };
  const ::flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.EndTable();
  }
};

struct OPRFRequestBuilder {
  typedef OPRFRequest Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_data(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(OPRFRequest::VT_DATA, data);
  }
  explicit OPRFRequestBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<OPRFRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<OPRFRequest>(end);
    fbb_.Required(o, OPRFRequest::VT_DATA);
    return o;
  }
};

inline ::flatbuffers::Offset<OPRFRequest> CreateOPRFRequest(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data = 0) {
  OPRFRequestBuilder builder_(_fbb);
  builder_.add_data(data);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<OPRFRequest> CreateOPRFRequestDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *data = nullptr) {
  auto data__ = data ? _fbb.CreateVector<uint8_t>(*data) : 0;
  return apsu::network::fbs::CreateOPRFRequest(
      _fbb,
      data__);
}

struct QueryRequestPart FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef QueryRequestPartBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_EXPONENT = 4,
    VT_CTS = 6
  };
  uint32_t exponent() const {
    return GetField<uint32_t>(VT_EXPONENT, 0);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>> *cts() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>> *>(VT_CTS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_EXPONENT, 4) &&
           VerifyOffsetRequired(verifier, VT_CTS) &&
           verifier.VerifyVector(cts()) &&
           verifier.VerifyVectorOfTables(cts()) &&
           verifier.EndTable();
  }
};

struct QueryRequestPartBuilder {
  typedef QueryRequestPart Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_exponent(uint32_t exponent) {
    fbb_.AddElement<uint32_t>(QueryRequestPart::VT_EXPONENT, exponent, 0);
  }
  void add_cts(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>>> cts) {
    fbb_.AddOffset(QueryRequestPart::VT_CTS, cts);
  }
  explicit QueryRequestPartBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<QueryRequestPart> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<QueryRequestPart>(end);
    fbb_.Required(o, QueryRequestPart::VT_CTS);
    return o;
  }
};

inline ::flatbuffers::Offset<QueryRequestPart> CreateQueryRequestPart(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t exponent = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>>> cts = 0) {
  QueryRequestPartBuilder builder_(_fbb);
  builder_.add_cts(cts);
  builder_.add_exponent(exponent);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<QueryRequestPart> CreateQueryRequestPartDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t exponent = 0,
    const std::vector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>> *cts = nullptr) {
  auto cts__ = cts ? _fbb.CreateVector<::flatbuffers::Offset<apsu::network::fbs::Ciphertext>>(*cts) : 0;
  return apsu::network::fbs::CreateQueryRequestPart(
      _fbb,
      exponent,
      cts__);
}

struct QueryRequest FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef QueryRequestBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COMPRESSION_TYPE = 4,
    VT_RELIN_KEYS = 6,
    VT_QUERY = 8
  };
  uint8_t compression_type() const {
    return GetField<uint8_t>(VT_COMPRESSION_TYPE, 0);
  }
  const ::flatbuffers::Vector<uint8_t> *relin_keys() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_RELIN_KEYS);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>> *query() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>> *>(VT_QUERY);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_COMPRESSION_TYPE, 1) &&
           VerifyOffset(verifier, VT_RELIN_KEYS) &&
           verifier.VerifyVector(relin_keys()) &&
           VerifyOffsetRequired(verifier, VT_QUERY) &&
           verifier.VerifyVector(query()) &&
           verifier.VerifyVectorOfTables(query()) &&
           verifier.EndTable();
  }
};

struct QueryRequestBuilder {
  typedef QueryRequest Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_compression_type(uint8_t compression_type) {
    fbb_.AddElement<uint8_t>(QueryRequest::VT_COMPRESSION_TYPE, compression_type, 0);
  }
  void add_relin_keys(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> relin_keys) {
    fbb_.AddOffset(QueryRequest::VT_RELIN_KEYS, relin_keys);
  }
  void add_query(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>>> query) {
    fbb_.AddOffset(QueryRequest::VT_QUERY, query);
  }
  explicit QueryRequestBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<QueryRequest> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<QueryRequest>(end);
    fbb_.Required(o, QueryRequest::VT_QUERY);
    return o;
  }
};

inline ::flatbuffers::Offset<QueryRequest> CreateQueryRequest(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t compression_type = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> relin_keys = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>>> query = 0) {
  QueryRequestBuilder builder_(_fbb);
  builder_.add_query(query);
  builder_.add_relin_keys(relin_keys);
  builder_.add_compression_type(compression_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<QueryRequest> CreateQueryRequestDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t compression_type = 0,
    const std::vector<uint8_t> *relin_keys = nullptr,
    const std::vector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>> *query = nullptr) {
  auto relin_keys__ = relin_keys ? _fbb.CreateVector<uint8_t>(*relin_keys) : 0;
  auto query__ = query ? _fbb.CreateVector<::flatbuffers::Offset<apsu::network::fbs::QueryRequestPart>>(*query) : 0;
  return apsu::network::fbs::CreateQueryRequest(
      _fbb,
      compression_type,
      relin_keys__,
      query__);
}

struct plainResponse FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef plainResponseBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BUNDLE_IDX = 4,
    VT_PSU_RESULT = 6,
    VT_CACHE_IDX = 8
  };
  uint32_t bundle_idx() const {
    return GetField<uint32_t>(VT_BUNDLE_IDX, 0);
  }
  const ::flatbuffers::Vector<uint64_t> *psu_result() const {
    return GetPointer<const ::flatbuffers::Vector<uint64_t> *>(VT_PSU_RESULT);
  }
  uint32_t cache_idx() const {
    return GetField<uint32_t>(VT_CACHE_IDX, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_BUNDLE_IDX, 4) &&
           VerifyOffsetRequired(verifier, VT_PSU_RESULT) &&
           verifier.VerifyVector(psu_result()) &&
           VerifyField<uint32_t>(verifier, VT_CACHE_IDX, 4) &&
           verifier.EndTable();
  }
};

struct plainResponseBuilder {
  typedef plainResponse Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_bundle_idx(uint32_t bundle_idx) {
    fbb_.AddElement<uint32_t>(plainResponse::VT_BUNDLE_IDX, bundle_idx, 0);
  }
  void add_psu_result(::flatbuffers::Offset<::flatbuffers::Vector<uint64_t>> psu_result) {
    fbb_.AddOffset(plainResponse::VT_PSU_RESULT, psu_result);
  }
  void add_cache_idx(uint32_t cache_idx) {
    fbb_.AddElement<uint32_t>(plainResponse::VT_CACHE_IDX, cache_idx, 0);
  }
  explicit plainResponseBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<plainResponse> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<plainResponse>(end);
    fbb_.Required(o, plainResponse::VT_PSU_RESULT);
    return o;
  }
};

inline ::flatbuffers::Offset<plainResponse> CreateplainResponse(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t bundle_idx = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint64_t>> psu_result = 0,
    uint32_t cache_idx = 0) {
  plainResponseBuilder builder_(_fbb);
  builder_.add_cache_idx(cache_idx);
  builder_.add_psu_result(psu_result);
  builder_.add_bundle_idx(bundle_idx);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<plainResponse> CreateplainResponseDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t bundle_idx = 0,
    const std::vector<uint64_t> *psu_result = nullptr,
    uint32_t cache_idx = 0) {
  auto psu_result__ = psu_result ? _fbb.CreateVector<uint64_t>(*psu_result) : 0;
  return apsu::network::fbs::CreateplainResponse(
      _fbb,
      bundle_idx,
      psu_result__,
      cache_idx);
}

struct ReceiverOperation FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ReceiverOperationBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REQUEST_TYPE = 4,
    VT_REQUEST = 6
  };
  apsu::network::fbs::Request request_type() const {
    return static_cast<apsu::network::fbs::Request>(GetField<uint8_t>(VT_REQUEST_TYPE, 0));
  }
  const void *request() const {
    return GetPointer<const void *>(VT_REQUEST);
  }
  template<typename T> const T *request_as() const;
  const apsu::network::fbs::ParmsRequest *request_as_ParmsRequest() const {
    return request_type() == apsu::network::fbs::Request_ParmsRequest ? static_cast<const apsu::network::fbs::ParmsRequest *>(request()) : nullptr;
  }
  const apsu::network::fbs::OPRFRequest *request_as_OPRFRequest() const {
    return request_type() == apsu::network::fbs::Request_OPRFRequest ? static_cast<const apsu::network::fbs::OPRFRequest *>(request()) : nullptr;
  }
  const apsu::network::fbs::QueryRequest *request_as_QueryRequest() const {
    return request_type() == apsu::network::fbs::Request_QueryRequest ? static_cast<const apsu::network::fbs::QueryRequest *>(request()) : nullptr;
  }
  const apsu::network::fbs::plainResponse *request_as_plainResponse() const {
    return request_type() == apsu::network::fbs::Request_plainResponse ? static_cast<const apsu::network::fbs::plainResponse *>(request()) : nullptr;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_REQUEST_TYPE, 1) &&
           VerifyOffsetRequired(verifier, VT_REQUEST) &&
           VerifyRequest(verifier, request(), request_type()) &&
           verifier.EndTable();
  }
};

template<> inline const apsu::network::fbs::ParmsRequest *ReceiverOperation::request_as<apsu::network::fbs::ParmsRequest>() const {
  return request_as_ParmsRequest();
}

template<> inline const apsu::network::fbs::OPRFRequest *ReceiverOperation::request_as<apsu::network::fbs::OPRFRequest>() const {
  return request_as_OPRFRequest();
}

template<> inline const apsu::network::fbs::QueryRequest *ReceiverOperation::request_as<apsu::network::fbs::QueryRequest>() const {
  return request_as_QueryRequest();
}

template<> inline const apsu::network::fbs::plainResponse *ReceiverOperation::request_as<apsu::network::fbs::plainResponse>() const {
  return request_as_plainResponse();
}

struct ReceiverOperationBuilder {
  typedef ReceiverOperation Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_request_type(apsu::network::fbs::Request request_type) {
    fbb_.AddElement<uint8_t>(ReceiverOperation::VT_REQUEST_TYPE, static_cast<uint8_t>(request_type), 0);
  }
  void add_request(::flatbuffers::Offset<void> request) {
    fbb_.AddOffset(ReceiverOperation::VT_REQUEST, request);
  }
  explicit ReceiverOperationBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ReceiverOperation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ReceiverOperation>(end);
    fbb_.Required(o, ReceiverOperation::VT_REQUEST);
    return o;
  }
};

inline ::flatbuffers::Offset<ReceiverOperation> CreateReceiverOperation(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    apsu::network::fbs::Request request_type = apsu::network::fbs::Request_NONE,
    ::flatbuffers::Offset<void> request = 0) {
  ReceiverOperationBuilder builder_(_fbb);
  builder_.add_request(request);
  builder_.add_request_type(request_type);
  return builder_.Finish();
}

inline bool VerifyRequest(::flatbuffers::Verifier &verifier, const void *obj, Request type) {
  switch (type) {
    case Request_NONE: {
      return true;
    }
    case Request_ParmsRequest: {
      auto ptr = reinterpret_cast<const apsu::network::fbs::ParmsRequest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Request_OPRFRequest: {
      auto ptr = reinterpret_cast<const apsu::network::fbs::OPRFRequest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Request_QueryRequest: {
      auto ptr = reinterpret_cast<const apsu::network::fbs::QueryRequest *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case Request_plainResponse: {
      auto ptr = reinterpret_cast<const apsu::network::fbs::plainResponse *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyRequestVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<uint8_t> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyRequest(
        verifier,  values->Get(i), types->GetEnum<Request>(i))) {
      return false;
    }
  }
  return true;
}

inline const apsu::network::fbs::ReceiverOperation *GetReceiverOperation(const void *buf) {
  return ::flatbuffers::GetRoot<apsu::network::fbs::ReceiverOperation>(buf);
}

inline const apsu::network::fbs::ReceiverOperation *GetSizePrefixedReceiverOperation(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<apsu::network::fbs::ReceiverOperation>(buf);
}

inline bool VerifyReceiverOperationBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<apsu::network::fbs::ReceiverOperation>(nullptr);
}

inline bool VerifySizePrefixedReceiverOperationBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<apsu::network::fbs::ReceiverOperation>(nullptr);
}

inline void FinishReceiverOperationBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<apsu::network::fbs::ReceiverOperation> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedReceiverOperationBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<apsu::network::fbs::ReceiverOperation> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace fbs
}  // namespace network
}  // namespace apsu

#endif  // FLATBUFFERS_GENERATED_ROP_APSU_NETWORK_FBS_H_
