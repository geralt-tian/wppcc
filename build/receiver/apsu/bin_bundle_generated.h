// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_BINBUNDLE_APSU_FBS_H_
#define FLATBUFFERS_GENERATED_BINBUNDLE_APSU_FBS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 5 &&
              FLATBUFFERS_VERSION_REVISION == 26,
             "Non-compatible flatbuffers version included");

namespace apsu {
namespace fbs {

struct FEltArray;
struct FEltArrayBuilder;

struct FEltMatrix;
struct FEltMatrixBuilder;

struct Plaintext;
struct PlaintextBuilder;

struct BatchedPlaintextPolyn;
struct BatchedPlaintextPolynBuilder;

struct BinBundleCache;
struct BinBundleCacheBuilder;

struct BinBundle;
struct BinBundleBuilder;

struct FEltArray FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FEltArrayBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FELTS = 4
  };
  const ::flatbuffers::Vector<uint64_t> *felts() const {
    return GetPointer<const ::flatbuffers::Vector<uint64_t> *>(VT_FELTS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_FELTS) &&
           verifier.VerifyVector(felts()) &&
           verifier.EndTable();
  }
};

struct FEltArrayBuilder {
  typedef FEltArray Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_felts(::flatbuffers::Offset<::flatbuffers::Vector<uint64_t>> felts) {
    fbb_.AddOffset(FEltArray::VT_FELTS, felts);
  }
  explicit FEltArrayBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FEltArray> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FEltArray>(end);
    fbb_.Required(o, FEltArray::VT_FELTS);
    return o;
  }
};

inline ::flatbuffers::Offset<FEltArray> CreateFEltArray(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint64_t>> felts = 0) {
  FEltArrayBuilder builder_(_fbb);
  builder_.add_felts(felts);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<FEltArray> CreateFEltArrayDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint64_t> *felts = nullptr) {
  auto felts__ = felts ? _fbb.CreateVector<uint64_t>(*felts) : 0;
  return apsu::fbs::CreateFEltArray(
      _fbb,
      felts__);
}

struct FEltMatrix FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef FEltMatrixBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_ROWS = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltArray>> *rows() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltArray>> *>(VT_ROWS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_ROWS) &&
           verifier.VerifyVector(rows()) &&
           verifier.VerifyVectorOfTables(rows()) &&
           verifier.EndTable();
  }
};

struct FEltMatrixBuilder {
  typedef FEltMatrix Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_rows(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltArray>>> rows) {
    fbb_.AddOffset(FEltMatrix::VT_ROWS, rows);
  }
  explicit FEltMatrixBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<FEltMatrix> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<FEltMatrix>(end);
    fbb_.Required(o, FEltMatrix::VT_ROWS);
    return o;
  }
};

inline ::flatbuffers::Offset<FEltMatrix> CreateFEltMatrix(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltArray>>> rows = 0) {
  FEltMatrixBuilder builder_(_fbb);
  builder_.add_rows(rows);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<FEltMatrix> CreateFEltMatrixDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<apsu::fbs::FEltArray>> *rows = nullptr) {
  auto rows__ = rows ? _fbb.CreateVector<::flatbuffers::Offset<apsu::fbs::FEltArray>>(*rows) : 0;
  return apsu::fbs::CreateFEltMatrix(
      _fbb,
      rows__);
}

struct Plaintext FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef PlaintextBuilder Builder;
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

struct PlaintextBuilder {
  typedef Plaintext Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_data(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(Plaintext::VT_DATA, data);
  }
  explicit PlaintextBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Plaintext> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Plaintext>(end);
    fbb_.Required(o, Plaintext::VT_DATA);
    return o;
  }
};

inline ::flatbuffers::Offset<Plaintext> CreatePlaintext(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data = 0) {
  PlaintextBuilder builder_(_fbb);
  builder_.add_data(data);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Plaintext> CreatePlaintextDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<uint8_t> *data = nullptr) {
  auto data__ = data ? _fbb.CreateVector<uint8_t>(*data) : 0;
  return apsu::fbs::CreatePlaintext(
      _fbb,
      data__);
}

struct BatchedPlaintextPolyn FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BatchedPlaintextPolynBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COEFFS = 4
  };
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::Plaintext>> *coeffs() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::Plaintext>> *>(VT_COEFFS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_COEFFS) &&
           verifier.VerifyVector(coeffs()) &&
           verifier.VerifyVectorOfTables(coeffs()) &&
           verifier.EndTable();
  }
};

struct BatchedPlaintextPolynBuilder {
  typedef BatchedPlaintextPolyn Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_coeffs(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::Plaintext>>> coeffs) {
    fbb_.AddOffset(BatchedPlaintextPolyn::VT_COEFFS, coeffs);
  }
  explicit BatchedPlaintextPolynBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BatchedPlaintextPolyn> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BatchedPlaintextPolyn>(end);
    fbb_.Required(o, BatchedPlaintextPolyn::VT_COEFFS);
    return o;
  }
};

