/*!------------------------------------------------
@file       FugaList.h
@brief      
@attention  なし
--------------------------------------------------*/

#include "FugaList.h"

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
FugaList::FugaList() {
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
FugaList::~FugaList() {
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
void FugaList::initialize() {
	fugas.push_back(new Fuga());
	fugaIntegers.push_back(1);
}

/*!------------------------------------------------
@brief
@note
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out]
@return     なし
@attention  なし
--------------------------------------------------*/
int FugaList::getSize() {
	return fugas.size();
}

/*!------------------------------------------------
@brief
@note
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out]
@return     なし
@attention  なし
--------------------------------------------------*/
int FugaList::getIntegersSize() {
	return fugaIntegers.size();
}

/*!------------------------------------------------
@brief
@note
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out]
@return     なし
@attention  なし
--------------------------------------------------*/
void FugaList::deleteFuga() {
}

/*!------------------------------------------------
@brief
@note
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out]
@return     なし
@attention  なし
--------------------------------------------------*/
void FugaList::deleteFugaInteger() {
}
