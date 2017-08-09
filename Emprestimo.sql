-- phpMyAdmin SQL Dump
-- version 4.5.4.1deb2ubuntu2
-- http://www.phpmyadmin.net
--
-- Host: localhost
-- Generation Time: 09-Ago-2017 às 10:07
-- Versão do servidor: 5.7.18-0ubuntu0.16.04.1
-- PHP Version: 7.0.21-1~ubuntu16.04.1+deb.sury.org+1

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `mydb`
--

-- --------------------------------------------------------

--
-- Estrutura da tabela `Emprestimo`
--

CREATE TABLE `Emprestimo` (
  `CodEmprestimo` int(11) NOT NULL,
  `ResponsavelEquipamento` int(11) DEFAULT NULL,
  `DataEmprestimo` date DEFAULT NULL,
  `NomeSolicitante` int(11) DEFAULT NULL,
  `DataDevolucao` date DEFAULT NULL,
  `CodEquipamento` int(11) DEFAULT NULL,
  `Excluir` tinyint(1) DEFAULT NULL,
  `Devolucao` tinyint(1) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `Emprestimo`
--
ALTER TABLE `Emprestimo`
  ADD PRIMARY KEY (`CodEmprestimo`),
  ADD KEY `CodEquipamento` (`CodEquipamento`),
  ADD KEY `NomeSolicitante` (`NomeSolicitante`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `Emprestimo`
--
ALTER TABLE `Emprestimo`
  MODIFY `CodEmprestimo` int(11) NOT NULL AUTO_INCREMENT;
--
-- Constraints for dumped tables
--

--
-- Limitadores para a tabela `Emprestimo`
--
ALTER TABLE `Emprestimo`
  ADD CONSTRAINT `Emprestimo_ibfk_1` FOREIGN KEY (`CodEquipamento`) REFERENCES `Equipamento` (`CodEquipamento`),
  ADD CONSTRAINT `Emprestimo_ibfk_2` FOREIGN KEY (`NomeSolicitante`) REFERENCES `Solicitante` (`CodSolicitante`);

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
