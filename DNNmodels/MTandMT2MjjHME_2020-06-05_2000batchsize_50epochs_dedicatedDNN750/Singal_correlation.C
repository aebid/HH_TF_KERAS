void Singal_correlation()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jun  5 01:56:51 2020) by ROOT version 6.20/04
   TCanvas *c1 = new TCanvas("c1", "c1",10,45,700,500);
   c1->SetHighLightColor(2);
   c1->Range(-1.5,-1.5,13.5,13.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH2F *h_Corr = new TH2F("h_Corr","",12,0,12,12,0,12);
   h_Corr->SetBinContent(15,1);
   h_Corr->SetBinContent(16,0.03147293);
   h_Corr->SetBinContent(17,-0.008981855);
   h_Corr->SetBinContent(18,-0.06840771);
   h_Corr->SetBinContent(19,-0.5014622);
   h_Corr->SetBinContent(20,0.07688462);
   h_Corr->SetBinContent(21,-0.0449456);
   h_Corr->SetBinContent(22,-0.04114562);
   h_Corr->SetBinContent(23,0.4220394);
   h_Corr->SetBinContent(24,-0.002809971);
   h_Corr->SetBinContent(25,0.1123234);
   h_Corr->SetBinContent(26,0.2770668);
   h_Corr->SetBinContent(29,0.03147293);
   h_Corr->SetBinContent(30,1);
   h_Corr->SetBinContent(31,0.1361428);
   h_Corr->SetBinContent(32,-0.5879071);
   h_Corr->SetBinContent(33,-0.0408077);
   h_Corr->SetBinContent(34,0.04243996);
   h_Corr->SetBinContent(35,0.02521434);
   h_Corr->SetBinContent(36,0.3215649);
   h_Corr->SetBinContent(37,0.381667);
   h_Corr->SetBinContent(38,-0.0403492);
   h_Corr->SetBinContent(39,-0.01609261);
   h_Corr->SetBinContent(40,0.09271273);
   h_Corr->SetBinContent(43,-0.008981855);
   h_Corr->SetBinContent(44,0.1361428);
   h_Corr->SetBinContent(45,1);
   h_Corr->SetBinContent(46,0.4866365);
   h_Corr->SetBinContent(47,0.00206567);
   h_Corr->SetBinContent(48,0.04442653);
   h_Corr->SetBinContent(49,-0.09548201);
   h_Corr->SetBinContent(50,-0.02606054);
   h_Corr->SetBinContent(51,0.06351791);
   h_Corr->SetBinContent(52,0.009236702);
   h_Corr->SetBinContent(53,-0.008559123);
   h_Corr->SetBinContent(54,-0.02203844);
   h_Corr->SetBinContent(57,-0.06840771);
   h_Corr->SetBinContent(58,-0.5879071);
   h_Corr->SetBinContent(59,0.4866365);
   h_Corr->SetBinContent(60,1);
   h_Corr->SetBinContent(61,0.07364213);
   h_Corr->SetBinContent(62,-0.09086422);
   h_Corr->SetBinContent(63,-0.1967036);
   h_Corr->SetBinContent(64,-0.2381057);
   h_Corr->SetBinContent(65,-0.2867183);
   h_Corr->SetBinContent(66,0.03679344);
   h_Corr->SetBinContent(67,0.02062323);
   h_Corr->SetBinContent(68,-0.1183501);
   h_Corr->SetBinContent(71,-0.5014622);
   h_Corr->SetBinContent(72,-0.0408077);
   h_Corr->SetBinContent(73,0.00206567);
   h_Corr->SetBinContent(74,0.07364213);
   h_Corr->SetBinContent(75,1);
   h_Corr->SetBinContent(76,-0.2039266);
   h_Corr->SetBinContent(77,-0.2714503);
   h_Corr->SetBinContent(78,-0.0126573);
   h_Corr->SetBinContent(79,-0.2008178);
   h_Corr->SetBinContent(80,0.007684838);
   h_Corr->SetBinContent(81,0.5892883);
   h_Corr->SetBinContent(82,-0.4421761);
   h_Corr->SetBinContent(85,0.07688462);
   h_Corr->SetBinContent(86,0.04243996);
   h_Corr->SetBinContent(87,0.04442653);
   h_Corr->SetBinContent(88,-0.09086422);
   h_Corr->SetBinContent(89,-0.2039266);
   h_Corr->SetBinContent(90,1);
   h_Corr->SetBinContent(91,0.5207098);
   h_Corr->SetBinContent(92,-0.03074324);
   h_Corr->SetBinContent(93,0.1694519);
   h_Corr->SetBinContent(94,-0.01110266);
   h_Corr->SetBinContent(95,-0.08249422);
   h_Corr->SetBinContent(96,0.2041058);
   h_Corr->SetBinContent(99,-0.0449456);
   h_Corr->SetBinContent(100,0.02521434);
   h_Corr->SetBinContent(101,-0.09548201);
   h_Corr->SetBinContent(102,-0.1967036);
   h_Corr->SetBinContent(103,-0.2714503);
   h_Corr->SetBinContent(104,0.5207098);
   h_Corr->SetBinContent(105,1);
   h_Corr->SetBinContent(106,0.05022648);
   h_Corr->SetBinContent(107,0.2658711);
   h_Corr->SetBinContent(108,-0.01516969);
   h_Corr->SetBinContent(109,-0.2077087);
   h_Corr->SetBinContent(110,0.3199575);
   h_Corr->SetBinContent(113,-0.04114562);
   h_Corr->SetBinContent(114,0.3215649);
   h_Corr->SetBinContent(115,-0.02606054);
   h_Corr->SetBinContent(116,-0.2381057);
   h_Corr->SetBinContent(117,-0.0126573);
   h_Corr->SetBinContent(118,-0.03074324);
   h_Corr->SetBinContent(119,0.05022648);
   h_Corr->SetBinContent(120,1);
   h_Corr->SetBinContent(121,0.1222015);
   h_Corr->SetBinContent(122,-0.05251292);
   h_Corr->SetBinContent(123,-0.03654656);
   h_Corr->SetBinContent(124,-0.04659871);
   h_Corr->SetBinContent(127,0.4220394);
   h_Corr->SetBinContent(128,0.381667);
   h_Corr->SetBinContent(129,0.06351791);
   h_Corr->SetBinContent(130,-0.2867183);
   h_Corr->SetBinContent(131,-0.2008178);
   h_Corr->SetBinContent(132,0.1694519);
   h_Corr->SetBinContent(133,0.2658711);
   h_Corr->SetBinContent(134,0.1222015);
   h_Corr->SetBinContent(135,1);
   h_Corr->SetBinContent(136,-0.01957766);
   h_Corr->SetBinContent(137,0.2405958);
   h_Corr->SetBinContent(138,0.3709361);
   h_Corr->SetBinContent(141,-0.002809971);
   h_Corr->SetBinContent(142,-0.0403492);
   h_Corr->SetBinContent(143,0.009236702);
   h_Corr->SetBinContent(144,0.03679344);
   h_Corr->SetBinContent(145,0.007684838);
   h_Corr->SetBinContent(146,-0.01110266);
   h_Corr->SetBinContent(147,-0.01516969);
   h_Corr->SetBinContent(148,-0.05251292);
   h_Corr->SetBinContent(149,-0.01957766);
   h_Corr->SetBinContent(150,1);
   h_Corr->SetBinContent(151,0.009041526);
   h_Corr->SetBinContent(152,0.0009671185);
   h_Corr->SetBinContent(155,0.1123234);
   h_Corr->SetBinContent(156,-0.01609261);
   h_Corr->SetBinContent(157,-0.008559123);
   h_Corr->SetBinContent(158,0.02062323);
   h_Corr->SetBinContent(159,0.5892883);
   h_Corr->SetBinContent(160,-0.08249422);
   h_Corr->SetBinContent(161,-0.2077087);
   h_Corr->SetBinContent(162,-0.03654656);
   h_Corr->SetBinContent(163,0.2405958);
   h_Corr->SetBinContent(164,0.009041526);
   h_Corr->SetBinContent(165,1);
   h_Corr->SetBinContent(166,-0.1851017);
   h_Corr->SetBinContent(169,0.2770668);
   h_Corr->SetBinContent(170,0.09271273);
   h_Corr->SetBinContent(171,-0.02203844);
   h_Corr->SetBinContent(172,-0.1183501);
   h_Corr->SetBinContent(173,-0.4421761);
   h_Corr->SetBinContent(174,0.2041058);
   h_Corr->SetBinContent(175,0.3199575);
   h_Corr->SetBinContent(176,-0.04659871);
   h_Corr->SetBinContent(177,0.3709361);
   h_Corr->SetBinContent(178,0.0009671185);
   h_Corr->SetBinContent(179,-0.1851017);
   h_Corr->SetBinContent(180,1);
   h_Corr->SetBinError(15,1);
   h_Corr->SetBinError(16,0.03147293);
   h_Corr->SetBinError(17,0.008981855);
   h_Corr->SetBinError(18,0.06840771);
   h_Corr->SetBinError(19,0.5014622);
   h_Corr->SetBinError(20,0.07688462);
   h_Corr->SetBinError(21,0.0449456);
   h_Corr->SetBinError(22,0.04114562);
   h_Corr->SetBinError(23,0.4220394);
   h_Corr->SetBinError(24,0.002809971);
   h_Corr->SetBinError(25,0.1123234);
   h_Corr->SetBinError(26,0.2770668);
   h_Corr->SetBinError(29,0.03147293);
   h_Corr->SetBinError(30,1);
   h_Corr->SetBinError(31,0.1361428);
   h_Corr->SetBinError(32,0.5879071);
   h_Corr->SetBinError(33,0.0408077);
   h_Corr->SetBinError(34,0.04243996);
   h_Corr->SetBinError(35,0.02521434);
   h_Corr->SetBinError(36,0.3215648);
   h_Corr->SetBinError(37,0.381667);
   h_Corr->SetBinError(38,0.0403492);
   h_Corr->SetBinError(39,0.01609261);
   h_Corr->SetBinError(40,0.09271273);
   h_Corr->SetBinError(43,0.008981855);
   h_Corr->SetBinError(44,0.1361428);
   h_Corr->SetBinError(45,1);
   h_Corr->SetBinError(46,0.4866365);
   h_Corr->SetBinError(47,0.00206567);
   h_Corr->SetBinError(48,0.04442654);
   h_Corr->SetBinError(49,0.09548201);
   h_Corr->SetBinError(50,0.02606054);
   h_Corr->SetBinError(51,0.06351791);
   h_Corr->SetBinError(52,0.009236702);
   h_Corr->SetBinError(53,0.008559123);
   h_Corr->SetBinError(54,0.02203844);
   h_Corr->SetBinError(57,0.06840771);
   h_Corr->SetBinError(58,0.5879071);
   h_Corr->SetBinError(59,0.4866365);
   h_Corr->SetBinError(60,1);
   h_Corr->SetBinError(61,0.07364214);
   h_Corr->SetBinError(62,0.09086422);
   h_Corr->SetBinError(63,0.1967036);
   h_Corr->SetBinError(64,0.2381057);
   h_Corr->SetBinError(65,0.2867183);
   h_Corr->SetBinError(66,0.03679344);
   h_Corr->SetBinError(67,0.02062323);
   h_Corr->SetBinError(68,0.1183501);
   h_Corr->SetBinError(71,0.5014622);
   h_Corr->SetBinError(72,0.0408077);
   h_Corr->SetBinError(73,0.00206567);
   h_Corr->SetBinError(74,0.07364214);
   h_Corr->SetBinError(75,1);
   h_Corr->SetBinError(76,0.2039266);
   h_Corr->SetBinError(77,0.2714503);
   h_Corr->SetBinError(78,0.0126573);
   h_Corr->SetBinError(79,0.2008178);
   h_Corr->SetBinError(80,0.007684838);
   h_Corr->SetBinError(81,0.5892883);
   h_Corr->SetBinError(82,0.4421761);
   h_Corr->SetBinError(85,0.07688462);
   h_Corr->SetBinError(86,0.04243996);
   h_Corr->SetBinError(87,0.04442654);
   h_Corr->SetBinError(88,0.09086422);
   h_Corr->SetBinError(89,0.2039266);
   h_Corr->SetBinError(90,1);
   h_Corr->SetBinError(91,0.5207098);
   h_Corr->SetBinError(92,0.03074324);
   h_Corr->SetBinError(93,0.1694519);
   h_Corr->SetBinError(94,0.01110266);
   h_Corr->SetBinError(95,0.08249422);
   h_Corr->SetBinError(96,0.2041058);
   h_Corr->SetBinError(99,0.0449456);
   h_Corr->SetBinError(100,0.02521434);
   h_Corr->SetBinError(101,0.09548201);
   h_Corr->SetBinError(102,0.1967036);
   h_Corr->SetBinError(103,0.2714503);
   h_Corr->SetBinError(104,0.5207098);
   h_Corr->SetBinError(105,1);
   h_Corr->SetBinError(106,0.05022648);
   h_Corr->SetBinError(107,0.2658711);
   h_Corr->SetBinError(108,0.01516969);
   h_Corr->SetBinError(109,0.2077087);
   h_Corr->SetBinError(110,0.3199575);
   h_Corr->SetBinError(113,0.04114562);
   h_Corr->SetBinError(114,0.3215648);
   h_Corr->SetBinError(115,0.02606054);
   h_Corr->SetBinError(116,0.2381057);
   h_Corr->SetBinError(117,0.0126573);
   h_Corr->SetBinError(118,0.03074324);
   h_Corr->SetBinError(119,0.05022648);
   h_Corr->SetBinError(120,1);
   h_Corr->SetBinError(121,0.1222015);
   h_Corr->SetBinError(122,0.05251292);
   h_Corr->SetBinError(123,0.03654656);
   h_Corr->SetBinError(124,0.04659871);
   h_Corr->SetBinError(127,0.4220394);
   h_Corr->SetBinError(128,0.381667);
   h_Corr->SetBinError(129,0.06351791);
   h_Corr->SetBinError(130,0.2867183);
   h_Corr->SetBinError(131,0.2008178);
   h_Corr->SetBinError(132,0.1694519);
   h_Corr->SetBinError(133,0.2658711);
   h_Corr->SetBinError(134,0.1222015);
   h_Corr->SetBinError(135,1);
   h_Corr->SetBinError(136,0.01957766);
   h_Corr->SetBinError(137,0.2405958);
   h_Corr->SetBinError(138,0.3709361);
   h_Corr->SetBinError(141,0.002809971);
   h_Corr->SetBinError(142,0.0403492);
   h_Corr->SetBinError(143,0.009236702);
   h_Corr->SetBinError(144,0.03679344);
   h_Corr->SetBinError(145,0.007684838);
   h_Corr->SetBinError(146,0.01110266);
   h_Corr->SetBinError(147,0.01516969);
   h_Corr->SetBinError(148,0.05251292);
   h_Corr->SetBinError(149,0.01957766);
   h_Corr->SetBinError(150,1);
   h_Corr->SetBinError(151,0.009041526);
   h_Corr->SetBinError(152,0.0009671185);
   h_Corr->SetBinError(155,0.1123234);
   h_Corr->SetBinError(156,0.01609261);
   h_Corr->SetBinError(157,0.008559123);
   h_Corr->SetBinError(158,0.02062323);
   h_Corr->SetBinError(159,0.5892883);
   h_Corr->SetBinError(160,0.08249422);
   h_Corr->SetBinError(161,0.2077087);
   h_Corr->SetBinError(162,0.03654656);
   h_Corr->SetBinError(163,0.2405958);
   h_Corr->SetBinError(164,0.009041526);
   h_Corr->SetBinError(165,1);
   h_Corr->SetBinError(166,0.1851017);
   h_Corr->SetBinError(169,0.2770668);
   h_Corr->SetBinError(170,0.09271273);
   h_Corr->SetBinError(171,0.02203844);
   h_Corr->SetBinError(172,0.1183501);
   h_Corr->SetBinError(173,0.4421761);
   h_Corr->SetBinError(174,0.2041058);
   h_Corr->SetBinError(175,0.3199575);
   h_Corr->SetBinError(176,0.04659871);
   h_Corr->SetBinError(177,0.3709361);
   h_Corr->SetBinError(178,0.0009671185);
   h_Corr->SetBinError(179,0.1851017);
   h_Corr->SetBinError(180,1);
   h_Corr->SetEntries(144);
   h_Corr->SetStats(0);
   h_Corr->SetContour(20);
   h_Corr->SetContourLevel(0,-0.5879071);
   h_Corr->SetContourLevel(1,-0.5085118);
   h_Corr->SetContourLevel(2,-0.4291164);
   h_Corr->SetContourLevel(3,-0.3497211);
   h_Corr->SetContourLevel(4,-0.2703257);
   h_Corr->SetContourLevel(5,-0.1909304);
   h_Corr->SetContourLevel(6,-0.111535);
   h_Corr->SetContourLevel(7,-0.03213964);
   h_Corr->SetContourLevel(8,0.04725572);
   h_Corr->SetContourLevel(9,0.1266511);
   h_Corr->SetContourLevel(10,0.2060464);
   h_Corr->SetContourLevel(11,0.2854418);
   h_Corr->SetContourLevel(12,0.3648371);
   h_Corr->SetContourLevel(13,0.4442325);
   h_Corr->SetContourLevel(14,0.5236279);
   h_Corr->SetContourLevel(15,0.6030232);
   h_Corr->SetContourLevel(16,0.6824186);
   h_Corr->SetContourLevel(17,0.7618139);
   h_Corr->SetContourLevel(18,0.8412093);
   h_Corr->SetContourLevel(19,0.9206046);
   
   TPaletteAxis *palette = new TPaletteAxis(12.075,0,12.75,12,h_Corr);
   palette->SetLabelColor(1);
   palette->SetLabelFont(42);
   palette->SetLabelOffset(0.005);
   palette->SetLabelSize(0.035);
   palette->SetTitleOffset(1);
   palette->SetTitleSize(0.035);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f9f90e");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   h_Corr->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#000099");
   h_Corr->SetLineColor(ci);
   h_Corr->GetXaxis()->SetBinLabel(1,"jj_pt");
   h_Corr->GetXaxis()->SetBinLabel(2,"ll_pt");
   h_Corr->GetXaxis()->SetBinLabel(3,"ll_M");
   h_Corr->GetXaxis()->SetBinLabel(4,"ll_DR_l_l");
   h_Corr->GetXaxis()->SetBinLabel(5,"jj_DR_j_j");
   h_Corr->GetXaxis()->SetBinLabel(6,"llmetjj_DPhi_ll_jj");
   h_Corr->GetXaxis()->SetBinLabel(7,"llmetjj_minDR_l_j");
   h_Corr->GetXaxis()->SetBinLabel(8,"llmetjj_MTformula");
   h_Corr->GetXaxis()->SetBinLabel(9,"mt2");
   h_Corr->GetXaxis()->SetBinLabel(10,"isSF_float");
   h_Corr->GetXaxis()->SetBinLabel(11,"jj_M");
   h_Corr->GetXaxis()->SetBinLabel(12,"hme_h2mass_reco");
   h_Corr->GetXaxis()->SetLabelFont(42);
   h_Corr->GetXaxis()->SetTitleOffset(1);
   h_Corr->GetXaxis()->SetTitleFont(42);
   h_Corr->GetYaxis()->SetBinLabel(1,"jj_pt");
   h_Corr->GetYaxis()->SetBinLabel(2,"ll_pt");
   h_Corr->GetYaxis()->SetBinLabel(3,"ll_M");
   h_Corr->GetYaxis()->SetBinLabel(4,"ll_DR_l_l");
   h_Corr->GetYaxis()->SetBinLabel(5,"jj_DR_j_j");
   h_Corr->GetYaxis()->SetBinLabel(6,"llmetjj_DPhi_ll_jj");
   h_Corr->GetYaxis()->SetBinLabel(7,"llmetjj_minDR_l_j");
   h_Corr->GetYaxis()->SetBinLabel(8,"llmetjj_MTformula");
   h_Corr->GetYaxis()->SetBinLabel(9,"mt2");
   h_Corr->GetYaxis()->SetBinLabel(10,"isSF_float");
   h_Corr->GetYaxis()->SetBinLabel(11,"jj_M");
   h_Corr->GetYaxis()->SetBinLabel(12,"hme_h2mass_reco");
   h_Corr->GetYaxis()->SetLabelFont(42);
   h_Corr->GetYaxis()->SetTitleFont(42);
   h_Corr->GetZaxis()->SetLabelFont(42);
   h_Corr->GetZaxis()->SetTitleOffset(1);
   h_Corr->GetZaxis()->SetTitleFont(42);
   h_Corr->Draw("colzTEXT");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