inline ::flatbuffers::Offset<BatchedPlaintextPolyn> CreateBatchedPlaintextPolyn(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::Plaintext>>> coeffs = 0) {
  BatchedPlaintextPolynBuilder builder_(_fbb);
  builder_.add_coeffs(coeffs);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<BatchedPlaintextPolyn> CreateBatchedPlaintextPolynDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<::flatbuffers::Offset<apsu::fbs::Plaintext>> *coeffs = nullptr) {
  auto coeffs__ = coeffs ? _fbb.CreateVector<::flatbuffers::Offset<apsu::fbs::Plaintext>>(*coeffs) : 0;
  return apsu::fbs::CreateBatchedPlaintextPolyn(
      _fbb,
      coeffs__);
}

struct BinBundleCache FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BinBundleCacheBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FELT_MATCHING_POLYNS = 4,
    VT_BATCHED_MATCHING_POLYN = 6,
    VT_FELT_INTERP_POLYNS = 8,
    VT_BATCHED_INTERP_POLYNS = 10
  };
  const apsu::fbs::FEltMatrix *felt_matching_polyns() const {
    return GetPointer<const apsu::fbs::FEltMatrix *>(VT_FELT_MATCHING_POLYNS);
  }
  const apsu::fbs::BatchedPlaintextPolyn *batched_matching_polyn() const {
    return GetPointer<const apsu::fbs::BatchedPlaintextPolyn *>(VT_BATCHED_MATCHING_POLYN);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *felt_interp_polyns() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *>(VT_FELT_INTERP_POLYNS);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>> *batched_interp_polyns() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>> *>(VT_BATCHED_INTERP_POLYNS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_FELT_MATCHING_POLYNS) &&
           verifier.VerifyTable(felt_matching_polyns()) &&
           VerifyOffsetRequired(verifier, VT_BATCHED_MATCHING_POLYN) &&
           verifier.VerifyTable(batched_matching_polyn()) &&
           VerifyOffset(verifier, VT_FELT_INTERP_POLYNS) &&
           verifier.VerifyVector(felt_interp_polyns()) &&
           verifier.VerifyVectorOfTables(felt_interp_polyns()) &&
           VerifyOffset(verifier, VT_BATCHED_INTERP_POLYNS) &&
           verifier.VerifyVector(batched_interp_polyns()) &&
           verifier.VerifyVectorOfTables(batched_interp_polyns()) &&
           verifier.EndTable();
  }
};

struct BinBundleCacheBuilder {
  typedef BinBundleCache Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_felt_matching_polyns(::flatbuffers::Offset<apsu::fbs::FEltMatrix> felt_matching_polyns) {
    fbb_.AddOffset(BinBundleCache::VT_FELT_MATCHING_POLYNS, felt_matching_polyns);
  }
  void add_batched_matching_polyn(::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn> batched_matching_polyn) {
    fbb_.AddOffset(BinBundleCache::VT_BATCHED_MATCHING_POLYN, batched_matching_polyn);
  }
  void add_felt_interp_polyns(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>> felt_interp_polyns) {
    fbb_.AddOffset(BinBundleCache::VT_FELT_INTERP_POLYNS, felt_interp_polyns);
  }
  void add_batched_interp_polyns(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>>> batched_interp_polyns) {
    fbb_.AddOffset(BinBundleCache::VT_BATCHED_INTERP_POLYNS, batched_interp_polyns);
  }
  explicit BinBundleCacheBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BinBundleCache> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BinBundleCache>(end);
    fbb_.Required(o, BinBundleCache::VT_FELT_MATCHING_POLYNS);
    fbb_.Required(o, BinBundleCache::VT_BATCHED_MATCHING_POLYN);
    return o;
  }
};

inline ::flatbuffers::Offset<BinBundleCache> CreateBinBundleCache(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<apsu::fbs::FEltMatrix> felt_matching_polyns = 0,
    ::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn> batched_matching_polyn = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>> felt_interp_polyns = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>>> batched_interp_polyns = 0) {
  BinBundleCacheBuilder builder_(_fbb);
  builder_.add_batched_interp_polyns(batched_interp_polyns);
  builder_.add_felt_interp_polyns(felt_interp_polyns);
  builder_.add_batched_matching_polyn(batched_matching_polyn);
  builder_.add_felt_matching_polyns(felt_matching_polyns);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<BinBundleCache> CreateBinBundleCacheDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<apsu::fbs::FEltMatrix> felt_matching_polyns = 0,
    ::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn> batched_matching_polyn = 0,
    const std::vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *felt_interp_polyns = nullptr,
    const std::vector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>> *batched_interp_polyns = nullptr) {
  auto felt_interp_polyns__ = felt_interp_polyns ? _fbb.CreateVector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>(*felt_interp_polyns) : 0;
  auto batched_interp_polyns__ = batched_interp_polyns ? _fbb.CreateVector<::flatbuffers::Offset<apsu::fbs::BatchedPlaintextPolyn>>(*batched_interp_polyns) : 0;
  return apsu::fbs::CreateBinBundleCache(
      _fbb,
      felt_matching_polyns,
      batched_matching_polyn,
      felt_interp_polyns__,
      batched_interp_polyns__);
}

