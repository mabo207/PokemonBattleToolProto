#ifndef DEF_STRINGBUILDER_H
#define DEF_STRINGBUILDER_H

#include <string>
#include <vector>
#include <memory>

//文字列の分割・結合を行うクラス
//旧バージョンに比べて、deepen設定ができないが、計算速度はstd::vector<>::push_back()のコストを除けば旧バージョンでdeepenしないのと同等くらいの速度が出るので問題ない。
//再Split()も、かかるメモリがそこまで大きくないので痛くない。
class StringBuilder
{
public:
	StringBuilder(const std::string &originStr,
				  const char spliter,
				  const char beginer,
				  const char ender); //先頭要素作成用コンストラクタ
	~StringBuilder();
	std::string GetString() const;
	void Split(const char spliter, const char beginer, const char ender);

	std::vector<StringBuilder> m_vec;

private:
	StringBuilder(const std::shared_ptr<const std::string> &originStr,
				  const size_t topIndex,
				  const size_t length); //末尾作成用コンストラクタ
	StringBuilder(const std::shared_ptr<const std::string> &originStr,
				  const size_t originStrSize,
				  const char spliter,
				  const char beginer,
				  const char ender,
				  const char parentEnder,
				  const size_t topIndex); //分割要素作成用コンストラクタ
	size_t GetButtomIndex() const;
	void Split(const size_t originStrSize,
			   const char spliter,
			   const char beginer,
			   const char ender,
			   const char parentEnder); //コンストラクタ専用

	const std::shared_ptr<const std::string> m_originStr; //分割の元となる文字列
	char m_spliter, m_beginer, m_ender;					  //文字列の区切り方(Split()で変更される可能性があるので非const)
	//m_originStrのどこからどこまでを参照しているか
	const size_t m_topIndex; //コンストラクタ作成時に初期化可能
	size_t m_length;		 //部分文字列の長さ
};

#endif // !DEF_STRINGBUILDER_H