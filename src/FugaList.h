/*!------------------------------------------------
@file       FugaList.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef FUGALIST_H_
#define FUGALIST_H_

// インクルードファイル ================================
#include <vector>
#include "Fuga.h"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       FugaList.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class FugaList {
 public:
  //! Constructor
  FugaList();
  //! Destructor
  virtual ~FugaList();
  void initialize();
  int getSize();
  int getIntegersSize();
  int getFugaSubstantialSize();
  void deleteFuga();
  void deleteFugaInteger();
 protected:
 private:
  std::vector<Fuga*> fugas;
  std::vector<int> fugaIntegers;
  std::vector<Fuga> fugaSubstantial;
};

#endif  // FUGALIST_H_