struct BinBundle FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BinBundleBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_BUNDLE_IDX = 4,
    VT_MOD = 6,
    VT_ITEM_BINS = 8,
    VT_LABEL_BINS = 10,
    VT_CACHE = 12,
    VT_STRIPPED = 14
  };
  uint32_t bundle_idx() const {
    return GetField<uint32_t>(VT_BUNDLE_IDX, 0);
  }
  uint64_t mod() const {
    return GetField<uint64_t>(VT_MOD, 0);
  }
  const apsu::fbs::FEltMatrix *item_bins() const {
    return GetPointer<const apsu::fbs::FEltMatrix *>(VT_ITEM_BINS);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *label_bins() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *>(VT_LABEL_BINS);
  }
  const apsu::fbs::BinBundleCache *cache() const {
    return GetPointer<const apsu::fbs::BinBundleCache *>(VT_CACHE);
  }
  bool stripped() const {
    return GetField<uint8_t>(VT_STRIPPED, 0) != 0;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_BUNDLE_IDX, 4) &&
           VerifyField<uint64_t>(verifier, VT_MOD, 8) &&
           VerifyOffsetRequired(verifier, VT_ITEM_BINS) &&
           verifier.VerifyTable(item_bins()) &&
           VerifyOffset(verifier, VT_LABEL_BINS) &&
           verifier.VerifyVector(label_bins()) &&
           verifier.VerifyVectorOfTables(label_bins()) &&
           VerifyOffset(verifier, VT_CACHE) &&
           verifier.VerifyTable(cache()) &&
           VerifyField<uint8_t>(verifier, VT_STRIPPED, 1) &&
           verifier.EndTable();
  }
};

struct BinBundleBuilder {
  typedef BinBundle Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_bundle_idx(uint32_t bundle_idx) {
    fbb_.AddElement<uint32_t>(BinBundle::VT_BUNDLE_IDX, bundle_idx, 0);
  }
  void add_mod(uint64_t mod) {
    fbb_.AddElement<uint64_t>(BinBundle::VT_MOD, mod, 0);
  }
  void add_item_bins(::flatbuffers::Offset<apsu::fbs::FEltMatrix> item_bins) {
    fbb_.AddOffset(BinBundle::VT_ITEM_BINS, item_bins);
  }
  void add_label_bins(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>> label_bins) {
    fbb_.AddOffset(BinBundle::VT_LABEL_BINS, label_bins);
  }
  void add_cache(::flatbuffers::Offset<apsu::fbs::BinBundleCache> cache) {
    fbb_.AddOffset(BinBundle::VT_CACHE, cache);
  }
  void add_stripped(bool stripped) {
    fbb_.AddElement<uint8_t>(BinBundle::VT_STRIPPED, static_cast<uint8_t>(stripped), 0);
  }
  explicit BinBundleBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BinBundle> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BinBundle>(end);
    fbb_.Required(o, BinBundle::VT_ITEM_BINS);
    return o;
  }
};

inline ::flatbuffers::Offset<BinBundle> CreateBinBundle(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t bundle_idx = 0,
    uint64_t mod = 0,
    ::flatbuffers::Offset<apsu::fbs::FEltMatrix> item_bins = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>> label_bins = 0,
    ::flatbuffers::Offset<apsu::fbs::BinBundleCache> cache = 0,
    bool stripped = false) {
  BinBundleBuilder builder_(_fbb);
  builder_.add_mod(mod);
  builder_.add_cache(cache);
  builder_.add_label_bins(label_bins);
  builder_.add_item_bins(item_bins);
  builder_.add_bundle_idx(bundle_idx);
  builder_.add_stripped(stripped);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<BinBundle> CreateBinBundleDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t bundle_idx = 0,
    uint64_t mod = 0,
    ::flatbuffers::Offset<apsu::fbs::FEltMatrix> item_bins = 0,
    const std::vector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>> *label_bins = nullptr,
    ::flatbuffers::Offset<apsu::fbs::BinBundleCache> cache = 0,
    bool stripped = false) {
  auto label_bins__ = label_bins ? _fbb.CreateVector<::flatbuffers::Offset<apsu::fbs::FEltMatrix>>(*label_bins) : 0;
  return apsu::fbs::CreateBinBundle(
      _fbb,
      bundle_idx,
      mod,
      item_bins,
      label_bins__,
      cache,
      stripped);
}

inline const apsu::fbs::BinBundle *GetBinBundle(const void *buf) {
  return ::flatbuffers::GetRoot<apsu::fbs::BinBundle>(buf);
}

inline const apsu::fbs::BinBundle *GetSizePrefixedBinBundle(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<apsu::fbs::BinBundle>(buf);
}

inline bool VerifyBinBundleBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<apsu::fbs::BinBundle>(nullptr);
}

inline bool VerifySizePrefixedBinBundleBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<apsu::fbs::BinBundle>(nullptr);
}

inline void FinishBinBundleBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<apsu::fbs::BinBundle> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedBinBundleBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<apsu::fbs::BinBundle> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace fbs
}  // namespace apsu

#endif  // FLATBUFFERS_GENERATED_BINBUNDLE_APSU_FBS_H_
